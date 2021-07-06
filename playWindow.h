
#ifndef PROJECT_CPP_PLAYWINDOW_H
#define PROJECT_CPP_PLAYWINDOW_H

#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include<QObject>
#include <QWindow>
#include <QtWidgets/QLabel>

class playWindow : public QWidget {
    Q_OBJECT

public:
    explicit playWindow(QWidget *parent); // pass not 0 means has parent



};

#endif //PROJECT_CPP_PLAYWINDOW_H
