/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lblCpuTemperature;
    QLabel *lblCpuFrequency;
    QLabel *lblCpuStrategy;
    QLabel *label_7;
    QPushButton *btnStrategyPerformance;
    QPushButton *btnStrategyOndemand;
    QPushButton *btnStrategyPowersave;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *lblFanSpeed;
    QPushButton *btnFanSpeedAuto;
    QSlider *sdrFanSpeed;
    QLabel *label_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(362, 695);
        MainWindow->setMinimumSize(QSize(362, 695));
        MainWindow->setMaximumSize(QSize(362, 695));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 341, 641));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setStrikeOut(false);
        groupBox->setFont(font);
        groupBox->setMouseTracking(false);
        groupBox->setTabletTracking(false);
        groupBox->setAcceptDrops(false);
        groupBox->setAutoFillBackground(false);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 61, 23));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 61, 23));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblCpuTemperature = new QLabel(groupBox);
        lblCpuTemperature->setObjectName(QStringLiteral("lblCpuTemperature"));
        lblCpuTemperature->setGeometry(QRect(101, 70, 211, 23));
        lblCpuTemperature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblCpuFrequency = new QLabel(groupBox);
        lblCpuFrequency->setObjectName(QStringLiteral("lblCpuFrequency"));
        lblCpuFrequency->setGeometry(QRect(101, 130, 211, 23));
        lblCpuFrequency->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblCpuStrategy = new QLabel(groupBox);
        lblCpuStrategy->setObjectName(QStringLiteral("lblCpuStrategy"));
        lblCpuStrategy->setGeometry(QRect(100, 200, 211, 23));
        lblCpuStrategy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(19, 200, 71, 23));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnStrategyPerformance = new QPushButton(groupBox);
        btnStrategyPerformance->setObjectName(QStringLiteral("btnStrategyPerformance"));
        btnStrategyPerformance->setGeometry(QRect(50, 260, 81, 32));
        btnStrategyPerformance->setCursor(QCursor(Qt::PointingHandCursor));
        btnStrategyOndemand = new QPushButton(groupBox);
        btnStrategyOndemand->setObjectName(QStringLiteral("btnStrategyOndemand"));
        btnStrategyOndemand->setGeometry(QRect(140, 260, 81, 32));
        btnStrategyOndemand->setCursor(QCursor(Qt::PointingHandCursor));
        btnStrategyPowersave = new QPushButton(groupBox);
        btnStrategyPowersave->setObjectName(QStringLiteral("btnStrategyPowersave"));
        btnStrategyPowersave->setGeometry(QRect(230, 260, 81, 32));
        btnStrategyPowersave->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 90, 61, 23));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblFanSpeed = new QLabel(groupBox_2);
        lblFanSpeed->setObjectName(QStringLiteral("lblFanSpeed"));
        lblFanSpeed->setGeometry(QRect(190, 90, 121, 23));
        lblFanSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btnFanSpeedAuto = new QPushButton(groupBox_2);
        btnFanSpeedAuto->setObjectName(QStringLiteral("btnFanSpeedAuto"));
        btnFanSpeedAuto->setGeometry(QRect(90, 150, 171, 31));
        btnFanSpeedAuto->setCursor(QCursor(Qt::PointingHandCursor));
        sdrFanSpeed = new QSlider(groupBox_2);
        sdrFanSpeed->setObjectName(QStringLiteral("sdrFanSpeed"));
        sdrFanSpeed->setGeometry(QRect(40, 260, 271, 31));
        sdrFanSpeed->setCursor(QCursor(Qt::PointingHandCursor));
        sdrFanSpeed->setMinimum(85);
        sdrFanSpeed->setMaximum(255);
        sdrFanSpeed->setPageStep(0);
        sdrFanSpeed->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 220, 61, 23));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Cputroller", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "CPU", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("MainWindow", "itemname", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246\357\274\232", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QApplication::translate("MainWindow", "itemname", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("MainWindow", "\351\242\221\347\216\207\357\274\232", nullptr));
        lblCpuTemperature->setText(QApplication::translate("MainWindow", "\346\232\202\346\227\240\346\225\260\346\215\256", nullptr));
        lblCpuFrequency->setText(QApplication::translate("MainWindow", "\346\232\202\346\227\240\346\225\260\346\215\256", nullptr));
        lblCpuStrategy->setText(QApplication::translate("MainWindow", "\346\232\202\346\227\240\346\225\260\346\215\256", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_7->setAccessibleName(QApplication::translate("MainWindow", "itemname", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_7->setText(QApplication::translate("MainWindow", "\347\255\226\347\225\245\357\274\232", nullptr));
        btnStrategyPerformance->setText(QApplication::translate("MainWindow", "\346\200\247\350\203\275", nullptr));
        btnStrategyOndemand->setText(QApplication::translate("MainWindow", "\346\214\211\351\234\200", nullptr));
        btnStrategyPowersave->setText(QApplication::translate("MainWindow", "\350\212\202\350\203\275", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\351\243\216\346\211\207", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_9->setAccessibleName(QApplication::translate("MainWindow", "itemname", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_9->setText(QApplication::translate("MainWindow", "\350\275\254\351\200\237\357\274\232", nullptr));
        lblFanSpeed->setText(QApplication::translate("MainWindow", "\346\232\202\346\227\240\346\225\260\346\215\256", nullptr));
        btnFanSpeedAuto->setText(QApplication::translate("MainWindow", "\350\256\276\344\270\272\350\207\252\345\212\250", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        label_10->setAccessibleName(QApplication::translate("MainWindow", "itemname", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_10->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\350\260\203\350\212\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
