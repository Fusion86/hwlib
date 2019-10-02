// ==========================================================================
//
// File      : hwlib-doxygen-se.hpp
// Part of   : C++ hwlib library for close-to-the-hardware OO programming
// Copyright : wouter@voti.nl 2017-2019
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

// this file contains Doxygen lines (of course, that is its only purpose)
/// @file


/// \page use Use
///
/// A hwlib application includes hwlib.hpp. 
///
/// \snippet "db103\blink\main.cpp" [Doxygen blink example]
///
/// This file will include the correct target header based on the 
/// HWLIB_TARGET_* macro., defined in the compiler
/// command line. This macro must identify one of the supported
/// \ref targets "targets ".
///
/// When the bmptk build system is used, the HWLIB_TARGET_* passed
/// is determined by the TARGET setting in the bmptk Makefile.
///
/// \snippet "db103\blink\makefile" [Doxygen makefile example]
///
/// The sources within the library use a Makefile.link file
/// in each subdirectory, which passes 'control' up to the next-higher
/// directory.
///
/// \snippet "db103\Makefile.link"  [Doxygen makefile example]
///
/// The Makefile.link in the root directory includes the Makefile.custom
/// (if one exsts) or the Makefile.local, which set things like
/// the location of the bmptk and catch2 files.
/// 
