

#include "quitWindow.h"
#include <QObject>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "iostream"

using namespace std;

quitWindow::quitWindow(QWidget *parent) {
    QDialog();

    this->setWindowTitle(("Quit window"));
    quitWindow::create_buttons(parent);
    quitWindow::write_text();
    quitWindow::getWindowSize();

}

void quitWindow::create_buttons(QWidget *parent) {
    QGridLayout *vlay = new QGridLayout(widget);
    widget->move(45, 70);

    QPushButton *cancel_button = new QPushButton("No");
    connect(cancel_button, SIGNAL(clicked()), this, SLOT(close()));
    vlay->addWidget(cancel_button, 1, 2, 3, 20);

    QPushButton *quit_button = new QPushButton("Quit");
    connect(quit_button, SIGNAL(clicked()), this, SLOT(close())); // close QDialog
    connect(quit_button, SIGNAL(clicked()), parent, SLOT(close())); // close mainWindow
    vlay->addWidget(quit_button, 1, 25, 3, 20);

    widget->setLayout(vlay);
    widget->show();
}

void quitWindow::write_text() {
    //QLabel *label = new QLabel(this);
    label->setText("Are you really want to quit?");
    label->show();
}

void quitWindow::getWindowSize() {
    int height = this->geometry().height();
    int width = this->width();
    cout << height << " " << width << endl;
}
// moveEvent can resize only from top and left!
void quitWindow::resizeEvent(QResizeEvent* e)
{
    int window_width = quitWindow::size().width();
    int window_height = quitWindow::size().height();

//    int widget_height = widget->size().height();
//    int widget_width = widget->size().width();
    int widget_w = abs(50-window_width/8);
    int widget_h = abs(50-window_height/8);

//    int h_button = cancel_button->height();
//    int w_button = cancel_button->width();
    widget->resize(window_width, window_height);
    widget->move(widget_w, widget_h);

    label->resize(window_width, window_height/2);
    label->move(widget_w, widget_h-20);
    cout<< window_height << " " << window_width<< endl;
//    cout<< h_button << " " << w_button << endl;
    //quitWindow::moveEvent(e);
//    QRect r = geometry();
//    std::cout << "moveEvent: ";
//    std::cout << "x = " << r.x() << ", y = " << r.y() << ", width = " << r.width() << ", height = " << r.height() << std::endl;
}




