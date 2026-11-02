#include "stringMultiply.h"
#include <stdio.h>

int stringMultiply(char X, int Y) {
	for (int i = 0; i < Y; i++) {
		printf("%c", X);
	}
	printf("\n");
	return 0;
}