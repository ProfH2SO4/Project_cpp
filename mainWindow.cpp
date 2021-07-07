
#include "mainWindow.h"
#include <QDialog>
mainWindow::mainWindow(QWidget *parent) {
    QMainWindow();

    mainWindow::create_buttons();

}

mainWindow::~mainWindow(){
    delete p_quitWindow;
    //delete p_playWindow;
}

void mainWindow::create_buttons(){
    QWidget * wdg = new QWidget(this);
    QVBoxLayout *vlay = new QVBoxLayout(wdg);
    QPushButton *play_button = new QPushButton("Play");
    connect(play_button, SIGNAL(clicked()), this, SLOT(on_play_button_clicked()));

    vlay->addWidget(play_button);

    QPushButton *btn2 = new QPushButton("About");
    vlay->addWidget(btn2);

    QPushButton *quit_button = new QPushButton("Quit");
    connect(quit_button, SIGNAL(clicked()), this, SLOT(on_quit_button_clicked()));
    vlay->addWidget(quit_button);

    wdg->setLayout(vlay);
    setCentralWidget(wdg);
}

void mainWindow::on_play_button_clicked(){
    this->hide(); // hide menu window
    //playWindow *play_Window ;
    p_playWindow = new playWindow();

    p_playWindow->resize(500, 500);
    p_playWindow->show();

}

void mainWindow::on_quit_button_clicked() {
   p_quitWindow = new quitWindow(this);
   p_quitWindow->resize(300,150);
   p_quitWindow->show();
}




