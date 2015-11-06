#include <stdio.h>
#include <stdlib.h>

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

void purge(void)
{
	int c;
	while ((c = fgetc(stdin)) != '\n' && c != EOF) {
	}
}

void main() {

	// variable hors boucle
	int quitter = 0;

	// Taille console
	system("mode con LINES=31 COLS=130");

	do {

		// initialisation variables
		int valideChoixJeu=0, valideChoixAutomatique=0;
		int choixJeu, choixAutomatique, choixSwitch;


		// initialisation des tableaux contenant les jeux de cartes
		/*
			Tabcarte[0] => Jeu 32 cartes
			Tabcarte[1] => Jeu 52 cartes

			Tabcarte[X][0] => coeur
			Tabcarte[X][1] => carreau
			Tabcarte[X][2] => trèfle
			Tabcarte[X][4] => pique

			Les cartes : 
				*  2 -> 10
				* 11 -> valet
				* 12 -> dame
				* 13 -> Roi
				* 14 -> As

		*/

		int tabCarte[2][4][13];

		/*                                               JEU 32 CARTES                                            */
		/*     COEUR                       CARREAU                      TREFLE                     PIQUE          */
		tabCarte[0][0][0] = 7;		tabCarte[0][1][0] = 7;		tabCarte[0][2][0] = 7;		tabCarte[0][3][0] = 7;
		tabCarte[0][0][1] = 8;		tabCarte[0][1][1] = 8;		tabCarte[0][2][1] = 8;		tabCarte[0][3][1] = 8;
		tabCarte[0][0][2] = 9;		tabCarte[0][1][2] = 9;		tabCarte[0][2][2] = 9;		tabCarte[0][3][2] = 9;
		tabCarte[0][0][3] = 10;		tabCarte[0][1][3] = 10;		tabCarte[0][2][3] = 10;		tabCarte[0][3][3] = 10;
		tabCarte[0][0][4] = 11;		tabCarte[0][1][4] = 11;		tabCarte[0][2][4] = 11;		tabCarte[0][3][4] = 11;
		tabCarte[0][0][5] = 12;		tabCarte[0][1][5] = 12;		tabCarte[0][2][5] = 12;		tabCarte[0][3][5] = 12;
		tabCarte[0][0][6] = 13;		tabCarte[0][1][6] = 13;		tabCarte[0][2][6] = 13;		tabCarte[0][3][6] = 13;
		tabCarte[0][0][7] = 14;		tabCarte[0][1][7] = 14;		tabCarte[0][2][7] = 14;		tabCarte[0][3][7] = 14;

		/*                                               JEU 52 CARTES                                            */
		/*     COEUR                       CARREAU                      TREFLE                     PIQUE          */
		tabCarte[0][0][0] = 2;		tabCarte[0][1][0] = 2;		tabCarte[0][2][0] = 2;		tabCarte[0][3][0] = 2;
		tabCarte[0][0][1] = 3;		tabCarte[0][1][1] = 3;		tabCarte[0][2][1] = 3;		tabCarte[0][3][1] = 3;
		tabCarte[0][0][2] = 4;		tabCarte[0][1][2] = 4;		tabCarte[0][2][2] = 4;		tabCarte[0][3][2] = 4;
		tabCarte[0][0][3] = 5;		tabCarte[0][1][3] = 5;		tabCarte[0][2][3] = 5;		tabCarte[0][3][3] = 5;
		tabCarte[0][0][4] = 6;		tabCarte[0][1][4] = 6;		tabCarte[0][2][4] = 6;		tabCarte[0][3][4] = 6;
		tabCarte[0][0][5] = 7;		tabCarte[0][1][5] = 7;		tabCarte[0][2][5] = 7;		tabCarte[0][3][5] = 7;
		tabCarte[0][0][6] = 8;		tabCarte[0][1][6] = 8;		tabCarte[0][2][6] = 8;		tabCarte[0][3][6] = 8;
		tabCarte[0][0][7] = 9;		tabCarte[0][1][7] = 9;		tabCarte[0][2][7] = 9;		tabCarte[0][3][7] = 9;
		tabCarte[0][0][8] = 10;		tabCarte[0][1][8] = 10;		tabCarte[0][2][8] = 10;		tabCarte[0][3][8] = 10;
		tabCarte[0][0][9] = 11;		tabCarte[0][1][9] = 11;		tabCarte[0][2][9] = 11;		tabCarte[0][3][9] = 11;
		tabCarte[0][0][10] = 12;	tabCarte[0][1][10] = 12;	tabCarte[0][2][10] = 12;	tabCarte[0][3][10] = 12;
		tabCarte[0][0][11] = 13;	tabCarte[0][1][11] = 13;	tabCarte[0][2][11] = 13;	tabCarte[0][3][11] = 13;
		tabCarte[0][0][12] = 14;	tabCarte[0][1][12] = 14;	tabCarte[0][2][12] = 14;	tabCarte[0][3][12] = 14;




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
			for (int ligne = 0; ligne < 4; ligne++) {

				for (int melange = 0; melange < 50; melange++) {

					if (choixJeu == 32) {

						// tir ( PAN ! ) deux valeurs entre 0 et 7
						int rand1 = rand() % 8;
						int rand2 = rand() % 8;

						// les rand sont pas identique hein ?
						if (rand1 != rand2) {
							int temp1 = tabCarte[0][ligne][rand1];
							int temp2 = tabCarte[0][ligne][rand2];
							tabCarte[0][ligne][rand1] = temp2;
							tabCarte[0][ligne][rand2] = temp1;
						}

					} else {

						// tir ( PAN ! ) deux valeurs entre 0 et 13
						int rand1 = rand() % 14;
						int rand2 = rand() % 14;

						// les rand sont pas identique hein ?
						if (rand1 != rand2) {
							int temp1 = tabCarte[1][ligne][rand1];
							int temp2 = tabCarte[1][ligne][rand2];
							tabCarte[1][ligne][rand1] = temp2;
							tabCarte[1][ligne][rand2] = temp1;
						}

					}

				}

			}

			
			break;
		/*                                                     QUITTER                                          */
		case 1:
			quitter = 1;
			dessine();
			break;
	    /*                                               DEFAULT ERREUR DANS LES DONNEES ENTREES RETOUR START                                            */
		default:
			printf("Merci de bien vouloir choisir l'option 0 ou 1");
			system("pause");
			break;
		}

	} while (quitter == 0);


}