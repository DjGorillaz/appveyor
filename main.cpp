#include "mainwindow.h"
#include <QApplication>
#include <string_view>
#include <iostream>
#include <Eigen/Dense>

int main(int argc, char *argv[])
{
    int N = 10;
    Eigen::ArrayXXd sample(N,7);
    std::string str{"Hello world!"};
    std::string_view sw(str);
    std::cout << sw << std::endl;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
