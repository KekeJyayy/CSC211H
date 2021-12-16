QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    listdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    pesform.cpp \
    resources.cpp

HEADERS += \
    listdialog.h \
    mainwindow.h \
    pesform.h \
    resources.h

FORMS += \
    listdialog.ui \
    mainwindow.ui \
    pesform.ui \
    resources.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../Downloads/EarlyChildhood.txt \
    ../../../Downloads/Elementary.txt \
    ../../../Downloads/HighSchool.txt \
    ../../../Downloads/JuniorHigh.txt \
    ../../../Downloads/K12Allgrades.txt \
    ../../../Downloads/K8Only.txt \
    ../../../Downloads/SecondarySchool - Copy.txt
