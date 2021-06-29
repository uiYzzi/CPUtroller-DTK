#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "utils.h"
#include <QDir>
#include <QDebug>
#include <DTitlebar>

const QString speedMethod = "/pwm1_enable";
const QString manualSpeed = "/pwm1";
const QString currentSpeed = "/fan1_input";
const QString temperature = "/temp1_input";
const QString ONDEMAND = "ondemand", POWERSAVE = "powersave", PERFORMANCE = "performance";

QString findCPUDir() {
    QString prefix = "/sys/class/hwmon";
    QDir dirs(prefix);
    dirs.setFilter(QDir::Dirs);
    foreach(QFileInfo dir, dirs.entryInfoList()) {
        if (dir.fileName() == "." || dir.fileName() == "..") continue;
        QString fullDir = dir.absoluteFilePath();
        if (Utils::isFileExist(fullDir + speedMethod) && Utils::isFileExist(fullDir + manualSpeed) && Utils::isFileExist(fullDir + currentSpeed) && Utils::isFileExist(fullDir + temperature)) {
            return fullDir;
        }
    }
    return "";
}

MainWindow::MainWindow(QWidget *parent) :
    DMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    titlebar()->setTitle("");
    titlebar()->setIcon(QIcon::fromTheme(":/icon/top.yzzi.cputroller.svg"));
    setTitlebarShadowEnabled(true);
    cpuDir = findCPUDir();
    updateTimer = startTimer(500);
    cpuNumber = Utils::exec("cpufreq-info | grep 'analyzing CPU'").split("\n").size();
}

void MainWindow::timerEvent(QTimerEvent *event) {
    if (event->timerId() == updateTimer) {
        update();
    }
}

void MainWindow::changeStrategy(QString strategy) {
    QStringList cmds;
    cmds.append("#!/bin/bash");
    for (int i = 0; i < cpuNumber; ++i) {
        cmds.append("cpufreq-set -c " + QString::number(i) + " -g " + strategy);
    }
    QString shPath = "/tmp/Cputroller_" + strategy;
    Utils::writeFile(shPath, cmds.join("\n"));
    Utils::exec("chmod +x " + shPath);
    Utils::sudo(shPath);
}

void MainWindow::update() {
    ui->lblCpuFrequency->setText(Utils::exec("cat /proc/cpuinfo | grep -i mhz | awk 'BEGIN {sum=0; max=0; min=99999;} {if ($4 > max) max = $4; fi; if ($4 < min) min = $4; fi; sum += $4} END {printf(\"Avg %d MAX %d MIN %d\", int(sum / NR), max, min)}'"));
    QString cm = Utils::exec("cpufreq-info -p | awk '{print($3)}'"), cmz;
    if (cm == ONDEMAND) cmz = "On Demand";
    else if (cm == PERFORMANCE) cmz = "Performance";
    else if (cm == POWERSAVE) cmz = "Power Save";
    else cmz = "Other";
    ui->lblCpuStrategy->setText(cmz);
    if (!cpuDir.isEmpty()) {
        ui->lblCpuTemperature->setText(Utils::exec("cat " + cpuDir + "/" + temperature + " | cut -c-2") + "℃");
        if (Utils::exec("cat " + cpuDir + "/" + speedMethod) == "1") {
            ui->lblFanSpeed->setText("Manual " + Utils::exec("cat " + cpuDir + "/" + manualSpeed) + "/255");
        }
        else {
            ui->lblFanSpeed->setText("Auto " + Utils::exec("cat " + cpuDir + "/" + currentSpeed));
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnFanSpeedAuto_clicked()
{
    if (cpuDir.isEmpty()) return;
    Utils::writeSystemFile(cpuDir + "/" + speedMethod, "2");
}

void MainWindow::on_sdrFanSpeed_sliderReleased()
{
    if (cpuDir.isEmpty()) return;
    Utils::writeSystemFile(cpuDir + "/" + manualSpeed, QString::number(ui->sdrFanSpeed->value()));
}

void MainWindow::on_btnStrategyPerformance_clicked()
{
    changeStrategy(PERFORMANCE);
}

void MainWindow::on_btnStrategyOndemand_clicked()
{
    changeStrategy(ONDEMAND);
}

void MainWindow::on_btnStrategyPowersave_clicked()
{
    changeStrategy(POWERSAVE);
}
