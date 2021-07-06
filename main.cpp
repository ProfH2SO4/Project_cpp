#include <iostream>
#include "mainWindow.h"
#include <QApplication>
#include <QtWidgets/QPushButton>
#include <QDesktopWidget>

using namespace std;

int main(int argc, char *argv[]) {
    // Creates the Application object
    QApplication app(argc, argv);
    mainWindow main_window;
    //center main window to middle of screen
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()-main_window.width()) / 2;
    int y = (screenGeometry.height()-main_window.height()) / 2;
    main_window.move(x, y);

    main_window.setWindowTitle(("Menu"));
    main_window.resize(500, 500);
    main_window.show();

    return app.exec();
}
