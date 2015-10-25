#include <stdlib.h>
#include <stdio.h>

/*
MEMO :
	* Sleep sous windows, sleep pour UNIX ( gaffe à la casse ). Vérifier la doc
	* Sleep et sleep font parti de la librairie window.h
TODO :
	* Continuer les recherches pour empêcher cet état de clignottement.
	* Tester avec des consoles différentes
	* Tester sur des PC avec une faible configuration
NOTE :
	* Vider la console ne donne pas de résultat satisfaisant sous windows 7 ( Problème de console ? )
	* Eviter les animations, finallement c'est chiant d'attendre pour sortir du programme.
*/

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

void main() {

	// Fixe la taille console pour avoir un affichage correct
	system("mode con LINES=31 COLS=130");

	// initialisation variable
	int choix, ajoutCredit, retourScanf;
	int animation=0, credit=0, quitter=0, achatJeu=0;
	
	do {
		printf("*********************************************************************************************************************************\n");
		printf("*****                     /~\\          ******************************************************************************************\n");
		printf("*****                    |oo )         ******************************************************************************************\n");
		printf("*****                    _\\=/_         ******************************************************************************************\n");
		printf("*****    ___        #   /  _  \\  #     ******************************************************************************************\n");
		printf("*****   / ()\\        \\\\//|/.\\|\\\\//     ******************************************************************************************\n");
		printf("***** _|_____|_       \\/  \\_/  \\/      ****************************                        **************************************\n");
		printf("*****| | === | |         |\\ /|         ***************************                           ************************************\n");
		printf("***** |_|  O  |_|        \\_ _/         *************************    WELCOME AT GEEKSTATION     **********************************\n");
		printf("***** ||  O  ||          | | |         ***************************                           ************************************\n");
		printf("***** ||__*__||          | | |         ****************************                         *************************************\n");
		printf("*****|~ \\___/ ~|         []|[]         ******************************************************************************************\n");
		printf("*****/=\\ /=\\ /=\\         | | |         ******************************************************************************************\n");
		printf("*****[_]_[_]_[_]________/_]_[_\\________******************************************************************************************\n");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **     QUE SOUHAITES-TU FAIRE ?     **                                              \n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		printf("\t\t**************************************\t\t\t***********************************\n");
		printf("\t\t***                                ***\t\t\t***                             ***\n");
		printf("\t\t*** 0 : Le compte nous afficherons ***\t\t\t*** 2 : Acheter un jeu tu fera  ***\n");
		printf("\t\t***                                ***\t\t\t***                             ***\n");
		printf("\t\t**************************************\t\t\t***********************************\n");
		printf("\t\t***                                ***\t\t\t***                             ***\n");
		printf("\t\t*** 1 :  Ton compte tu creditera   ***\t\t\t*** 3 :        Quitter          ***\n");
		printf("\t\t***                                ***\t\t\t***                             ***\n");
		printf("\t\t**************************************\t\t\t***********************************\n");

		// Entrée utilisateur
		scanf_s("%d", &choix);

		// vide la console
		system("cls");
		switch (choix) {

			case 0 :
				// affichage
				printf("*********************************************************************************************************************************\n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **       SOLDE DE TON COMPTE        **                                              \n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **************************************                                              \n\n\n");
				printf("\t\t\t\t\t\t\ttu possede %d credits\n",credit);
				printf("*********************************************************************************************************************************\n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **          JEUX POSSEDES           **                                              \n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **************************************                                              \n\n\n");
				printf("\t\t\t\t\t\ttu possede %d Constructor ( mod Padre )\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", achatJeu);
				// pour éviter le retour trop rapide, attente action utilisateur
				system("pause");
				break;
			case 1 :
				printf("*********************************************************************************************************************************\n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **       CREDITES TON COMPTE        **                                              \n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **************************************                                              \n\n\n");
				printf("En ajoutant des CREDITS sur mon compte : \n\t * Je renonce a mon droit de retractation \n\t * A tout droit de reclamation dans le cas ou les dirigeants feraient faillite depuis un paraids fiscale.\n\t * Je jure sur mon honneur ne pas subir une quelconque menace pour effectuer cet achat \n\t * Je jure n'avoir aucun pied actuellement dans le beton \n\t * Je suis entierement d'accord avec le fait que cette societe utilise mon numero de carte de credit comme bon lui semble.\n\n\n\n\t Je souhaite donc ajouter ( en euro ), sans virgule et de preference avec plein de 0 ) : ");
				retourScanf = scanf_s("%d", &ajoutCredit);

				// vide la console
				system("cls");
				if (retourScanf == 1) {
					if (ajoutCredit > 0) {
						credit += ajoutCredit;
						printf("%d CREDITS ont bien ete ajoute a ton compte.\n",ajoutCredit);
						ajoutCredit = 0;
						system("pause");
					} else {
						printf("Tu tente de nous voler ? On viens d'embaucher un sicilien et on lui a file ton adresse et deux sac de beton.\n");
						quitter = 1;
						system("pause");
					}
				} else {
					printf("Erreur dans les donnees. Appuyez sur une touche poure venir au menu precedent.\n");
					system("pause");
				}

				break;
			case 2 :
				printf("*********************************************************************************************************************************\n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **       ACHETER DES JEUX           **                                              \n");
				printf("                                             **                                  **                                              \n");
				printf("                                             **************************************                                              \n\n\n");
				printf("\t\t**************************************\t\t\t***********************************\n");
				printf("\t\t***                                ***\t\t\t***                             ***\n");
				printf("\t\t*** 0 : Constructor ( mod Padre )  ***\t\t\t*** 1 : Tombe De Raideur        ***\n");
				printf("\t\t***                    150 credits ***\t\t\t***                OUT OF SALES ***\n");
				printf("\t\t**************************************\t\t\t***********************************\n");
				printf("\t\t***                                ***\t\t\t***                             ***\n");
				printf("\t\t*** 2 :  Starcracraft              ***\t\t\t*** 3 : League Of Badass        ***\n");
				printf("\t\t***                   OUT OF SALES ***\t\t\t***                OUT OF SALES ***\n");
				printf("\t\t**************************************\t\t\t***********************************\n");
				
				scanf_s("%d", &retourScanf);

				// vide la console
				system("cls");
				
				if (retourScanf == 0 && credit >= 150 ) {
					credit -= 150;
					achatJeu++;
					printf("Constructor (mod Padre) a bien ete ajoute a votre compte.\n");
					printf("150 credits ont ete debite de votre compte.\n");
					printf("Nous vous remercions d'acheter ce jeu 15X plus cher qu'il ne vaut vraiment. Bisous des iles Caimans.\n");
				} else {
					printf("Une erreur s'est produite pour une des raisons suivante : \n\t* Vous n'avez pas assez d'argent sur votre \n\t* Nous n'avons plus de stock ( recredite ton compte, cela augmente les chances qu'on recommande ) \n\t* Vous essayer de revendre un jeu.\n\tNous vous rappelons qu'acheter, c'est acheter, revendre c'est nous voler ! Cf CGu !\n");
				}


				// pour éviter le retour trop rapide, attente action utilisateur
				system("pause");
				break;
			case 3 :
				quitter = 1;
				break;

		}

	} while (quitter==0);

	// Logo marque de fin !
	dessine();
	system("pause");

}