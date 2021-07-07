
#ifndef PROJECT_CPP_PLAYWINDOW_H
#define PROJECT_CPP_PLAYWINDOW_H

#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include<QObject>
#include <QWindow>
#include <QtWidgets/QLabel>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QMainWindow>

class playWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit playWindow(QWidget *parent = nullptr); // no parent

private:
    QMenu *file_menu;
    QMenu *edit_menu;
    QMenu *help_menu;

    void setupMenuBar();
    void setupToolBar();
    void createActions();


};

#endif //PROJECT_CPP_PLAYWINDOW_H
