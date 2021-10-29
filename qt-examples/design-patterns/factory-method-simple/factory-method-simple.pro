TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        circle-creator.cpp \
        circle.cpp \
        main.cpp \
        rectangle-creator.cpp \
        rectangle.cpp

HEADERS += \
    circle-creator.hpp \
    circle.hpp \
    rectangle-creator.hpp \
    rectangle.hpp \
    shape-creator.hpp \
    shape.hpp
