#include <stdio.h>
#include <stdlib.h>

int varGlobal = 10;

void affichage() {

	int varLoc;

	// initialis� a 0 par d�faut
	printf("varGlob:%d", varGlobal);
	// n'est pas initialis� par d�faut
	printf("varLoc:%d", varLoc);

}

void main() {

	affichage();
	system("pause");

}