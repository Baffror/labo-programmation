#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

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
	printf("**                                            `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'                                             **\n");
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

void bienvenue() {
	system("cls");
	printf("*********************************************************************************************************************************\n");
	printf("***                               *************************************                                                  ********\n");
	printf("***   YEAH TUT TUT FUCK  TUT TUT  *************************************   Y'A QUE LES HUMAINS POUR JOUER A LA BATAILLE   ********\n");
	printf("***   TUT ALL HUMANS TUT TUT TUT  *************************************   EN CES TEMPS DE GUERRE ! ILS SONT VRAIMENT     ********\n");
	printf("***   IN  TUT TUT GALAXY  TUT     *************************************   ETRANGES !                                     ********\n");
	printf("***                               *************************************                                                  ********\n");
	printf("***********************************                     /~\\          ************************************************************\n");
	printf("***********************************                    |oo )         ************************************************************\n");
	printf("***********************************                    _\\=/_         ************************************************************\n");
	printf("***********************************    ___        #   /  _  \\  #     ************************************************************\n");
	printf("***********************************   / ()\\        \\\\//|/.\\|\\\\//     ************************************************************\n");
	printf("*********************************** _|_____|_       \\/  \\_/  \\/      ************************************************************\n");
	printf("***********************************| | === | |         |\\ /|         ************************************************************\n");
	printf("*********************************** |_|  O  |_|        \\_ _/         ************************************************************\n");
	printf("*********************************** ||  O  ||          | | |         ************************************************************\n");
	printf("*********************************** ||__*__||          | | |         ************************************************************\n");
	printf("***********************************|~ \\___/ ~|         []|[]         ************************************************************\n");
	printf("***********************************/=\\ /=\\ /=\\         | | |         ************************************************************\n");
	printf("***********************************[_]_[_]_[_]________/_]_[_\\________************************************************************\n");
	printf("*********************************************************************************************************************************\n");
	printf("                                             **                                  **                                              \n");
	printf("                                             **        JEU DE BATAILLE           **                                              \n");
	printf("                                             **                                  **                                              \n");
	printf("                                             **************************************                                              \n\n\n");
	system("pause");
}

void affCarte(int numero, int type) {

	// TROP CRADE JE SAIS MAIS J'AVAIS LA FLEMME DE TOUT REMETTRE EN ORDRE XD
	// IL EST TARD ET J'AI ENCORE DU BOULOT HEIN !
	// VOUS N'AVEZ JAMAIS LU CE MORCEAU DE CODE. MERCI !

	if (type == 0) {

		if (numero == 5 || numero == 13 || numero == 21 || numero == 29 ) {
			printf("valet de coeur");
		} else if (numero == 6 || numero == 14 || numero == 22 || numero == 30) {
			printf("dame de carreau");
		} else if (numero == 7 || numero == 15 || numero == 23 || numero == 31) {
			printf("roi de trefle");
		} else if (numero == 8 || numero == 16 || numero == 24 || numero == 32) {
			printf("as de pique");
		} else if (numero < 5) {
			numero = numero + 2;
			printf("%d de coeur", numero);
		} else if(numero > 8 && numero < 13) {
			numero = numero - 8 + 2;
			printf("%d de carreau", numero);
		} else if (numero > 16 && numero < 21) {
			numero = numero - 16 + 2;
			printf("%d de trefle", numero);
		} else if (numero > 24 && numero < 32) {
			numero = numero - 24 + 2;
			printf("%d de pique", numero);
		}

	} else if (type == 1) {

		if (numero == 10 || numero == 23 || numero == 36 || numero == 49) {
			printf("valet de coeur");
		} else if (numero == 11 || numero == 24 || numero == 37 || numero == 50) {
			printf("dame de carreau");
		} else if (numero == 12 || numero == 25 || numero == 38 || numero == 51) {
			printf("roi de trefle");
		} else if (numero == 13 || numero == 26 || numero == 39 || numero == 52) {
			printf("as de pique");
		} else if (numero < 10) {
			numero = numero + 2;
			printf("%d de coeur", numero);
		} else if (numero > 8 && numero < 13) {
			numero = numero - 13 + 2;
			printf("%d de carreau", numero);
		} else if (numero > 16 && numero < 21) {
			numero = numero - 26 + 2;
			printf("%d de trefle", numero);
		} else if (numero > 24 && numero < 32) {
			numero = numero - 39 + 2;
			printf("%d de pique", numero);
		}

	}


}

