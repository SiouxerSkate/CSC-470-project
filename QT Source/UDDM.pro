QT += core
QT -= gui

CONFIG += c++11

TARGET = UDDM
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    init.cpp \
    selector.cpp \
    item.cpp \
    dispenser.cpp \
    verifyer.cpp

HEADERS += \
    init.h \
    selector.h \
    item.h \
    dispenser.h \
    verifyer.h
