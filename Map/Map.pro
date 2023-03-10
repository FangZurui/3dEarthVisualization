QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TARGET = Map
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

INCLUDEPATH += $$PWD/../3rdParty/OpenSceneGraph/include
LIBS += -L$$PWD/../3rdParty/OpenSceneGraph/lib/ -losg -losgViewer -lOpenThreads -losgDB -losgGA -losgManipulator -losgWidget

INCLUDEPATH += $$PWD/../3rdParty/osgEarth/include
LIBS += -L$$PWD/../3rdParty/osgEarth/lib/ -losgEarth

INCLUDEPATH += $$PWD/../3rdParty/osgQt/include
LIBS += -L$$PWD/../3rdParty/osgQt/lib/ -losgQOpenGL
