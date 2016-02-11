#include <stdio.h>
#include <stdlib.h>

void PGCMN(int nbr1, int nbr2) {
	int valeurMax = 0;
	(nbr1 > nbr2) ? valeurMax = nbr1 : valeurMax = nbr2;
	for (int i = valeurMax; i > 0; i--) {
		if (nbr1%i == 0 && nbr2%i == 0) {
			printf("PGCDM(%d,%d) => %d\n",nbr1,nbr2,i);
			break;
		}
	}
}


void main() {
	PGCMN(10, 15);
	PGCMN(48, 36);
	PGCMN(43, 67);
	system("pause");
}