#include <stdio.h>
#include <string.h>
#include "helperMacro.h"

#define TEST
int main() {
	printf("Compiler identification:\n");

	// GCC
	helperMacro_printMacroConstantInfoMF(__GNUC__);
	helperMacro_printMacroConstantInfoMF(__GNUC_MINOR__);
	helperMacro_printMacroConstantInfoMF(__GNUC_PATCHLEVEL__);

	// Clang
	helperMacro_printMacroConstantInfoMF(__clang__);
	helperMacro_printMacroConstantInfoMF(__clang_major__);
	helperMacro_printMacroConstantInfoMF(__clang_minor__);
	helperMacro_printMacroConstantInfoMF(__clang_patchlevel__);
	helperMacro_printMacroConstantInfoMF(__clang_version__);

	printf("\nLaguage standard identification:\n");
	helperMacro_printMacroConstantInfoMF(__STDC__);
	helperMacro_printMacroConstantInfoMF(__STDC_VERSION__);
	helperMacro_printMacroConstantInfoMF(__cplusplus);
	helperMacro_printMacroConstantInfoMF(__embedded_cplusplus);
}

