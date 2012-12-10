#-------------------------------------------------
#
# Project created by QtCreator 2012-12-08T10:57:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shepherd
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    LoginDialog.cpp \
    Authenticator.cpp

HEADERS  += MainWindow.h \
    LoginDialog.h \
    Authenticator.h

FORMS    += MainWindow.ui \
    LoginDialog.ui
