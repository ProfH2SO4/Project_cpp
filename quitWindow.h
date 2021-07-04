

#ifndef PROJECT_CPP_QUITWINDOW_H
#define PROJECT_CPP_QUITWINDOW_H
#include <QDialog>
class quitWindow : public QDialog {
    Q_OBJECT

public:
    explicit quitWindow(QWidget *parent = nullptr); // pass 0 means it has no parents

    // ~mainWindow();
private:
    void create_buttons();
    void on_button_cancel();
    void on_button_quit();
};
#endif //PROJECT_CPP_QUITWINDOW_H
