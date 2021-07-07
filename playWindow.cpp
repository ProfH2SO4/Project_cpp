
#include "playWindow.h"
#include <QObject>
#include <QtWidgets/QWidget>
#include <QWidget>


playWindow::playWindow(QWidget *parent) {
    QMainWindow();

    QWidget *widget = new QWidget;
    setCentralWidget(widget);

    setWindowTitle(tr("3D window"));
    setupMenuBar();
}


void playWindow::setupMenuBar() {


    menu = menuBar()->addMenu(tr("&File"));
    menu->addAction(tr("Save layout..."));
    menu->addAction(tr("Load layout..."));


    menu->addSeparator();

    //menu->addAction(tr("&Quit"), this, &QWidget::close);

}
