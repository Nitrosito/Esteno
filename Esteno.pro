#-------------------------------------------------
#
# Project created by QtCreator 2015-05-02T10:21:55
#
#-------------------------------------------------
CONFIG += console
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Esteno
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    codificar.cpp \
    imagenes.cpp \
    ocultar.cpp \
    revelar.cpp \
    acercade.cpp

HEADERS  += mainwindow.h \
    codificar.h \
    imagenes.h \
    ocultar.h \
    revelar.h \
    acercade.h

FORMS    += mainwindow.ui \
    acercade.ui

