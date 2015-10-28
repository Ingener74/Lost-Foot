cmake_minimum_required(VERSION 3.0)

find_package(SWIG REQUIRED)
include(UseSWIG)

set_source_files_properties(FierceShower.i PROPERTIES CPLUSPLUS ON)
set_source_files_properties(FierceShower.i PROPERTIES SWIG_FLAGS "-nodefaultctor")

set(PACKAGE_FIERCESHOWER "fierceshower")

set(CMAKE_SWIG_FLAGS "-c++")

SWIG_ADD_MODULE(FierceShower csharp FierceShower.i)

set(SHARED_LIBS RustyFist)
SWIG_LINK_LIBRARIES(FierceShower ${SHARED_LIBS})
