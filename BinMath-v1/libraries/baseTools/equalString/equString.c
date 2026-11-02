#include "equString.h"

int comparing(const char *parametro1, const char *parametro2) {
	while (*parametro1 && (*parametro1 == *parametro2)) {
		parametro1++;
		parametro2++;
	}
	return *(unsigned char*)parametro1 - *(unsigned char*)parametro2;
}