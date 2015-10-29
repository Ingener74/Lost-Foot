cmake_minimum_required(VERSION 3.0)

include_directories(RustyFist/include)

add_definitions(-std=c++11)

add_subdirectory(3rdparty/cocos)

add_subdirectory(RustyFist)

add_subdirectory(FierceShower)