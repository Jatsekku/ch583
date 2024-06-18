// NOTE(Jacek): Inclusion of this file assumes that GCC predefined macros are supported
#ifndef GCC_H
#define GCC_H

#if defined(__STDC__)
	#if defined(__STDC_VERSION__)
		// NOTE(Jacek): Always add higher version first
		#if (__STDC_VERSION__ >= 202311L)
			#define buildContext_LANG_STANDARD (2023)
			#define buildContext_LANG_C23 (1)
		#elif (__STDC_VERSION__ >= 202000)
			#define buildContext_LANG_STANDARD (2020)
			#define buildContext_LANG_C2X (1)
		#elif (__STDC_VERSION__ >= 201710L)
			#define buildContext_LANG_STANDARD (2017)
			#define buildContext_LANG_C17 (1)
		#elif (__STDC_VERSION__ >= 201112L)
			#define buildContext_LANG_STANDARD (2011)
			#define buildContext_LANG_C11 (1)
		#elif (__STDC_VERSION__ >= 199901L)
			#define buildContext_LANG_STANDARD (1999)
			#define buildContext_LANG_C99 (1)
		#elif (__STDC_VERSION__ >= 199409L)
			#define buildContext_LANG_STANDARD (1994)
			#define buildContext_LANG_C94 (1)
		#else
			#define buildContext_LANG_STANDARD (1990)
			#define buildContext_LANG_C90 (1)
		#endif
	#endif /* defined(__STDC_VERSION__) */
#endif

#endif /* GCC_H */
