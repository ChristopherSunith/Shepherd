#include <QApplication>
#include "LoginDialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    LoginDialog login;
    login.show();
    
    return a.exec();
}
