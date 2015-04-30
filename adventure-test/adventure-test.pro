#-------------------------------------------------
#
# Project created by QtCreator 2015-04-05T15:07:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = adventure-test
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    cell/mapmodel.cpp \
    cell/cell.cpp \
    cellbehaviour/cellbehaviour.cpp \
    patterns/visitor.cpp \
    patterns/state.cpp

HEADERS  += mainwindow.h \
    cell/mapmodel.h \
    cell/cell.h \
    cellbehaviour/cellbehaviour.h \
    patterns/visitor.h \
    patterns/state.h \
    defines/defines.h

FORMS    += mainwindow.ui
