QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = practica_6
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    planeta.cpp

HEADERS  += mainwindow.h \
    planeta.h

FORMS    += mainwindow.ui
