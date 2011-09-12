// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Precompiled header for Chromium project on Windows, not used by
// other build configurations. Using precompiled headers speeds the
// build up significantly, around 1/4th on VS 2010 on an HP Z600 with 12
// GB of memory.
//
// Numeric comments beside includes are the number of times they were
// included under src/chrome/browser on 2011/8/20, which was used as a
// baseline for deciding what to include in the PCH. It may be
// possible to tweak the speed of the build by commenting out or
// removing some of the less frequently used headers.

#if defined(BUILD_PRECOMPILE_H_)
#error You shouldn't include the precompiled header file more than once.
#endif

#define BUILD_PRECOMPILE_H_

// The Windows header needs to come before almost all the other
// Windows-specific headers.
#include <Windows.h>

// TODO(joi): Defines in atlbase.h cause conflicts; need to figure out
// if/how this family of headers can be included in the PCH; several
// of them are used quite frequently.
/*
#include <atlbase.h>
#include <atlapp.h>
#include <atlcom.h>
#include <atlcrack.h>  // 2
#include <atlctrls.h>  // 2
#include <atlmisc.h>  // 2
#include <atlsafe.h>  // 1
#include <atltheme.h>  // 1
#include <atlwin.h>  // 2
*/

#include <commctrl.h>  // 2
#include <commdlg.h>  // 3
#include <cryptuiapi.h>  // 2
#include <dwmapi.h>
#include <Objbase.h>  // 2
#include <objidl.h>  // 1
#include <ole2.h>  // 1
#include <oleacc.h>  // 2
#include <oleauto.h>  // 1
#include <oleidl.h>  // 1
#include <propkey.h>  // 2
#include <propvarutil.h>  // 2
#include <pstore.h>  // 2
#include <shellapi.h>
#include <shlguid.h>  // 1
//#include <shlobj.h>  TODO(joi): Caused conflicts, see if they can be resolved.
#include <shlwapi.h>  // 1
#include <shobjidl.h>  // 4
#include <urlhist.h>  // 2
#include <wincrypt.h>  // 4
#include <wtypes.h>  // 2

#include <errno.h>
#include <fcntl.h>
#include <limits.h>  // 4
#include <math.h>
#include <memory.h>  // 1
#include <signal.h>
#include <stdarg.h>  // 1
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  // 4

#include <algorithm>
#include <bitset>  // 3
#include <cmath>
#include <cstddef>
#include <cstdio>  // 3
#include <cstdlib>  // 2
#include <cstring>
#include <deque>
#include <fstream>  // 3
#include <functional>
#include <iomanip>  // 2
#include <iosfwd>  // 2
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>  // 2
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>