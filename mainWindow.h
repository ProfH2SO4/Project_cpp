

#ifndef PROJECT_CPP_MAINWINDOW_H
#define PROJECT_CPP_MAINWINDOW_H

#include <QMainWindow>
#include "quitWindow.h"
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

class mainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = nullptr); // pass 0 means it has no parents

   // ~mainWindow();
private slots:

    void create_buttons();
    void on_quit_button_clicked();
private:
    quitWindow *p_quitWindow;
};
#endif //PROJECT_CPP_MAINWINDOW_H
