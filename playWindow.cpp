
#include "playWindow.h"
#include <QObject>
#include <QtWidgets/QWidget>
#include <QWidget>
#include <Qt3DExtras>
#include <Qt3DRender>
#include <Qt3DCore>
/**
 *
 * @param parent
 */
playWindow::playWindow(QWidget *parent) {
    QMainWindow();

    QWidget *widget = new QWidget;

    Qt3DExtras::Qt3DWindow *view = new Qt3DExtras::Qt3DWindow();
    QWidget *container = QWidget::createWindowContainer(view);
    setCentralWidget(widget);

    setWindowTitle(tr("3D window"));
    setupMenuBar();
}


void playWindow::setupMenuBar() {

    // & underscore first letter
    file_menu = menuBar()->addMenu(tr("&File"));
    file_menu->addAction(tr("Save layout..."));
    file_menu->addAction(tr("Load layout..."));
    file_menu->addAction(tr("Export as..."));
    file_menu->addSeparator();
    //close current window
    file_menu->addAction(tr("&Quit"), this, &QWidget::close);

    edit_menu = menuBar()->addMenu(tr("&Edit"));

    help_menu = menuBar()->addMenu(tr("&Help"));


}
