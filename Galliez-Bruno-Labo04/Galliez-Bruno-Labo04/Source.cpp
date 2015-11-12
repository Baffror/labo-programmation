#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
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

	system("pause");
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

void affCarte(int numeroJ1, int numeroJ2, int type, int who, int nbrCarteJ1, int nbrCarteJ2) {

	// TROP CRADE JE SAIS MAIS J'AVAIS LA FLEMME DE TOUT REMETTRE EN ORDRE XD
	// IL EST TARD ET J'AI ENCORE DU BOULOT HEIN !
	// VOUS N'AVEZ JAMAIS LU CE MORCEAU DE CODE. MERCI !
	// pique   =>  \6
	// coeur   =>  \3
	// trefle  =>  \5
	// carreau =>  \4

	int tabType[4] = { 6,3,5,4 };
	char valCarteJ1, valCarteJ2;
	int typeCarteJ1, typeCarteJ2;

	if (type == 32) {

		switch (numeroJ1) {
		case 5:
			valCarteJ1 = 'V';
			typeCarteJ1 = 3;
			break;
		case 6:
			valCarteJ1 = 'D';
			typeCarteJ1 = 3;
			break;
		case 7:
			valCarteJ1 = 'R';
			typeCarteJ1 = 3;
			break;
		case 8:
			valCarteJ1 = 'A';
			typeCarteJ1 = 3;
			break;
		case 13:
			valCarteJ1 = 'V';
			typeCarteJ1 = 4;
			break;
		case 14:
			valCarteJ1 = 'D';
			typeCarteJ1 = 4;
			break;
		case 15:
			valCarteJ1 = 'R';
			typeCarteJ1 = 4;
			break;
		case 16:
			valCarteJ1 = 'A';
			typeCarteJ1 = 4;
			break;
		case 21:
			valCarteJ1 = 'V';
			typeCarteJ1 = 5;
			break;
		case 22:
			valCarteJ1 = 'D';
			typeCarteJ1 = 5;
			break;
		case 23:
			valCarteJ1 = 'R';
			typeCarteJ1 = 5;
			break;
		case 24:
			valCarteJ1 = 'A';
			typeCarteJ1 = 5;
			break;
		case 29:
			valCarteJ1 = 'V';
			typeCarteJ1 = 6;
			break;
		case 30:
			valCarteJ1 = 'D';
			typeCarteJ1 = 6;
			break;
		case 31:
			valCarteJ1 = 'R';
			typeCarteJ1 = 6;
			break;
		case 32:
			valCarteJ1 = 'A';
			typeCarteJ1 = 6;
			break;

		}

		if (numeroJ1 < 5) {
			valCarteJ1 = numeroJ1 + 6;
			typeCarteJ1 = 3;
		}
		else if (numeroJ1 > 8 && numeroJ1 < 13) {
			valCarteJ1 = numeroJ1 - 8 + 6;
			typeCarteJ1 = 4;
		}
		else if (numeroJ1 > 16 && numeroJ1 < 21) {
			valCarteJ1 = numeroJ1 - 16 + 6;
			typeCarteJ1 = 5;
		}
		else if (numeroJ1 > 24 && numeroJ1 < 29) {
			valCarteJ1 = numeroJ1 - 24 + 6;
			typeCarteJ1 = 6;
		}

	} else {

		switch (numeroJ1) {
		case 10:
			valCarteJ1 = 'V';
			typeCarteJ1 = 3;
			break;
		case 11:
			valCarteJ1 = 'D';
			typeCarteJ1 = 3;
			break;
		case 12:
			valCarteJ1 = 'R';
			typeCarteJ1 = 3;
			break;
		case 13:
			valCarteJ1 = 'A';
			typeCarteJ1 = 3;
			break;
		case 23:
			valCarteJ1 = 'V';
			typeCarteJ1 = 4;
			break;
		case 24:
			valCarteJ1 = 'D';
			typeCarteJ1 = 4;
			break;
		case 25:
			valCarteJ1 = 'R';
			typeCarteJ1 = 4;
			break;
		case 26:
			valCarteJ1 = 'A';
			typeCarteJ1 = 4;
			break;
		case 36:
			valCarteJ1 = 'V';
			typeCarteJ1 = 5;
			break;
		case 37:
			valCarteJ1 = 'D';
			typeCarteJ1 = 5;
			break;
		case 38:
			valCarteJ1 = 'R';
			typeCarteJ1 = 5;
			break;
		case 39:
			valCarteJ1 = 'A';
			typeCarteJ1 = 5;
			break;
		case 49:
			valCarteJ1 = 'V';
			typeCarteJ1 = 6;
			break;
		case 50:
			valCarteJ1 = 'D';
			typeCarteJ1 = 6;
			break;
		case 51:
			valCarteJ1 = 'R';
			typeCarteJ1 = 6;
			break;
		case 52:
			valCarteJ1 = 'A';
			typeCarteJ1 = 6;
			break;

		}

		if (numeroJ1 < 10) {
			valCarteJ1 = numeroJ1 + 1;
			typeCarteJ1 = 3;
		}
		else if (numeroJ1 > 13 && numeroJ1 < 23) {
			valCarteJ1 = numeroJ1 - 13 + 1;
			typeCarteJ1 = 4;
		}
		else if (numeroJ1 > 26 && numeroJ1 < 36) {
			valCarteJ1 = numeroJ1 - 26 + 1;
			typeCarteJ1 = 5;
		}
		else if (numeroJ1 > 39 && numeroJ1 < 49) {
			valCarteJ1 = numeroJ1 - 39 + 1;
			typeCarteJ1 = 6;
		}

	}

	if (type == 32) {

		switch (numeroJ2) {
		case 5:
			valCarteJ2 = 'V';
			typeCarteJ2 = 3;
			break;
		case 6:
			valCarteJ2 = 'D';
			typeCarteJ2 = 3;
			break;
		case 7:
			valCarteJ2 = 'R';
			typeCarteJ2 = 3;
			break;
		case 8:
			valCarteJ2 = 'A';
			typeCarteJ2 = 3;
			break;
		case 13:
			valCarteJ2 = 'V';
			typeCarteJ2 = 4;
			break;
		case 14:
			valCarteJ2 = 'D';
			typeCarteJ2 = 4;
			break;
		case 15:
			valCarteJ2 = 'R';
			typeCarteJ2 = 4;
			break;
		case 16:
			valCarteJ2 = 'A';
			typeCarteJ2 = 4;
			break;
		case 21:
			valCarteJ2 = 'V';
			typeCarteJ2 = 5;
			break;
		case 22:
			valCarteJ2 = 'D';
			typeCarteJ2 = 5;
			break;
		case 23:
			valCarteJ2 = 'R';
			typeCarteJ2 = 5;
			break;
		case 24:
			valCarteJ2 = 'A';
			typeCarteJ2 = 5;
			break;
		case 29:
			valCarteJ2 = 'V';
			typeCarteJ2 = 6;
			break;
		case 30:
			valCarteJ2 = 'D';
			typeCarteJ2 = 6;
			break;
		case 31:
			valCarteJ2 = 'R';
			typeCarteJ2 = 6;
			break;
		case 32:
			valCarteJ2 = 'A';
			typeCarteJ2 = 6;
			break;

		}

		if (numeroJ2 < 5) {
			valCarteJ2 = numeroJ2 + 6;
			typeCarteJ2 = 3;
		}
		else if (numeroJ2 > 8 && numeroJ2 < 13) {
			valCarteJ2 = numeroJ2 - 8 + 6;
			typeCarteJ2 = 4;
		}
		else if (numeroJ2 > 16 && numeroJ2 < 21) {
			valCarteJ2 = numeroJ2 - 16 + 6;
			typeCarteJ2 = 5;
		}
		else if (numeroJ2 > 24 && numeroJ2 < 29) {
			valCarteJ2 = numeroJ2 - 24 + 6;
			typeCarteJ2 = 6;
		}

	}
	else {

		switch (numeroJ2) {
		case 10:
			valCarteJ2 = 'V';
			typeCarteJ2 = 3;
			break;
		case 11:
			valCarteJ2 = 'D';
			typeCarteJ2 = 3;
			break;
		case 12:
			valCarteJ2 = 'R';
			typeCarteJ2 = 3;
			break;
		case 13:
			valCarteJ2 = 'A';
			typeCarteJ2 = 3;
			break;
		case 23:
			valCarteJ2 = 'V';
			typeCarteJ2 = 4;
			break;
		case 24:
			valCarteJ2 = 'D';
			typeCarteJ2 = 4;
			break;
		case 25:
			valCarteJ2 = 'R';
			typeCarteJ2 = 4;
			break;
		case 26:
			valCarteJ2 = 'A';
			typeCarteJ2 = 4;
			break;
		case 36:
			valCarteJ2 = 'V';
			typeCarteJ2 = 5;
			break;
		case 37:
			valCarteJ2 = 'D';
			typeCarteJ2 = 5;
			break;
		case 38:
			valCarteJ2 = 'R';
			typeCarteJ2 = 5;
			break;
		case 39:
			valCarteJ2 = 'A';
			typeCarteJ2 = 5;
			break;
		case 49:
			valCarteJ2 = 'V';
			typeCarteJ2 = 6;
			break;
		case 50:
			valCarteJ2 = 'D';
			typeCarteJ2 = 6;
			break;
		case 51:
			valCarteJ2 = 'R';
			typeCarteJ2 = 6;
			break;
		case 52:
			valCarteJ2 = 'A';
			typeCarteJ2 = 6;
			break;

		}

		if (numeroJ2 < 10) {
			valCarteJ2 = numeroJ2 + 1;
			typeCarteJ2 = 3;
		}
		else if (numeroJ2 > 13 && numeroJ2 < 23) {
			valCarteJ2 = numeroJ2 - 13 + 1;
			typeCarteJ2 = 4;
		}
		else if (numeroJ2 > 26 && numeroJ2 < 36) {
			valCarteJ2 = numeroJ2 - 26 + 1;
			typeCarteJ2 = 5;
		}
		else if (numeroJ2 > 39 && numeroJ2 < 49) {
			valCarteJ2 = numeroJ2 - 39 + 1;
			typeCarteJ2 = 6;
		}

	}


	printf("*********************************************************************************************************************************\n");
	printf("                                      **               **          **               **                                           \n");
	printf("                                      **   JOUEUR 1    **          **   JOUEUR 2    **                                           \n");
	printf("                                      **               **          **               **                                           \n");
	if (nbrCarteJ1 > 9) {
		printf("                                      **   Carte : %d  **          **", nbrCarteJ1);
	} else {
		printf("                                      **   Carte : %d   **          **", nbrCarteJ1);
	}

	if (nbrCarteJ2 > 9) {
		printf("   Carte : %d  **\n", nbrCarteJ2);
	}
	else {
		printf("   Carte : %d   **\n", nbrCarteJ2);
	}
	printf("                                      **               **          **               **                                           \n");
	printf("                                      *******************          *******************                                           \n\n");
	printf("                                      ###################          ###################                                           \n");
	printf("                                      #                 #          #                 #                                           \n");

	if (valCarteJ1 == 10) {
		printf("                                      #  %d         %d  #          # ", valCarteJ1, valCarteJ1);
	} else if (valCarteJ1 > 10) {
		printf("                                      #  %c           %c  #          # ", valCarteJ1, valCarteJ1);
	} else {
		printf("                                      #  %d           %d  #          # ", valCarteJ1, valCarteJ1);
	}

	if (valCarteJ2 == 10) {
		printf(" %d         %d  # \n", valCarteJ2, valCarteJ2);
	} else if (valCarteJ2 > 10) {
		printf(" %c           %c  # \n", valCarteJ2, valCarteJ2);
	} else {
		printf(" %d           %d  # \n", valCarteJ2, valCarteJ2);
	}

	//printf("                                      # %d             %d #          # %d             %d #                                            \n", valCarteJ1, valCarteJ1,valCarteJ2,valCarteJ2);
	printf("                                      #                 #          #                 #                                           \n");
	printf("                                      #                 #          #                 #                                           \n");
	printf("                                      #                 #          #                 #                                           \n");
	printf("                                      #        %c        #          #        %c        #                                           \n", typeCarteJ1, typeCarteJ2);
	printf("                                      #                 #          #                 #                                           \n");
	printf("                                      #                 #          #                 #                                           \n");
	printf("                                      #                 #          #                 #                                           \n");
	if (valCarteJ1 == 10) {
		printf("                                      #  %d         %d  #          # ", valCarteJ1, valCarteJ1);
	} else if (valCarteJ1 > 10) {
		printf("                                      #  %c           %c  #          # ", valCarteJ1, valCarteJ1);
	} else {
		printf("                                      #  %d           %d  #          # ", valCarteJ1, valCarteJ1);
	}

	if (valCarteJ2 == 10) {
		printf(" %d         %d  # \n", valCarteJ2, valCarteJ2);
	} else if (valCarteJ2 > 10) {
		printf(" %c           %c  # \n", valCarteJ2, valCarteJ2);
	} else {
		printf(" %d           %d  # \n", valCarteJ2, valCarteJ2);
	}
	printf("                                      #                 #          #                 #                                           \n");
	printf("                                      ###################          ###################                                           \n\n\n\n");

	if (who == 0 || who == 1) {
		printf("                                                 ************************\n");
		printf("                                                 **                    **                                                       \n");
		printf("                                                 **   JOUEUR %d GAGNE   **                                                       \n",who+1);
		printf("                                                 **                    **                                                       \n");
		printf("                                                 ************************                                                       \n");
	} else {
		printf("                                                 ************************\n");
		printf("                                                 **                    **                                                       \n");
		printf("                                                 **      BATAILLE      **                                                       \n");
		printf("                                                 **                    **                                                       \n");
		printf("                                                 ************************                                                       \n");
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
	int quitter = 0;
	// initialisation random
	srand(time(NULL));

	// Taille console
	system("mode con LINES=38 COLS=130");

	do {

		// initialisation variables
		int valideChoixJeu=0, valideChoixAutomatique=0, nbrCarteJoueur1=0, nbrCarteJoueur2=0, choixJeu=0, choixAutomatique=0, choixSwitch=0, pileJoueur1 = 0, pileJoueur2 = 0, finJeu = 0, cpt = 0, valeurCarteJ1=0, valeurCarteJ2=0;


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
		/*                                               LES CARTES DU TAMPON                                            */
		/*
			On stock les cartes de bataille dans un tampon. par simplicité, si un joueur n'as plus de carte, la partie sera fini
			Le tampon contient directement le numero de carte qu'on pourra réatribuer si c'est gagné par un joueur
			l'indice Tampon facilitera l'accès au tampon en cas de besoin
		*/
		int indiceTampon = 0;
		int tabTampon[52] = { 0 };


		/*                                               Bienvenue                                            */
		bienvenue();

		/*                                               JOUER OU QUITTER ?                                            */

		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                        **               **     **                  **                                           \n");
		printf("                                        **   0 : JOUER   **     **   1 = QUITTER    **                                           \n");
		printf("                                        **               **     **                  **                                           \n");
		printf("                                        *******************     **********************                                           \n");
		scanf_s("%d", &choixSwitch);
		purge();

		switch (choixSwitch){

		/*                                                     JOUONS A LA BATAILLE !                                          */
		case 0:

			do {
				/*                                               32 ou 52 carte ?                                            */
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

			} while (valideChoixJeu == 0);

			do {
				/*                                               32 ou 52 carte ?                                            */
				system("cls");
				printf("*********************************************************************************************************************************\n");
				printf("                                           **         VITESSE DE LA PARTIE          **                                           \n");
				printf("                                           **                                       **                                           \n");
				printf("                                           **           0 = automatique             **                                           \n");
				printf("                                           **       1 = rapide / 2 = manuel         **                                           \n");
				printf("                                           *******************************************                                           \n");
				scanf_s("%d", &choixAutomatique);
				// purge le buffer
				purge();
				// sorti boucle si entrée correcte
				if (choixAutomatique == 0 || choixAutomatique == 1 || choixAutomatique == 2) {
					valideChoixAutomatique = 1;
				}

			} while (valideChoixAutomatique == 0);

			system("cls");
			printf("*********************************************************************************************************************************\n");
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
			printf("                                       **                                             **                                         \n");
			printf("                                       **       PATIENCE... DISTRIBUTION EN COURS     **                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       *************************************************                                         \n");

			cpt = 0;
			// DISTRIBUTION POUR UN JEU DE 32 CARTES
			if (choixJeu == 32) {

				for (int i = 0; i < 32; i++) {

					// donne la carte au joueur 1
					if (i % 2 == 0 || i == 0 ){
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

				for (int i = 0; i < 52; i++) {

					// donne la carte au joueur 1
					if (i % 2 == 0 || i == 0) {
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
			printf("                                       **                                             **                                         \n");
			printf("                                       **          QUE LA BATAILLE COMMENCE !         **                                         \n");
			printf("                                       **                                             **                                         \n");
			printf("                                       *************************************************                                         \n");

			do {

				// UN GAGNANT ?
				if (nbrCarteJoueur1 == 0 || nbrCarteJoueur2 == 0) {
					system("cls");
					if (nbrCarteJoueur1 == 0) {
						printf("*********************************************************************************************************************************\n");
						printf("                                       **                                             **                                         \n");
						printf("                                       **        JOUEUR 1 GAGNE LA PARTIE !           **                                         \n");
						printf("                                       **                                             **                                         \n");
						printf("                                       *************************************************                                         \n");
					}
					else {
						printf("*********************************************************************************************************************************\n");
						printf("                                       **                                             **                                         \n");
						printf("                                       **        JOUEUR 2 GAGNE LA PARTIE  !          **                                         \n");
						printf("                                       **                                             **                                         \n");
						printf("                                       *************************************************                                         \n");
					}
					system("pause");
					// fin de la partie !
					finJeu = 1;

				// BATAILLE !
				}
				else {
					system("cls");

					// Permet de connaitre la valeur de carte pour savoir qui gagne ( et sans s'intéresser au signe )
					// sur 32 carte ca va de 1 à 8 et pour 52 ca va de 1 à 13
					if (choixJeu == 32) {
						valeurCarteJ1 = tabJoueur1[pileJoueur1] - (floor((tabJoueur1[pileJoueur1] - 1) / 8)) * 8;
						valeurCarteJ2 = tabJoueur2[pileJoueur2] - (floor((tabJoueur2[pileJoueur2] - 1) / 8)) * 8;
					}
					else {
						valeurCarteJ1 = tabJoueur1[pileJoueur1] - (floor((tabJoueur1[pileJoueur1] - 1) / 13)) * 13;
						valeurCarteJ2 = tabJoueur2[pileJoueur2] - (floor((tabJoueur2[pileJoueur2] - 1) / 13)) * 13;
					}


					// Les deux cartes sont identiques ? Mise en mémoire ! le tout ira au gagnant !
					if (valeurCarteJ1 == valeurCarteJ2) {
						// ajout au tampon
						tabTampon[indiceTampon + 1] = tabJoueur1[pileJoueur1];
						tabTampon[indiceTampon + 2] = tabJoueur2[pileJoueur2];
						// update indice
						indiceTampon += 2;
						// moins 1 carte à chaque joueur
						nbrCarteJoueur1--;
						nbrCarteJoueur2--;
						affCarte(tabJoueur1[pileJoueur1], tabJoueur2[pileJoueur2], choixJeu, 2, nbrCarteJoueur1, nbrCarteJoueur2);
						//printf("BATAILLE ! cartes mises en mémoires\n");

					// Sinon l'un gagne et on attribue
					}
					else {

						// Joueur 1 gagne carte joueur 2
						if (valeurCarteJ1 > valeurCarteJ2) {
							affCarte(tabJoueur1[pileJoueur1], tabJoueur2[pileJoueur2], choixJeu, 0, nbrCarteJoueur1, nbrCarteJoueur2);
							// joueur 1 prends la carte du joueur 2
							tabJoueur1[nbrCarteJoueur1 + 1] = tabJoueur2[pileJoueur2];
							// joueur 2 perds sa carte, toute la suite de carte descend de 1 pour ne pas avoir de carte vide dans le tableau
							for (int i = pileJoueur2 + 1; i <= nbrCarteJoueur2; i++) {
								tabJoueur2[i - 1] = tabJoueur2[i];
							}

							// on mets à jour le nombre de carte de chaque joueur
							nbrCarteJoueur1++;
							nbrCarteJoueur2--;

							/*           VICTOIRE APRES BATAILLE ? ON RECUPERE LES CARTES           */
							if (indiceTampon > 0) {
								for (int i = 0; i < indiceTampon; i++) {
									tabJoueur1[nbrCarteJoueur1 + 1] = tabTampon[i];
									tabTampon[i] = 0;
									nbrCarteJoueur1++;
								}
								indiceTampon = 0;
							}

							//printf("J1 gagne cette manche !\n");

						// Joueur 2 gagne carte joueur 1
						}
						else {
							affCarte(tabJoueur1[pileJoueur1], tabJoueur2[pileJoueur2], choixJeu, 1, nbrCarteJoueur1, nbrCarteJoueur2);
							// joueur 2 prends la carte du joueur 1
							tabJoueur2[nbrCarteJoueur2 + 1] = tabJoueur1[pileJoueur1];
							// joueur 1 perds sa carte, toute la suite de carte descend de 1 pour ne pas avoir de carte vide dans le tableau
							for (int i = pileJoueur1 + 1; i <= nbrCarteJoueur1; i++) {
								tabJoueur1[i - 1] = tabJoueur1[i];
							}

							// on mets à jour le nombre de carte de chaque joueur
							nbrCarteJoueur1--;
							nbrCarteJoueur2++;

							/*           VICTOIRE APRES BATAILLE ? ON RECUPERE LES CARTES           */
							if (indiceTampon > 0) {
								for (int i = 0; i < indiceTampon; i++) {
									tabJoueur2[nbrCarteJoueur2 + 1] = tabTampon[i];
									tabTampon[i] = 0;
									nbrCarteJoueur2++;
								}
								indiceTampon = 0;
							}

							//printf("J2 gagne cette manche !\n");

						}

					}


					// on avance dans la pile

					pileJoueur1++;
					pileJoueur2++;
					if (pileJoueur1 >= nbrCarteJoueur1) { pileJoueur1 = 0; }
					if (pileJoueur2 >= nbrCarteJoueur2) { pileJoueur2 = 0; }
					//printf("\nJ1 a %d cartes\nJ2 a %d cartes\n*****\n", nbrCarteJoueur1, nbrCarteJoueur2);
					if (choixAutomatique == 0) {
						Sleep(1);
					} else if (choixAutomatique == 1) {
						Sleep(200);
					} else {
						system("pause");
					}

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