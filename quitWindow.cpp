
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QMainWindow>
#include "quitWindow.h"


quitWindow::quitWindow(QWidget *parent) {
    QDialog();

    quitWindow::create_buttons();

}

void quitWindow::create_buttons() {
    QWidget * wdg = new QWidget(this);
    QVBoxLayout *vlay = new QVBoxLayout(wdg);
    QPushButton *btn2 = new QPushButton("Cancel");
    vlay->addWidget(btn2);
    QPushButton *quit_button = new QPushButton("Quit");
    connect(quit_button, SIGNAL(clicked()), this, SLOT(on_quit_button_clicked()));
    vlay->addWidget(quit_button);
    wdg->setLayout(vlay);
    //setCentralWidget(wdg);
}


