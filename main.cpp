#include "mainwindow.h"
#include <QApplication>
#include <string_view>
#include <iostream>

int main(int argc, char *argv[])
{
    std::string str{"Hello world!"};
    std::string_view sw(str);
    std::cout << sw << std::endl;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
