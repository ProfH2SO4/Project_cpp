#include <iostream>
#include "mainWindow.h"
#include <QApplication>
#include <QtWidgets/QPushButton>


using namespace std;

int main(int argc, char *argv[]) {
    // Creates the Application object
    QApplication app(argc, argv);
    mainWindow w;
    w.resize(500, 500);
    w.show();

    return app.exec();
}
