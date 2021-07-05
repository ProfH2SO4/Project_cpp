

#ifndef PROJECT_CPP_QUITWINDOW_H
#define PROJECT_CPP_QUITWINDOW_H
#include <QDialog>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include<QObject>
#include <QtWidgets/QLabel>

class quitWindow : public QDialog {
    Q_OBJECT

public:
    explicit quitWindow(QWidget *parent ); // pass not 0 means has parent

    // ~mainWindow();
private:

    QWidget * widget = new QWidget(this);
    QLabel *label = new QLabel(widget);
    void create_buttons(QWidget *parent);
    void write_text();
    void getWindowSize();
    void resizeEvent(QResizeEvent *e);
//private slots:
//    void close_all_windows();


};
#endif //PROJECT_CPP_QUITWINDOW_H
