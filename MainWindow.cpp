#include "AddUserDialog.h"
#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionProject_triggered()
{

}

void MainWindow::on_actionUser_triggered()
{
    AddUserDialog *addUser = new AddUserDialog();
    addUser->show();
}
