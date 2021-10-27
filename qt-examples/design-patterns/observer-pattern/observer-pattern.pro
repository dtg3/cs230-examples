TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concrete-observer.cpp \
        concrete-subject.cpp \
        main.cpp

HEADERS += \
    concrete-observer.hpp \
    concrete-subject.hpp \
    observer.hpp \
    subject.h
