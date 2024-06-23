// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// WARNING, this entire header is generated by
// utils/generate_libcxx_cppm_in.py
// DO NOT MODIFY!

module;

#include <__config>

// The headers of Table 24: C++ library headers [tab:headers.cpp]
// and the headers of Table 25: C++ headers for C library facilities [tab:headers.cpp.c]
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <climits>
#if !defined(_LIBCPP_HAS_NO_LOCALIZATION)
#  include <clocale>
#endif
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cuchar>
#if !defined(_LIBCPP_HAS_NO_WIDE_CHARACTERS)
#  include <cwchar>
#endif
#if !defined(_LIBCPP_HAS_NO_WIDE_CHARACTERS)
#  include <cwctype>
#endif

// *** Headers not yet available ***
//
// This validation is mainly to catch when a new header is added but adding the
// corresponding .inc file is forgotten. However, the check based on __has_include
// alone doesn't work on Windows because the Windows SDK is on the include path,
// and that means the MSVC STL headers can be found as well, tricking __has_include
// into thinking that libc++ provides the header.
//
#ifndef _WIN32
#  if __has_include(<debugging>)
#    error "please update the header information for <debugging> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<debugging>)
#  if __has_include(<flat_map>)
#    error "please update the header information for <flat_map> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<flat_map>)
#  if __has_include(<flat_set>)
#    error "please update the header information for <flat_set> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<flat_set>)
#  if __has_include(<generator>)
#    error "please update the header information for <generator> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<generator>)
#  if __has_include(<hazard_pointer>)
#    error "please update the header information for <hazard_pointer> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<hazard_pointer>)
#  if __has_include(<linalg>)
#    error "please update the header information for <linalg> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<linalg>)
#  if __has_include(<rcu>)
#    error "please update the header information for <rcu> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<rcu>)
#  if __has_include(<spanstream>)
#    error "please update the header information for <spanstream> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<spanstream>)
#  if __has_include(<stacktrace>)
#    error "please update the header information for <stacktrace> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<stacktrace>)
#  if __has_include(<stdfloat>)
#    error "please update the header information for <stdfloat> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<stdfloat>)
#  if __has_include(<text_encoding>)
#    error "please update the header information for <text_encoding> in headers_not_available in utils/libcxx/header_information.py"
#  endif // __has_include(<text_encoding>)
#endif // _WIN32

export module std.compat;
export import std;


#include "std.compat/cassert.inc"
#include "std.compat/cctype.inc"
#include "std.compat/cerrno.inc"
#include "std.compat/cfenv.inc"
#include "std.compat/cfloat.inc"
#include "std.compat/cinttypes.inc"
#include "std.compat/climits.inc"
#include "std.compat/clocale.inc"
#include "std.compat/cmath.inc"
#include "std.compat/csetjmp.inc"
#include "std.compat/csignal.inc"
#include "std.compat/cstdarg.inc"
#include "std.compat/cstddef.inc"
#include "std.compat/cstdint.inc"
#include "std.compat/cstdio.inc"
#include "std.compat/cstdlib.inc"
#include "std.compat/cstring.inc"
#include "std.compat/ctime.inc"
#include "std.compat/cuchar.inc"
#include "std.compat/cwchar.inc"
#include "std.compat/cwctype.inc"

