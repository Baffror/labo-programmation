#include <stdio.h>
#include <stdlib.h>

int varGlobal = 10;

void affichage() {

	int varLoc;

	// initialisé a 0 par défaut
	printf("varGlob:%d", varGlobal);
	// n'est pas initialisé par défaut
	printf("varLoc:%d", varLoc);

}

void main() {

	affichage();
	system("pause");

}