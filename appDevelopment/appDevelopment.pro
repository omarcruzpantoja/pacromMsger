#-------------------------------------------------
#
# Project created by QtCreator 2016-12-25T06:31:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appDevelopment
TEMPLATE = app


SOURCES += main.cpp\
        chatgui.cpp \
    login.cpp \
    pacromLib.cpp

HEADERS  += chatgui.h \
    login.h \
    pacromLib.h

FORMS    += chatgui.ui \
    login.ui
