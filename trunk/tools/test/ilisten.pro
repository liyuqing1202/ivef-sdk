#
# ilisten QMake pro file
#

TEMPLATE = app
TARGET = ilisten 
DEPENDPATH += ./src
INCLUDEPATH += ./include

DESTDIR = bin
MOC_DIR = tmp/moc
OBJECTS_DIR = tmp/objects

HEADERS += ./include/cmdlineoption.h \
           ./include/ilistenapplication.h \
           ./include/ivefstreamhandler.h \
           ./include/iveffilehandler.h 
SOURCES += ./src/cmdlineoption.cpp \
           ./src/ilistenapplication.cpp \
           ./src/ivefstreamhandler.cpp \
           ./src/iveffilehandler.cpp \
           ./src/main.cpp

# include the CPP library
INCLUDEPATH += ../../sdk-qt
LIBS += -L ../../sdk-qt -livef

CONFIG += warn_on stl qt release console
QT += network xml
macx {
   CONFIG -= app_bundle
}