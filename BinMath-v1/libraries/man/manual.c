#include <stdio.h>
#include "manual.h"
#include "../baseTools/screenClear/screenClean.h"
#include "../baseTools/stringMultiply/stringMultiply.h"
#include "../baseTools/bufferCls/bufferCls.h"

int manual(void) {
	screenClean();
	printf("\n \n");
	stringMultiply('=', 50);
	printf("\n \n");
	printf("DESCRIPTION:");
	printf("\n \n \n");
	printf("BinMath is a modular program for all kinds of mathematical operations. \nAS you will see, you can even customise it by adding your own functions.\n");
	printf("The aim of BinMath is to meet whatever your needs may be.\n");
	printf("It was designed as a system with a user-friendly CLI interface for \nperforming repetitive arithmetic operations. It is not a calculator with \npre-installed programmes, but rather an engine that allows you to \nadd the functionality you need, specifically developed for the problem \nat hand.");
	printf("This means it is no longer limited to solving mathematical problems, \nbut can extend to other fields.");
	printf("\n \n \n");
	stringMultiply('=', 30);
	printf("COMMAND STRUCTURE BY LEVELS:\n \n \n");
	printf("This programme is designed to support commands according to the level. \nIf you try to enter a command at the wrong level, it may not be executed.");
	printf("\n \n \n");
	printf("The list of main level commands is shown below:\n \n");
	printf("1) exit			--> quit the programme\n");
	printf("2) help			--> check manual\n");
	printf("3) cls/clear		--> clear screen\n");
	printf("4) break/brk		--> break current menu while\n");
	printf("5) addApp/aap		--> Add a new function to the programme\n");
	printf("6) appMenu/amu		--> Go to the installed functions\n");
	//printf("7) exit				--> quit the programme\n");
	printf("\n \n \n");
	printf("We hope you enjoy this program");
	printf("\n \n \n");
	stringMultiply('=', 50);
	printf("\n \n");
	printf("Press enter key to contnue...");
	bufferCls();

	return 0;

}

int cachMan(void) {
	printf("\n");
	stringMultiply('-', 30);
	printf("\n");
	printf("1) exit			--> quit the programme\n");
	printf("2) help			--> check manual\n");
	printf("3) cls/clear		--> clear screen\n");
	printf("4) break/brk		--> break current menu while\n");
	printf("5) addApp/aap		--> Add a new function to the programme\n");
	printf("6) appMenu/amu		--> Go to the installed functions\n");
	printf("\n");
	stringMultiply('-', 30);
	printf("\n");

	return 0;

}