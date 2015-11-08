/* *********************************** LES FORMES ********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dessine() {

	// Vide la console
	system("cls");

	printf("*********************************************************************************************************************************\n");
	printf("**                                                                                                                             **\n");
	printf("**                                    _                      _______                      _                                    **\n");
	printf("**                                 _dMMMb._              .adOOOOOOOOOba.              _,dMMMb_                                 **\n");
	printf("**                                dP'  ~YMMb            dOOOOOOOOOOOOOOOb            aMMP~  `Yb                                **\n");
	printf("**                                V      ~\"Mb          dOOOOOOOOOOOOOOOOOb          dM\"~      V                                **\n");
	printf("**                                         `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'                                         **\n");
	printf("**                                          `YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'                                          **\n");
	printf("**                                            `YMMM| OP'~~YOOOOOOOOOOOP ~~`YO |MMMP'                                           **\n");
	printf("**                                   ,dMMMb.     ~~' OO     `YOOOOOP'     OO `~~     ,dMMMb.                                   **\n");
	printf("**                                _,dP~  `YMba_      OOb      `OOO'      dOO      _aMMP'  ~Yb._                                **\n");
	printf("**                               <MMP'     `~YMMa_   YOOo   @  OOO  @   oOOP   _adMP~'      `YMM>                              **\n");
	printf("**                                            `YMMMM\`OOOo     OOO     oOOO'/MMMMP'                                             **\n");
	printf("**                                    ,aa.     `~YMMb `OOOb._,dOOOb._,dOOO'dMMP~'       ,aa.                                   **\n");
	printf("**                                  ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb.                                 **\n");
	printf("**                                 ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM.                                **\n");
	printf("**                                 MP'        ~YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP~       `YM                                **\n");
	printf("**                                 YMb           ~YMMMM\\`OOOOI`````IOOOOO'/MMMMP~           dMP                                **\n");
	printf("**                                  `Mb.           `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'                                 **\n");
	printf("**                                    `'                  `OObNNNNNdOO'                   `'                                   **\n");
	printf("**                                                          `~OOOOO~'                                                          **\n");
	printf("**                                                                                                                             **\n");
	printf("**                     #####  #####  #####  #####  #    #            #    #  #####  #####  #      ####                         **\n");
	printf("**                     #      #   #  #   #     #    #  #             #    #  #   #  #   #  #      #   #                        **\n");
	printf("**                     #      #####  #####    #      ##              # ## #  #   #  #####  #      #   #                        **\n");
	printf("**                     #      # #    #   #   #       #               ##  ##  #   #  # #    #      #   #                        **\n");
	printf("**                     #####  #  #   #   #  #####   #                #    #  #####  #  #   #####  ####                         **\n");
	printf("**                                                                                                                             **\n");
	printf("**                                                    The badass power !                                                       **\n");
	printf("*********************************************************************************************************************************\n");
}

void main()
{
	// initialisation variable
	int quitter = 0;
	int choixForme, nbrLigne, longueur, nbrEspace;


	// Fixe la taille console pour avoir un affichage correct
	system("mode con LINES=31 COLS=130");

	// Bienvenue
	do {
		system("cls");
		printf("                                                 ******************************                                                  \n");
		printf("                                                 **         BIENVENUE        **                                                  \n");
		printf("                                                 **   CHOISISSEZ UNE FORME   **                                                  \n");
		printf("                                                 **                          **                                                  \n");
		printf("                                                 ******************************                                                  \n\n");
		printf(" ******************* *********************** ********************** *********************          *********************         \n");
		printf(" **               ** **                   ** **                  ** **                 **          **                 **         \n");
		printf(" **   0 : CARRE   ** **   1 = RECTANGLE   ** **   2 = TRIANGLE   ** **   3 = LOSANGE   **          **  4 = QUITTER    **         \n");
		printf(" **               ** **                   ** **                  ** **                 **          **                 **         \n");
		printf(" ******************* *********************** ********************** *********************          *********************         \n\n");
		scanf_s("%d", &choixForme);

		// On quitte la boucle
		if (choixForme == 4) {
			quitter = 1;
		// sinon on continue avec la demande du nombre de ligne
		} else {

			system("cls");
			printf("                                      ************************************************                                            \n");
			printf("                                      **                                            **                                            \n");
			printf("                                      **   COMBIEN DE LIGNE DOIT AVOIR LA FORME ?   **                                            \n");
			printf("                                      **                                            **                                            \n");
			printf("                                      ************************************************                                            \n\n");
			scanf_s("%d", &nbrLigne);

			if (choixForme >= 0 && choixForme < 4 && nbrLigne > 0 && nbrLigne < 30) {
				// vide console
				system("cls");
				// Choixforme
				switch (choixForme) {

					// CARRE
					case 0:
						for (int i = 0; i < nbrLigne; i++) {
							for (int J = 0; J < nbrLigne; J++) {
								printf("*");
							}
							printf("\n");
						}
						system("pause");
						break;
					// RECTANGLE
					case 1:

						// quelle est la longueur ?
						system("cls");
						printf("                                      ************************************************                                            \n");
						printf("                                      **                                            **                                            \n");
						printf("                                      **   QUELLE EST LA LONGUEUR DU RECTANGLE ?    **                                            \n");
						printf("                                      **                                            **                                            \n");
						printf("                                      ************************************************                                            \n\n");
						scanf_s("%d", &longueur);

						// On dessine la forme
						system("cls");
						if (longueur > 0 && longueur <= 25) {

							for (int i = 0; i < nbrLigne; i++) {
								for (int J = 0; J < longueur; J++) {
									printf("*");
								}
								printf("\n");
							}
						// on affiche l'erreur de longueur
						} else {
							system("cls");
							printf("                                              ******************************                                                     \n");
							printf("                                              **                          **                                                     \n");
							printf("                                              **          ERREUR          **                                                     \n");
							printf("                                              **                          **                                                     \n");
							printf("                                              ******************************                                                     \n\n");
							printf("Raisons possibles : \n");
							printf("\t* La longueur de la forme doit être un chiffre entre 0 et 25 inclus\n");
							system("pause");
						}
						system("pause");
						break;
					// TRIANGLE
					case 2:

						for (int i = 0; i < nbrLigne; i++){

							for (int j = 0; j < nbrLigne+i; j++){

								nbrEspace = nbrLigne - ( i + 1 );
								if (j < nbrEspace) {
									printf(" ");
								} else {
									printf("*");
								}
								

							}
							printf("\n");

						}
						system("pause");
						break;
					// LOSANGE
					case 3 :
						// On dessine la forme
						if ( nbrLigne%2 != 0) {

							// triangle supérieur
							for (int i = 0; i < nbrLigne/2+1; i++) {

								for (int j = 0; j < nbrLigne/2+1 + i; j++) {

									nbrEspace = nbrLigne/2-i;
									if (j < nbrEspace) {
										printf(" ");
									} else {
										printf("*");
									}


								}
								printf("\n");
							}

							// triangle inférieur et inversé
							for (int i = 1; i <= nbrLigne/2; i++) {

								
								for (int j = 1; j < (i+1)+(nbrLigne-2*i); j++) {

									nbrEspace = i + 1;
									if (j < nbrEspace) {
										printf(" ");
									} else {
										printf("*");
									}


								}
								printf("\n");

							}

							


							system("pause");
							// on affiche l'erreur de longueur
						} else {
							system("cls");
							printf("                                              ******************************                                                     \n");
							printf("                                              **                          **                                                     \n");
							printf("                                              **          ERREUR          **                                                     \n");
							printf("                                              **                          **                                                     \n");
							printf("                                              ******************************                                                     \n\n");
							printf("Raisons possibles : \n");
							printf("\t* Votre losange doit avoir un nombre de ligne IMPAIR\n");
							system("pause");
						}

				}

			} else {
				system("cls");
				printf("                                              ******************************                                                     \n");
				printf("                                              **                          **                                                     \n");
				printf("                                              **          ERREUR          **                                                     \n");
				printf("                                              **                          **                                                     \n");
				printf("                                              ******************************                                                     \n\n");
				printf("Raisons possibles : \n");
				printf("\t* Le choix de la forme doit être un chiffre entre 0 et 3\n");
				printf("\t* Le nombre de ligne ne peut excéder 30 pour un affichage optimal\n");
				system("pause");
			}

		}

	} while (quitter == 0);

	dessine();
	system("pause");

}