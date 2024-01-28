#include "yourmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YourManager w;
    QWidget window;
    window.setStyleSheet("background-color: black;");
    window.setFixedSize(393, 496);
    w.show();
    return a.exec();
}
