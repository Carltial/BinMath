#pragma execution_character_set("utf-8")
#include <stdio.h>
#include <Windows.h>
//#include <Unistd.h>
#include "libraries/logos/logo.h"
//#include "libraries/baseTools/equalString/equString.h"
#include "libraries/baseTools/diccionary/diccionary.h"
#include "libraries/baseTools/stringMultiply/stringMultiply.h"
#include "libraries/baseTools/bufferCls/bufferCls.h"
#include "libraries/baseTools/screenClear/screenClean.h"
#include "libraries/man/manual.h"
#include "libraries/fileControler/fileControler.h"

char err0x01[50] = "ERROR 0x01: Not able to complete operation. \n";

int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	starting_logo_BM();
	Sleep(2500);
	screenClean();
	printf("\n");
	printf("Welcome to BinMath!");
	printf("\n");
	printf("\n");
	stringMultiply('=', 10);
	printf("STARTING CHECKLIST...");
	printf("\n");
	printf("\n");

	appsFolderCheck();

	printf("\n \n");
	printf("Press enter...");
	bufferCls();
	


	int truea = 1;
	
	while (truea != 0) {
		screenClean();
		starting_logo_BM();
		stringMultiply('=', 40);

		int trueo = 1;
		while (trueo != 0) {
			char inputt[10];
			printf("What do you want to do? (type h for help): ");
			scanf_s("%s", inputt, (unsigned int)sizeof(inputt));
			bufferCls();

			if (diccionary(0, 2, inputt) == 1) {
				truea = 0;
				break;
			}
			else if (diccionary(2, 6, inputt) == 1) {
				manual();
				screenClean();
				cachMan();
			}
			else if (diccionary(6, 8, inputt) == 1) {
				screenClean();
			}
			else if (diccionary(8, 10, inputt) == 1) {
				break;
			}
			else if (diccionary(10, 12, inputt) == 1) {
				//ADD APP CALL
				char filePath[250];
				printf("Enter the file path: ");
				scanf_s("%[^\n]", filePath, (unsigned int)sizeof(filePath));
				bufferCls();
				char endName[200];
				printf("Enter the new file name (with extension): ");
				scanf_s("%[^\n]", endName, (unsigned int)sizeof(endName));
				fileTransfer(filePath, "./apps/", endName);
			}
			else if (diccionary(12, 14, inputt) == 1) {
				//APP MENU CALL
				char appsFold[20] = "./apps/*";
				direcListing(appsFold);
				
			}
			else {
				printf("Unknown entry.\n");
			}
		}


	}


	return 0;
}
