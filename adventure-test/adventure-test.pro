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
    cell/cell.cpp \
    templates/visitor.cpp \
    cellbehaviour/cellbehaviour.cpp \
    patterns/visitor.cpp

HEADERS  += mainwindow.h \
    cell/mapmodel.h \
    cell/cell.h \
    templates/visitor.h \
    cellbehaviour/cellbehaviour.h \
    patterns/visitor.h \
    field.h

FORMS    += mainwindow.ui
