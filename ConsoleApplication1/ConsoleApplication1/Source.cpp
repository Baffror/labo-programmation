#include <stdio.h>
#include <stdlib.h>


void estPair(int nbr);
void estPair(int nbr) {

	(nbr % 2) ? printf("Pair\n") : printf("Impair\n");
	system("pause");
}

void main() {

	int test = 5;
	int test2 = 6;

	estPair(test);
	estPair(test2);

	system("pause");

}