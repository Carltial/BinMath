#include <stdio.h>
#include "screenClean.h"
#include <Windows.h>

int screenClean(void) {
	#ifdef _WIN32
		system("cls");
	#else
		printf(err0x01);
	#endif //

	return 0;
}