TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        daily-routine.cpp \
        main.cpp \
        weekday-routine.cpp \
        weekend-routine.cpp

HEADERS += \
    daily-routine.hpp \
    weekday-routine.hpp \
    weekend-routine.hpp
