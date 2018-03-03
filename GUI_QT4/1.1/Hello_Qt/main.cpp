#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    /*
     * QApplication:用于管理整个应用程序所用到的资源；
    */
    QApplication a(argc, argv);

    /*
     * QLabel - 窗口部件：窗口界面就是用户界面中的一个可视化元素；
     * Qt很灵活，任意的窗口部件都可以用作窗口，本例中就是用窗口部件QLabel作为应用程序的窗口；
    */

    // QLabel *label = new QLabel("Hello Qt!");
    QLabel *label = new QLabel("<h2><i>Hello</i><font color=red>Qt!</font></h2>");

    /*
     * 设置 Qlabel 标签可见，在创建窗口部件的时候，标签通常都是隐藏的，
     * 这就允许我们先对其设置然后再显示他们，从而便面了窗口部件的闪烁现象；
    */
    label->show();

    /*
     * 将应用程序的控制权传递给Qt，此时程序会进入事件循环状态，等待用户的动作；
    */
    return a.exec();
}
