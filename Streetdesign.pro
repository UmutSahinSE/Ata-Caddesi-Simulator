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
    signoptions.cpp \
    trafficlightoptions.cpp \
    caroption.cpp \
    mainwindow.cpp \
    zebracrossingoptions.cpp \
    mylabel.cpp \
    onewayroad.cpp \
    intersection.cpp \
    refuge.cpp \
    square.cpp \
    roadoptions.cpp \
    carspawn.cpp \
    zebracrossing.cpp \
    endoftheroad.cpp \
    sign.cpp \
    trafficlight.cpp \
    squareoptions.cpp \
    empty.cpp \
    refugeoptions.cpp

HEADERS  += \
    endoftheroadoptions.h \
    intersectionoptions.h \
    signoptions.h \
    trafficlightoptions.h \
    caroption.h \
    mainwindow.h \
    zebracrossingoptions.h \
    onewayroad.h \
    mylabel.h \
    intersection.h \
    refuge.h \
    square.h \
    roadoptions.h \
    carspawn.h \
    zebracrossing.h \
    endoftheroad.h \
    sign.h \
    trafficlight.h \
    ui_mainwindow.h \
    squareoptions.h \
    empty.h \
    refugeoptions.h

FORMS    += \
    endoftheroadoptions.ui \
    intersectionoptions.ui \
    signoptions.ui \
    trafficlightoptions.ui \
    caroption.ui \
    mainwindow.ui \
    zebracrossingoptions.ui \
    roadoptions.ui \
    squareoptions.ui \
    empty.ui \
    refugeoptions.ui


STATECHARTS += \
    Simulation_Screen.scxml

DISTFILES += \
    README.md \
    RedLight.png \
    30mph-speed-limit-sign.jpg \
    60 speed sign.jpg \
    90 sign.png \
    120 sign.png

RESOURCES += \
    resources.qrc
