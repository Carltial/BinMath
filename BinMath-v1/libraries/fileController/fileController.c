#include "fileController.h"
#include <stdio.h>
#include <Windows.h>
#include <direct.h>

int directorySearcher(const char* pathFol) {

	//char pathFol[50] = "./apps";
	int stat = 0;

	WIN32_FIND_DATAA lista;
	HANDLE h = FindFirstFileA(pathFol, &lista);

	if (h == INVALID_HANDLE_VALUE) { // <--- Doble igual para comparar
		stat = 0;
	}
	else {
		stat = 1;
	}

	return stat;
}

int appsFolderCheck() {
	char pathy[50] = "./apps";
	if (directorySearcher(pathy) == 0) {
		printf("APPS DIRECTORY NOT FOUND \n");
		printf("TRYING TO CREATE DIRECTORY... ");
		if (_mkdir("./apps") == 0) {
			printf("SUCCESSFUL.\n");
		}
		else {
			printf("FATAL ERROR: UNABLE TO CREATE DIRECTORY.\n");
		}

	}
	else if (directorySearcher(pathy) == 1) {
		printf("APPS DIRECTORY: OK");
	}
	else {
		printf("UNEXPECTED ERROR");
	}

	return 0;
}

int direcListing(const char* pathDir) {
	WIN32_FIND_DATAA lista;
	HANDLE h = FindFirstFileA(pathDir, &lista);

	if (h == INVALID_HANDLE_VALUE) { // <--- Doble igual para comparar
		printf("Ruta no encontrada. \n");
	}
	else {
		do {
			printf("%s\n", lista.cFileName);
		} while (FindNextFileA(h, &lista));
		FindClose(h);
		return 0;
	}
	return 0;
}

int fileTransfer(const char* origin, const char* destination, const char* newName) {
	char destin[300];
	sprintf_s(destin, sizeof(destin), "%s%s", destination, newName);
	if (CopyFileA(origin, destin, FALSE)) {
		printf("File copied sucessfully. \n");
		return 0;
	}
	else {
		printf("Unexpected error. Check the path. \n");
		return -1;
		printf("%s", destin);
	}
	
	
}