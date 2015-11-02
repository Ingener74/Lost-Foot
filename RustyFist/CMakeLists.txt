cmake_minimum_required(VERSION 3.0)

set(SOURCES
    include/RustyFist/RustyFist.h
    include/RustyFist/GameLogic.h
    include/RustyFist/DrawMe.h
    include/RustyFist/TouchSink.h

    src/RustyFist.cpp
    src/GameLogic.cpp
    src/DrawMe.cpp
    src/TouchSink.cpp
    
    src/OpenGLLayer.cpp
    src/OpenGLLayer.h
    
    src/AppDelegate.cpp
    src/AppDelegate.h
    src/AppMacros.h
    src/HelloWorldScene.cpp
    src/HelloWorldScene.h
)

add_library(RustyFist ${SOURCES})

