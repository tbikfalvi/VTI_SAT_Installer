#-------------------------------------------------
#
# Project created by QtCreator 2013-06-14T10:59:09
#
#-------------------------------------------------

QT          += core gui
TARGET       = VTISATInstaller
TEMPLATE     = app
INCLUDEPATH += framework

SOURCES     += framework/filewriter.cpp \
               framework/guiwriter.cpp \
               framework/logger.cpp \
               framework/logmessage.cpp \
               framework/preferences.cpp \
               framework/tracer.cpp \
               main.cpp\
               mainwindow.cpp

HEADERS     += framework/filewriter.h \
               framework/guiwriter.h \
               framework/logger.h \
               framework/logmessage.h \
               framework/logwriter.h \
               framework/preferences.h \
               framework/severity.h \
               framework/sevexception.h \
               framework/singleton.h \
               framework/tracer.h \
               mainwindow.h \

FORMS       += mainwindow.ui

RESOURCES   += vtisatinstaller.qrc
RC_FILE      = vtisatinstaller.rc
