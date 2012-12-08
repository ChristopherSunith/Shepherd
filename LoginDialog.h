#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include "MainWindow.h"
#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

    void validateLogin();
    
private slots:
    void on_clearPushButton_clicked();

    void on_loginPushButton_clicked();

private:
    Ui::LoginDialog *ui;
    MainWindow *mainWindow;
};

#endif // LOGINDIALOG_H
