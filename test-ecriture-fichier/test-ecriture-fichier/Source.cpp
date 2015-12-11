#include <stdlib.h>
#include <stdio.h>

void main() {

	FILE * monFichier = NULL;
	monFichier = fopen("test.txt", "r");

	printf("%s", monFichier);
	system("pause");




}