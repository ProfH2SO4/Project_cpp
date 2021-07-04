
#include "mainWindow.h"

mainWindow::mainWindow(QWidget *parent) {
    QMainWindow();

    mainWindow::create_buttons();

}

void mainWindow::create_buttons(){
    QWidget * wdg = new QWidget(this);
    QVBoxLayout *vlay = new QVBoxLayout(wdg);
    QPushButton *btn1 = new QPushButton("Play");
    vlay->addWidget(btn1);
    QPushButton *btn2 = new QPushButton("About");
    vlay->addWidget(btn2);
    QPushButton *quit_button = new QPushButton("Quit");
    connect(quit_button, SIGNAL(clicked()), this, SLOT(on_quit_button_clicked()));
    vlay->addWidget(quit_button);
    wdg->setLayout(vlay);
    setCentralWidget(wdg);
}

void mainWindow::on_quit_button_clicked() {
   p_quitWindow = new quitWindow(this);
   p_quitWindow->show();
}



