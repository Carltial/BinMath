//Librería para buscar coincidencias entre la entrada de usuario y la lista de parámetros múltiples admitidos por el programa.
#include "diccionary.h"
#include "../equalString/equString.h" //Inclusión de la librería de comparación de cadenas de carácteres. 

const char* diccionario_comparacion[] = { "exit", "EXIT", "h", "H", "help", "HELP", "cls", "clear", "break", "brk", "addApp", "aap", "appMenu", "amu"}; //Array de inputs admitidos por el programa.


int diccionary(const int minLim, const int maxLim, const char *inDat) {  //El programa principal pasa en su llamada a la función el valor mínimo del intervalo cerrado, el valor máximo (fuera del intervalo) y la entrada de usuario a comparar.
	int isMatch = 0; //Se establece la variable de estado en 0.
	for (int i = minLim; i < maxLim; i++) {  //Se inicia el contador en el valor mínimo especificado del intervalo y se detiene antes del valor máximo. El intervalo es de tipo [minLim, maxLim).
		if (comparing(inDat, diccionario_comparacion[i]) == 0) {  //Se compara la cadena de carácteres del usuario con cada valor devuelto de recorrer el índice del array en el intervalo especificado pasando cada consulta a la librería de comparación de cadenas.
			isMatch = 1;  //Cuando se cumple la condición, la variable de estado pasa a valer 1 y se rompe el bucle. 
			break;
		}
	}

	return isMatch; //Se devuelve el valor de la variable de estado.
}
