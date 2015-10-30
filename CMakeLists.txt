cmake_minimum_required(VERSION 3.0)

include_directories(RustyFist/include)

add_definitions(-fPIC)

add_subdirectory(3rdparty/cocos)

include_directories(
    3rdparty/cocos/cocos
    3rdparty/cocos/external/glfw3/include/mac
)

add_definitions(-std=c++11)
add_definitions(-DLINUX)

add_subdirectory(RustyFist)

add_subdirectory(FierceShower)