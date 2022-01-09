#-------------------------------------------------
#
# Project created by QtCreator 2019-10-23T13:42:50
#
#-------------------------------------------------

QT       += core gui uitools xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = $$(HOME)/bin/galil-qt
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    FormGalilMotorBISS.cpp \
        main.cpp \
        mainwindow.cpp \
    FormGalilMotorSSI.cpp \
    FormGalilMotorExtras.cpp \
    FormGalilMotorExpert.cpp \
    FormGalilMotor.cpp \
    FormGalilCSKinematics.cpp \
    FormGalilControllerIO.cpp \
    FormGalilController.cpp \
    macros.cpp \
    FormGalilCS.cpp \
    client.cpp \
    FormGalilMotorStatus.cpp

HEADERS += \
    FormGalilMotorBISS.h \
        mainwindow.h \
    FormGalilMotorSSI.h \
    FormGalilMotor.h \
    FormGalilMotorExtras.h \
    FormGalilMotorExpert.h \
    FormGalilCSKinematics.h \
    FormGalilControllerIO.h \
    FormGalilController.h \
    macros.h \
    FormGalilCS.h \
    client.h \
    FormGalilMotorStatus.h

FORMS += \
    FormGalilMotorBISS.ui \
        mainwindow.ui \
    FormGalilMotorExtras.ui \
    FormGalilMotorExpert.ui \
    FormGalilCSKinematics.ui \
    FormGalilController.ui \
    FormGalilControllerIO.ui \
    FormGalilMotor.ui \
    FormGalilMotorSSI.ui \
    FormGalilCS.ui \
    FormGalilMotorStatus.ui

unix:!macx: {
    LIBS += -L$$(QE_TARGET_DIR)/lib/linux-x86_64/ -lQEFramework
    LIBS += -L$$(QE_TARGET_DIR)/lib/linux-x86_64/designer -lQEPlugin
    LIBS += -L$$(QWT_ROOT)/lib/ -lqwt
    LIBS += -L$$(EPICS_BASE)/lib/linux-x86_64/ -lca
    LIBS += -L$$(EPICS_BASE)/lib/linux-x86_64/ -lCom

    INCLUDEPATH += $$(QE_TARGET_DIR)/include
    INCLUDEPATH += $$(QWT_ROOT)/include
    INCLUDEPATH += $$(EPICS_BASE)/include
    INCLUDEPATH += $$(EPICS_BASE)/include/os/Linux
    INCLUDEPATH += $$(EPICS_BASE)/include/compiler/gcc

    DEPENDPATH  += $$(QE_TARGET_DIR)/include
    DEPENDPATH  += $$(QWT_ROOT)/include
    DEPENDPATH  += $$(EPICS_BASE)/include
    DEPENDPATH  += $$(EPICS_BASE)/include/os/Linux
    DEPENDPATH  += $$(EPICS_BASE)/include/compiler/gcc
}

