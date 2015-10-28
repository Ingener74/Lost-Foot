cmake_minimum_required(VERSION 3.0)

add_definitions(-fPIC)

set(SOURCES
	include/RustyFist/RustyFist.h

	src/RustyFist.cpp
)

add_library(RustyFist ${SOURCES})

