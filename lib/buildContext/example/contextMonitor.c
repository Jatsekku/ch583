#include <stdio.h>
#include <string.h>

#include "buildContext.h"
#include "helperMacro.h"

helperMacro_typedEnumMF(foo, int) {
	one = 1,
	two = 2,
};

int test(enum foo x) {
	return x;
}

int main(void) {
	helperMacro_printMacroConstantInfoMF(buildContext_COMPILER_STRING);
	helperMacro_printMacroConstantInfoMF(buildContext_COMPILER_CLANG);
	helperMacro_printMacroConstantInfoMF(buildContext_COMPILER_GCC);
	helperMacro_printMacroConstantInfoMF(buildContext_LANG_STANDARD);

	test(3);
}
