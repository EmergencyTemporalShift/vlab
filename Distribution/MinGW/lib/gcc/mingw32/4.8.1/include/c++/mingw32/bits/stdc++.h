// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <QCerrno>
#include <QCfloat>
#include <QCiso646>
#include <climits>
#include <QClocale>
#include <cmath>
#include <QCsetjmp>
#include <QCsignal>
#include <QCstdarg>
#include <QCstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <QElapsedTimer>

#if __cplusplus >= 201103L
#include <QCcomplex>
#include <QCfenv>
#include <QCinttypes>
#include <QCstdalign>
#include <QCstdbool>
#include <QCstdint>
#include <QCtgmath>
#include <QCwchar>
#include <QCwctype>
#endif

// C++
#include <algorithm>
#include <QBitset>
#include <QComplex>
#include <QDeque>
#include <QException>
#include <fstream>
#include <QFunctional>
#include <iomanip>
#include <QIos>
#include <QIosfwd>
#include <iostream>
#include <QIstream>
#include <QIterator>
#include <QLimits>
#include <QList>
#include <QLocale>
#include <QMap>
#include <QMemory>
#include <QNew>
#include <QNumeric>
#include <QOstream>
#include <QQueue>
#include <QSet>
#include <sstream>
#include <QStack>
#include <QStdexcept>
#include <QStreambuf>
#include <QString>
#include <QTypeinfo>
#include <QUtility>
#include <QValarray>
#include <QVector>

#if __cplusplus >= 201103L
#include <QArray>
#include <QAtomic>
#include <QChrono>
#include <condition_variable>
#include <forward_list>
#include <QFuture>
#include <initializer_list>
#include <QMutex>
#include <QRandom>
#include <QRatio>
#include <QRegularExpression>
#include <scoped_allocator>
#include <system_error>
#include <QThread>
#include <QTuple>
#include <QTypeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
