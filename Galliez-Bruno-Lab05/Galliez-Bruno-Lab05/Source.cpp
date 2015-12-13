#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
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

	system("pause");
}

void purge(void){
	int c;
	while ((c = fgetc(stdin)) != '\n' && c != EOF) {
	}
}
void main()

{

	char tabo[10];

scanf("%s",&&tabo);
printf("%s", tabo);
system("pause");

}
/*
void main() {


	// initialisation varibables
	int tabRand[99];
	int tab[99];
	int quitter = 0, changeValeur = 0, temp = 10001, tempIndice = -1, cpt = 0, choix = 0, valideChoix = 0;
	srand(time(NULL));

	// Taille console
	system("mode con LINES=55 COLS=130");
	// Titre
	SetConsoleTitle("Crazy World Production ( lab 05 )");

	do {

		// réinitialise en cas de boucle
		changeValeur = 0;
		quitter = 0;
		changeValeur = 0;
		temp = 10001;
		tempIndice = -1;
		cpt = 0;
		choix = 0;
		valideChoix = 0;

		// initialisation du tabRand
		for (int i = 0; i < 100; i++) {

			tabRand[i] = rand() % 10001;

		}

		// range le tableau par ordre croisssant
		do {

			temp = 10001;
			tempIndice = -1;

			for (int i = 0; i <= 99; i++) {

				if (tabRand[i] != -1 && tabRand[i] < temp) {
					temp = tabRand[i];
					tempIndice = i;
				}

			}

			if (temp != 10001) {
				tab[cpt] = temp;
				tabRand[tempIndice] = -1;
				cpt++;
			}


		} while (temp != 10001);

		printf("                                                 ******************************                                                  \n");
		printf("                                                 **                          **                                                  \n");
		printf("                                                 **         PATIENCE         **                                                  \n");
		printf("                                                 ** GENERATION DES TABLEAUX  **                                                  \n");
		printf("                                                 **                          **                                                  \n");
		printf("                                                 ******************************                                                  \n\n");
		Sleep(1500);
		system("cls");


		do {

			// saisie option utilisateur
			do {
				system("cls");
				printf("                                                 ******************************                                                  \n");
				printf("                                                 **                          **                                                  \n");
				printf("                                                 **         BIENVENUE        **                                                  \n");
				printf("                                                 **  CHOISISSEZ UNE OPTION   **                                                  \n");
				printf("                                                 **                          **                                                  \n");
				printf("                                                 ******************************                                                  \n\n");
				printf(" ***************** ********************* ********************** ********************* ********************* *********************\n");
				printf(" **      1      ** **        2        ** **         3        ** **        4        ** **       5         ** **        6        **\n");
				printf(" **  REGENERER  ** **    AFFICHAGE    ** **     AFFICHAGE    ** **    AFFICHAGE    ** **   AFFICHAGE     ** **     QUITTER     **\n");
				printf(" **             ** **    CROISSANT    ** **    DECROISSANT   ** **   GROS LOSANGE  ** **  PETIT LOSANGE  ** **                 **\n");
				printf(" ***************** ********************* ********************** ********************* ********************* *********************\n\n");
				scanf_s("%d", &choix);
				purge();

				if (choix > 0 && choix < 7) {
					valideChoix = 1;
				}

			} while (valideChoix == 0);


			switch (choix){
				case 1:
					changeValeur = 1;
					break;
				case 2 :
					system("cls");
					printf("Affichage des chiffres par ordre croissant :\n");
					for (int i = 0; i <= 99; i++) {
						printf("%d\n", tab[i]);
						// pour réguler l'affichage hors taille d'affichage
						if (i == 50) {
							system("pause");
						}
					}
					system("pause");
					break;
				case 3:
					system("cls");
					printf("Affichage des chiffres par ordre decroissant :\n");
					for (int i = 99; i >= 0; i--) {
						printf("%d\n", tab[i]);
						// pour réguler l'affichage hors taille d'affichage
						if (i == 50) {
							system("pause");
						}
					}
					system("pause");
					break;
				case 4:
					system("cls");
					printf("Affichage des chiffres sous le principe suivant :\n");
					printf("1er plus petit chiffre\n");
					printf("4e  plus petit chiffre\n");
					printf("5e  plus petit chiffre\n");
					printf("...\n");
					printf("3e  plus petit chiffre\n");
					printf("2e  plus petit chiffre\n\n");

					// pour réguler l'affichage hors taille d'affichage
					system("pause");

					for (int i = 99; i > -1;) {
						printf("%d\n", tab[i]);
						if (i % 2 == 0) {
							i--;
						}
						else {
							i -= 3;
						}
					}

					// pour réguler l'affichage hors taille d'affichage
					system("pause");

					for (int i = 1; i < 100;) {
						printf("%d\n", tab[i]);
						if (i % 2 == 0) {
							i += 3;
						}
						else {
							i++;
						}
					}
					system("pause");
					break;
				case 5:
					system("cls");
					printf("Affichage des chiffres sous le principe suivant :\n");
					printf("1er plus gros chiffre\n");
					printf("4e  plus gros chiffre\n");
					printf("5e  plus gros chiffre\n");
					printf("...\n");
					printf("3e  plus gros chiffre\n");
					printf("2e  plus gros chiffre\n\n");

					// pour réguler l'affichage hors taille d'affichage
					system("pause");

					for (int i = 0; i < 100;) {
						printf("%d\n", tab[i]);
						if (i == 0 || i % 2 == 0) {
							i += 3;
						}
						else {
							i++;
						}
					}

					// pour réguler l'affichage hors taille d'affichage
					system("pause");

					for (int i = 98; i > -1;) {
						printf("%d\n", tab[i]);
						if (i % 2 == 0) {
							i--;
						}
						else {
							i -= 3;
						}
					}
					system("pause");
					break;
				case 6 :
					quitter = 1;
					break;
			}

		} while (quitter == 0 && changeValeur == 0);


	} while ( changeValeur == 1);

	// signature
	dessine();

}
*/