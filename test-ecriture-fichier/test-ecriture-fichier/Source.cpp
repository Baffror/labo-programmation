#include <stdio.h>
#include <stdlib.h>


void main() {
	char motif[200];
	char prenom[200];
	int heure = 0;
	int jour = 0;
	int annee = 0;
	int test = 0;
	int menu = 0;
	FILE* nom = NULL;
	FILE*absent = NULL;

	do {
		printf("Bienvenu dans le programme made in Rommel\n");
		printf("Choissisez les options (1-3)\n");
		printf("Enregistrez un nom\n");
		printf("Enregistrez une absences\n");
		printf("Quittez le programme\n");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			do {
				nom = fopen("nom.txt", "a");
				printf("enregistrez le nom\n");
				scanf(" %[^\n]s", prenom);
				fprintf(nom, "%s\n", prenom);
				printf("Voulez vous enregistrez un autre nom ?\n");
				printf("Tapez 0 pour non ou tapez 1 pour oui\n");
				scanf("%d", &test);

			} while (test != 0);
			fclose(nom);
			break;
		case 2:
			do {
				absent = fopen("absent.txt", "a");
				printf("Indiquez l'absent\n");
				scanf(" %[^\n]s", prenom);
				fprintf(absent, "%s\n", prenom);
				printf("Indiquez l'heure\n");
				scanf("%d", &heure);
				fprintf(absent, "%dh le ", heure);
				printf("Indiquez le jour\n");
				scanf("%d", &jour);
				fprintf(absent, "%d en ", jour);
				printf("Indiquez l'annee\n");
				scanf("%d", &annee);
				fprintf(absent, "%d\n", annee);
				printf("Veuillez indiquez le motif de l'absence\n");
				scanf(" %[^\n]s", motif);
				fprintf(absent, "%s \n\n", motif);
				printf("Voulez vous enregistrez un autre nom ?\n");
				printf("Tapez 0 pour non ou tapez 1 pour oui\n");
				scanf("%d", &test);
			} while (test != 0);
			fclose(absent);
			break;

		case 3:
			exit(EXIT_SUCCESS);

		}




	} while (menu != 3);
	system("pause");
}