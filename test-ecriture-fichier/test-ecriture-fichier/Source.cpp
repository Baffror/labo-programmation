#include <stdlib.h>
#include <stdio.h>

void purge(void)
{
	int c;
	while ((c = fgetc(stdin)) != '\n' && c != EOF) {
	}
}


void main() {
	/*
	FILE * monFichier = NULL;
	monFichier = fopen("test.txt", "r");

	printf("%s", monFichier);
	system("pause");
	*/

	int i, j;
	int matrice[5][5] = {{1,2,3,4,5},{ 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 }}
	system("pause");
}