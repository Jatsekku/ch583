#ifndef HELPERMACRO_H
#define HELPERMACRO_H

#include "buildContext.h"

#define helperMacro_stringifySymbolMF(symbol) #symbol

#define _helperMacro_isMacroConstatnDefinedAux0MF(macro_string, macro) \
	(0 != strcmp(macro_string, helperMacro_stringifySymbolMF(macro)))

/* NOTE(Jacek):
 * - Macro constants with same value as name won't be deteced. i.e. #define FOO FOO
 * - Do not pass macro exprsssion. i.e. #define foo(bar)
*/
#define helperMacro_isMacroConstatnDefinedMF(macro) \
	_helperMacro_isMacroConstatnDefinedAux0MF(#macro, macro)

#define helperMacro_printMacroConstantInfoMF(macro) {				\
	static char is_defined =						\
		_helperMacro_isMacroConstatnDefinedAux0MF(#macro, macro);	\
	printf("%s %-20s = %-20s\n",						\
		is_defined ? "✅" : "❌",					      \
		#macro,								\
		is_defined ? helperMacro_stringifySymbolMF(macro) : "\0");	\
}

#if (buildContext_LANG_STANDARD >= 2020)
	#define helperMacro_typedEnumMF(identifier, type) enum identifier : type
#else
	#warning "Typed enums are not supported"
	#define helperMacro_typedEnumMF(identifier, type) enum identifier
#endif

#endif /* HELPERMACRO_H*/
