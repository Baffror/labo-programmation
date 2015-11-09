/* ******************************************** LE CALCUL IMC *******************************************/
#include <stdlib.h>
#include <stdio.h>



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
	char nom[50], prenom[25];
	int age,sexe;
	float taille,poids;
	
		// LE NOM
		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **         ENTRE VOTRE NOM          **                                              \n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		scanf_s(" %s[^\n]",nom);
		system("cls");
		printf("Votre nom a bien ete enregistre.");
		system("pause");

		// LE PRENOM
		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **       ENTREZ VOTRE PRENOM        **                                              \n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		scanf_s(" %s[^\n]",prenom);

		system("cls");
		printf("Votre prenom a bien ete enregistre.");
		system("pause");

		// L'AGE
		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **         ENTREZ VOTRE AGE         **                                              \n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		scanf_s("%d", &age);

		system("cls");
		printf("Votre age a bien ete enregistre.");
		system("pause");

		// LE SEXE, ALWAYS AND FOREVER
		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **        ENTREZ VOTRE SEXE         **                                              \n");
		printf("                                             **         (Au sens figuré)         **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		scanf_s("% s[^\n]", &sexe);

		system("cls");
		printf("Votre Sexe ( %s ans ) bien ete enregistre.",sexe);
		system("pause");

		// LA TAILLE ( ce n'est pas forcement ce qui compte )
		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **       ENTREZ VOTRE TAILLE        **                                              \n");
		printf("                                             **          ( Ex : 1.80 )           **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		scanf_s("%.2f", &taille);

		system("cls");
		printf("Votre taille de %f m a bien ete enregistre.",taille);
		system("pause");


		// LE POIDS
		system("cls");
		printf("*********************************************************************************************************************************\n");
		printf("                                             **                                  **                                              \n");
		printf("                                             **       ENTREZ VOTRE POIDS         **                                              \n");
		printf("                                             **          ( Ex : 69.0 )           **                                              \n");
		printf("                                             **************************************                                              \n\n\n");
		scanf_s("%.2f", &poids);

		system("cls");
		printf("Votre poids de %.2f m a bien ete enregistre.", taille);
		system("pause");

	// Logo marque de fin !
	dessine();
	system("pause");
	
}