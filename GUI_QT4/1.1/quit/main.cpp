#include <QWidget>
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton *button = new QPushButton("quit");
    QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit()));

    button->show();

    return a.exec();
}
