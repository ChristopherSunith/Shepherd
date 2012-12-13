#include "MainWindow.h"
#include "LoginDialog.h"
#include "ui_LoginDialog.h"

#include <iostream>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    mainWindow = new MainWindow();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_clearPushButton_clicked()
{
    clearContent();
}

void LoginDialog::on_loginPushButton_clicked()
{
    //called when the login button is clicked
    std::cout << "Login Clicked\n";
    validateLogin();
}

void LoginDialog::clearContent()
{
    ui->userNameLineEdit->setText("");
    ui->passwordLineEdit->setText("");
}

void LoginDialog::validateLogin()
{
    if(ui->userNameLineEdit->text() == "alwindoss" && ui->passwordLineEdit->text() == "OpenSesame")
    {
        std::cout << "Login successful\n";
        this->setVisible(false);
        mainWindow->showMaximized();
    } else {
        clearContent();
        ui->loginNotificationLabel->setText("User Name or Password mismatch");
    }
}
