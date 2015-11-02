cmake_minimum_required(VERSION 2.8.11)

find_package(SWIG REQUIRED)
include(UseSWIG)

set_source_files_properties(RustyGL.i PROPERTIES CPLUSPLUS ON)
set_source_files_properties(RustyGL.i PROPERTIES SWIG_FLAGS "-nodefaultctor")

SWIG_ADD_MODULE(RustyGL csharp RustyGL.i)
SWIG_LINK_LIBRARIES(RustyGL ${OPENGL_LIBRARIES})
