#-------------------------------------------------
#
# Project created by QtCreator 2015-04-05T15:07:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = adventure-test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cell/mapmodel.cpp \
    cell/cell.cpp

HEADERS  += mainwindow.h \
    cell/mapmodel.h \
    cell/cell.h

FORMS    += mainwindow.ui
