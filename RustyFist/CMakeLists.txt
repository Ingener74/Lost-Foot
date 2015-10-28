cmake_minimum_required(VERSION 3.0)

add_definitions(-fPIC)

set(SOURCES
	include/RustyFist/RustyFist.h
    include/RustyFist/RustyTest.h

    src/RustyFist.cpp
    src/RustyTest.cpp
)

add_library(RustyFist ${SOURCES})

