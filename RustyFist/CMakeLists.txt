cmake_minimum_required(VERSION 3.0)

set(SOURCES
	include/RustyFist/RustyFist.h
    include/RustyFist/GameLogic.h

    src/RustyFist.cpp
    src/GameLogic.cpp
    
    src/AppDelegate.cpp
    src/AppDelegate.h
    src/AppMacros.h
    src/HelloWorldScene.cpp
    src/HelloWorldScene.h
)

add_library(RustyFist ${SOURCES})