void purge(void)
{
	int c;
	while ((c = fgetc(stdin)) != '\n' && c != EOF) {
	}
}

void main() {

	// variable hors boucle
	int quitter = 0, finJeu =0,pileJoueur1=0,pileJoueur2=0,cpt = 0;
	// initialisation random
	srand(time(NULL));

	// Taille console
	system("mode con LINES=31 COLS=130");

	do {

		// initialisation variables
		int valideChoixJeu=0, valideChoixAutomatique=0, finJeu=0, nbrCarteJoueur1=0, nbrCarteJoueur2=0;
		int choixJeu, choixAutomatique, choixSwitch;


		// initialisation des tableaux contenant les jeux de cartes
		/*
			Tabcarte[0] => Jeu 32 cartes
			Tabcarte[1] => Jeu 52 cartes

			32 CARTES =>
				*  1 -> 8   = 7 à as COEUR
				*  9 -> 16  = 7 à as CARREAU
				*  17 -> 24 = 7 à as TREFLE
				*  25 -> 32 = 7 à as PIQUE

			52 CARTES =>
				*  1  -> 13  = 2 à as COEUR
				*  14 -> 26  = 2 à as CARREAU
				*  27 -> 39  = 2 à as TREFLE
				*  40 -> 52  = 2 à as PIQUE

		*/
		int tabCarte[2][53];
		/*                                               JEU 32 CARTES                                            */
		/* COEUR                 CARREAU                   TREFLE                       PIQUE                     */
		tabCarte[0][0] = 1;		tabCarte[0][8] = 9;		tabCarte[0][16] = 17;		tabCarte[0][24] = 25;
		tabCarte[0][1] = 2;		tabCarte[0][9] = 10;	tabCarte[0][17] = 18;		tabCarte[0][25] = 26;
		tabCarte[0][2] = 3;		tabCarte[0][10] = 11;	tabCarte[0][18] = 19;		tabCarte[0][26] = 27;
		tabCarte[0][3] = 4;		tabCarte[0][11] = 12;	tabCarte[0][19] = 20;		tabCarte[0][27] = 28;
		tabCarte[0][4] = 5;		tabCarte[0][12] = 13;	tabCarte[0][20] = 21;		tabCarte[0][28] = 29;
		tabCarte[0][5] = 6;		tabCarte[0][13] = 14;	tabCarte[0][21] = 22;		tabCarte[0][29] = 30;
		tabCarte[0][6] = 7;		tabCarte[0][14] = 15;	tabCarte[0][22] = 23;		tabCarte[0][30] = 31;
		tabCarte[0][7] = 8;		tabCarte[0][15] = 16;	tabCarte[0][23] = 24;		tabCarte[0][31] = 32;

		/*                                               JEU 52 CARTES                                            */
		/*    COEUR                   CARREAU                   TREFLE                       PIQUE                     */
		tabCarte[1][0] = 1;		tabCarte[1][13] = 14;	tabCarte[1][26] = 27;		tabCarte[1][39] = 40;
		tabCarte[1][1] = 2;		tabCarte[1][14] = 15;	tabCarte[1][27] = 28;		tabCarte[1][40] = 41;
		tabCarte[1][2] = 3;		tabCarte[1][15] = 16;	tabCarte[1][28] = 29;		tabCarte[1][41] = 42;
		tabCarte[1][3] = 4;		tabCarte[1][16] = 17;	tabCarte[1][29] = 30;		tabCarte[1][42] = 43;
		tabCarte[1][4] = 5;		tabCarte[1][17] = 18;	tabCarte[1][30] = 31;		tabCarte[1][43] = 44;
		tabCarte[1][5] = 6;		tabCarte[1][18] = 19;	tabCarte[1][31] = 32;		tabCarte[1][44] = 45;
		tabCarte[1][6] = 7;		tabCarte[1][19] = 20;	tabCarte[1][32] = 33;		tabCarte[1][45] = 46;
		tabCarte[1][7] = 8;		tabCarte[1][20] = 21;	tabCarte[1][33] = 34;		tabCarte[1][46] = 47;
		tabCarte[1][8] = 9;		tabCarte[1][21] = 22;	tabCarte[1][34] = 35;		tabCarte[1][47] = 48;
		tabCarte[1][9] = 10;	tabCarte[1][22] = 23;	tabCarte[1][35] = 36;		tabCarte[1][48] = 49;
		tabCarte[1][10] = 11;	tabCarte[1][23] = 24;	tabCarte[1][36] = 37;		tabCarte[1][49] = 50;
		tabCarte[1][11] = 12;	tabCarte[1][24] = 25;	tabCarte[1][37] = 38;		tabCarte[1][50] = 51;
		tabCarte[1][12] = 13;	tabCarte[1][25] = 26;	tabCarte[1][38] = 39;		tabCarte[1][51] = 52;

		/*                                               LES CARTES DU JOUEUR                                            */
		/*
			tabJoueur1[52] => 0-52 = max cartes possédés par le joueur ( valable pour le jeu 32 ou 52 cartes )
			tabJoueur1[X] = valeur de la carte possédée ( 1 a 32 pour 32 carte et 1 a 52 pour 52 cartes )
										
		*/
		int tabJoueur1[52] = { 0 };
		int tabJoueur2[52] = { 0 };




		/*                                               Bienvenue                                            */
		bienvenue();


		do {
			/*                                               32 uo 52 carte ?                                            */
			system("cls");
			printf("*********************************************************************************************************************************\n");
			printf("                                             **                                  **                                              \n");
			printf("                                             **   JOUER AVEC 32 OU 52 CARTES ?   **                                              \n");
			printf("                                             **                                  **                                              \n");
			printf("                                             **************************************                                              \n");
			scanf_s("%d", &choixJeu);
			purge();
			// sorti boucle si entrée correcte
			if (choixJeu == 32 || choixJeu == 52) {
				valideChoixJeu = 1;
			}

		} while (valideChoixJeu==0);

		do {
			/*                                               32 ou 52 carte ?                                            */
			system("cls");
			printf("*********************************************************************************************************************************\n");
			printf("                                           **                                       **                                           \n");
			printf("                                           **   JOUER AUTOMATIQUEMENT LA PARTIE ?   **                                           \n");
			printf("                                           **         0 = non / 1 = oui             **                                           \n");
			printf("                                           *******************************************                                           \n");
			scanf_s("%d", &choixJeu);
			// purge le buffer
			purge();
			printf("choixJeu => %d", choixJeu);
			// sorti boucle si entrée correcte
			if (choixJeu == 32 || choixJeu == 52) {
				valideChoixJeu = 1;
			}

		} while (valideChoixJeu == 0);


		/*                                               JOUER OU QUITTER ?                                            */

		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                        *******************     **********************                                           \n");
		printf("                                        **               **     **                  **                                           \n");
		printf("                                        **   0 : JOUER   **     **   1 = QUITTER    **                                           \n");
		printf("                                        **               **     **                  **                                           \n");
		printf("                                        *******************     **********************                                           \n");
		scanf_s("%d", &choixSwitch);
		purge();

		switch (choixSwitch){

		/*                                                     JOUONS A LA BATAILLE !                                          */
		case 0:

			system("cls");
			printf("*********************************************************************************************************************************\n");
			printf("                                       *************************************************                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       **   PATIENCE... NOUS MELANGEONS LES CARTES    **                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       *************************************************                                         \n");

			/* MELANGEONS LES CARTES ouai ok c'est des tableaux mais on se comprends non ? */
			for (int melange = 0; melange < 50; melange++) {

				if (choixJeu == 32) {

					// tir ( PAN ! ) deux valeurs entre 0 et 31
					int rand1 = rand() % 32;
					int rand2 = rand() % 32;

					// les rand sont pas identique hein ?
					if (rand1 != rand2) {
						int temp1 = tabCarte[0][rand1];
						int temp2 = tabCarte[0][rand2];
						tabCarte[0][rand1] = temp2;
						tabCarte[0][rand2] = temp1;
					}

				} else {

					// tir ( PAN ! ) deux valeurs entre 0 et 52
					int rand1 = rand() % 52;
					int rand2 = rand() % 52;

					// les rand sont pas identique hein ?
					if (rand1 != rand2) {
						int temp1 = tabCarte[1][rand1];
						int temp2 = tabCarte[1][rand2];
						tabCarte[1][rand1] = temp2;
						tabCarte[1][rand2] = temp1;
					}

				}

			}

			Sleep(1500);
			system("cls");
			printf("*********************************************************************************************************************************\n");
			printf("                                       *************************************************                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       **       PATIENCE... DISTRIBUTION EN COURS     **                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       *************************************************                                         \n");

			cpt = 0;
			// DISTRIBUTION POUR UN JEU DE 32 CARTES
			if (choixJeu == 32) {

				for (int i = 0; i < 33; i++) {

					// donne la carte au joueur 1
					if (i % 2 == 0) {
						// donne la carte au joueur 2
						tabJoueur1[cpt] = tabCarte[0][i];
						// Nombre de carte dans la pile joueur1
						nbrCarteJoueur1++;
						
					} else {
						// donne la carte au joueur 2
						tabJoueur2[cpt] = tabCarte[0][i];
						// Nombre de carte dans la pile joueur2
						nbrCarteJoueur2++;
						// indice permettant de créer la pile joueur.
						cpt++;
					}


				}

			// DISTRIBUTION POUR UN JEU DE 52 CARTES
			} else {

				for (int i = 0; i < 53; i++) {

					// donne la carte au joueur 1
					if (i % 2 == 0) {
						// donne la carte au joueur 2
						tabJoueur1[cpt] = tabCarte[1][i];
						// Nombre de carte dans la pile joueur1
						nbrCarteJoueur1++;

					} else {
						// donne la carte au joueur 2
						tabJoueur2[cpt] = tabCarte[1][i];
						// Nombre de carte dans la pile joueur2
						nbrCarteJoueur2++;
						// indice permettant de créer la pile joueur.
						cpt++;
					}


				}

			}
			Sleep(1500);

		    system("cls");
			printf("*********************************************************************************************************************************\n");
			printf("                                       *************************************************                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       **          QUE LA BATAILLE COMMENCE !         **                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       *************************************************                                         \n");

			do {

				// UN GAGNANT ?
				if (nbrCarteJoueur1 == 0 || nbrCarteJoueur2 == 0) {

					if (nbrCarteJoueur1 == 0) {
						printf("*********************************************************************************************************************************\n");
						printf("                                       *************************************************                                         \n");
						printf("                                       **                                             **                                         \n");
						printf("                                       **             JOUEUR 1 GAGNE !                **                                         \n");
						printf("                                       **                                             **                                         \n");
						printf("                                       *************************************************                                         \n");
					}
					else {
						printf("*********************************************************************************************************************************\n");
						printf("                                       *************************************************                                         \n");
						printf("                                       **                                             **                                         \n");
						printf("                                       **             JOUEUR 2 GAGNE !                **                                         \n");
						printf("                                       **                                             **                                         \n");
						printf("                                       *************************************************                                         \n");
					}
					// fin de la partie !
					finJeu = 1;

				// BATAILLE !
				} else {

					/************************************ VOYONS LES CARTES QUI SORTENT ***********************************/
					printf("\n*****\npiljoueur1 => %d / pilejoueur2 => %d\nJ1 => %d \nJ2 => %d\n*****\n", pileJoueur1, pileJoueur2, tabJoueur1[pileJoueur1], tabJoueur2[pileJoueur2]);
					printf("Joueur 1 tire : ");
					affCarte(tabJoueur1[pileJoueur1], choixJeu);
					printf(" VS ");
					printf("Joueur 2 tire : ");
					affCarte(tabJoueur2[pileJoueur2], choixJeu);
					printf("\n");
					system("pause");

					// on avance dans la pile
					pileJoueur1++;
					pileJoueur2++;
					if (pileJoueur1 >= nbrCarteJoueur1) { pileJoueur1 = 0; }
					if (pileJoueur1 >= nbrCarteJoueur2) { pileJoueur2 = 0; }


				}

			} while (finJeu == 0);

			
			break;
		/*                                                     QUITTER                                          */
		case 1:
			quitter = 1;
			dessine();
			break;
	    /*                                               DEFAULT ERREUR DANS LES DONNEES ENTREES -> RETOUR START                                            */
		default:
			printf("Merci de bien vouloir choisir l'option 0 ou 1");
			system("pause");
			break;
		}

	} while (quitter == 0);


}