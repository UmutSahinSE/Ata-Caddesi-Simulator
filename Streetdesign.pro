#-------------------------------------------------
#
# Project created by QtCreator 2017-04-22T13:49:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Streetdesign
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    endoftheroadoptions.cpp \
    intersectionoptions.cpp \
    roadoptions.cpp \
    signoptions.cpp \
    simulation_screen.cpp \
    trafficlightoptions.cpp \
    caroption.cpp \
    mainwindow.cpp \
    zebracrossingoptions.cpp

HEADERS  += \
    endoftheroadoptions.h \
    intersectionoptions.h \
    roadoptions.h \
    signoptions.h \
    simulation_screen.h \
    trafficlightoptions.h \
    caroption.h \
    mainwindow.h \
    zebracrossingoptions.h

FORMS    += \
    endoftheroadoptions.ui \
    intersectionoptions.ui \
    roadoptions.ui \
    signoptions.ui \
    simulationscreen.ui \
    trafficlightoptions.ui \
    caroption.ui \
    mainwindow.ui \
    zebracrossingoptions.ui

STATECHARTS += \
    Simulation_Screen.scxml

DISTFILES += \
    Streetdesign.pro.user

RESOURCES += \
    resources.qrc
