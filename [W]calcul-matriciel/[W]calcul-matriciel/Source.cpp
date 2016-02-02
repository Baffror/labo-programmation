#include <stdlib.h>
#include <stdio.h>

void main() {

	int nligne = 5, ncolonne = 5;
	int matrice[5][5] = { { 10 } };

	int i = 0, j = 0;
	int determinant = 0, produit = 0;


	for (i = 0; i < nligne; i++) {

		for (j = 0; i < ncolonne; i++) {

			produit = produit*matrice[j][i];
			printf("produit1 => %d\n", produit);

		}

		determinant += produit;
		produit = 1;

	}

	for (i = 0-1; i >=0; i--) {

		for (j = 0; j < nligne; j++) {

			produit = produit*matrice[i][j];
			printf("produit2 => %d\n", produit);

		}

		determinant -= produit;
		produit = 1;

	}

	printf("Determinant => %d\n", determinant);
	system("pause");

}