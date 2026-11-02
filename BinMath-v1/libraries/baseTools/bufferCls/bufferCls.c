// Limpieza del buffer residual en entradas que excedan la cantidad de carácteres recorriendo dicho buffer hasta que un carácter sea igual a \n o EOF.
#include "bufferCls.h"
#include <stdio.h>

int bufferCls(void) {
	int c;											
	while ((c = getchar()) != '\n' && c != EOF);
	return 0;
}