#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>  //Dtk::Widget::moveToCenter(&w); 要调用它，就得引用DWidgetUtil
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();  //让bar处在标题栏中
    DApplication a(argc, argv);
    MainWindow w;

    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    a.loadTranslator();
    a.setOrganizationName("CPUtroller-DTK");
    a.setApplicationVersion(DApplication::buildVersion("1.0"));
    a.setApplicationAcknowledgementPage("https://yzzi.top");
    a.setProductIcon(QIcon(":/icon/top.yzzi.cputroller.svg"));  //设置Logo
    a.setProductName("CPUtroller-DTK");
    a.setApplicationVersion("1.1");
    a.setApplicationName("CPUtrollerDTK"); //只有在这儿修改窗口标题才有效

    w.show();
    Dtk::Widget::moveToCenter(&w);
    return a.exec();
}
