
%module(directors="1") FierceShower

%{
#include "RustyFist/RustyFist.h"
#include "RustyFist/RustyTest.h"
%}

%include std_string.i
%include exception.i

%exception{
    try {
        $action
    } catch (std::exception const& e) {
        SWIG_exception(SWIG_RuntimeError, (std::string("std::exception: ") + e.what()).c_str());
    } catch (...) {
        SWIG_exception(SWIG_UnknownError, "Unknown error");
    }
}

%include "RustyFist/RustyFist.h"
%include "RustyFist/RustyTest.h"
