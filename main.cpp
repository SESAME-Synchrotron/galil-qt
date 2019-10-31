// #include "mainwindow.h"
#include <FormGalilController.h>
#include <QApplication>
#include <QMessageBox>

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(argc != 4)
    {
        std::cout << "Usage: galil CONTROLLER AXIS-LIST CS-AXIS-LIST" << std::endl;
        return 1;
    }

    FormGalilController g(argv[1], argv[2], argv[3]);
    g.show();

    return a.exec();
}
