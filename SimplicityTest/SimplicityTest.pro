QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SimplicityTest.cpp \
    genprimenumberwidget.cpp \
    main.cpp \
    mainwidget.cpp \
    testnumberwidget.cpp

HEADERS += \
    SimplicityTest.h \
    genprimenumberwidget.h \
    mainwidget.h \
    testnumberwidget.h

FORMS += \
    genprimenumberwidget.ui \
    mainwidget.ui \
    testnumberwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += D:/boost/boost_1_77_0/boost_mingw_64/include/boost-1_77
