TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bubble-sorter.cpp \
        main.cpp \
        ordered-collection.cpp \
        stdsorter.cpp

HEADERS += \
    bubble-sorter.hpp \
    ordered-collection.hpp \
    sorter.hpp \
    stdsorter.hpp
