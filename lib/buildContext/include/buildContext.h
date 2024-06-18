#ifndef BUILDCONTEXT_H
#define BUILDCONTEXT_H

// Determine compiler

/* NOTE(Jacek): It's important to establish compiler first
   as it's determine set of available predefined macros */

#if defined(__clang__)
	#define buildContext_COMPILER_STRING "clang"
	#define buildContext_COMPILER_CLANG (1)
#elif defined(__GNUC__)
	#define buildContext_COMPILER_STRING "gcc"
	#define buildContext_COMPILER_GCC (1)
#else
	#define buildContext_COMPILER_STRING "unknown"
#endif /* compiler check */

#if !defined(buildContext_COMPILER_CLANG)
	#define buildContext_COMPILER_CLANG (0)
#endif

#if !defined(buildContext_COMPILER_GCC)
	#define buildContext_COMPILER_GCC (0)
#endif

/* Macros available from this point
   buildContext_COMPILER_STRING = {"clang"|"gcc"|"unknown"}
   buildContext_COMPILER_GCC = {0|1}
   buildContext_COMPILER_CLANG = {0|1} */

// Specific compiler selection
#if (buildContext_COMPILER_GCC == 1)
	#include "gcc.h"
#endif

#if !defined(buildContext_LANG_STANDARD)
	#define buildContext_LANG_STANDARD (-1)
#endif

#if !defined(buildContext_LANG_C23)
	#define buildContext_LANG_C23 (0)
#endif

#if !defined(buildContext_LANG_C2X)
	#define buildContext_LANG_C2X (0)
#endif

#if !defined(buildContext_LANG_C17)
	#define buildContext_LANG_C17 (0)
#endif

#if !defined(buildContext_LANG_C11)
	#define buildContext_LANG_C11 (0)
#endif

#if !defined(buildContext_LANG_C99)
	#define buildContext_LANG_C99 (0)
#endif

#if !defined(buildContext_LANG_C94)
	#define buildContext_LANG_C94 (0)
#endif

#if !defined(buildContext_LANG_C90)
	#define buildContext_LANG_C90 (0)
#endif

/* Macros available from this point
   buildContext_COMPILER_STRING = {"clang"|"gcc"|"unknown"}
   buildContext_COMPILER_GCC = {0|1}
   buildContext_COMPILER_CLANG = {0|1}

   buildContext_LANG_STANDARD = {-1, 1990, 1994, 1999, 2011, 2017, 2020, 2023}
			      -> ??, C90,  C94,  C99,  C11,  C17,  C2X,  C23
   buildContext_LANG_C23 = {0|1}
   buildContext_LANG_C2X = {0|1}
   buildContext_LANG_C17 = {0|1}
   buildContext_LANG_C11 = {0|1}
   buildContext_LANG_C99 = {0|1}
   buildContext_LANG_C94 = {0|1}
   buildContext_LANG_C90 = {0|1} */

#endif /* BUILDCONTEXT_H */
