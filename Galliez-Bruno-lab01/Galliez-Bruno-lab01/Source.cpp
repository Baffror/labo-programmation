/* ******************************************** LE CALCUL IMC *******************************************/
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

void purge(void)
{
	int c;
	while ((c = fgetc(stdin)) != '\n' && c != EOF) {
	}
}

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

void main() {

	char nom[50];
	char prenom[50];
	int age;
	char sexe;
	float taille,poids,imc;

	// nom
	printf("Veuillez entrer votre nom : ");
	scanf("%50[^\n]",nom);
	purge();

	//prenom
	printf("Veuillez entrer votre prenom : ");
	scanf("%50[^\n]",prenom);
	purge();

	//age
	printf("Veuillez entrer votre age ( en année ) : ");
	scanf("%d", &age);
	purge();

	//sexe
	printf("Veuillez entrer votre sexe ( au sens figure avec f ou m ) : ");
	scanf("%c", &sexe);
	purge();

	//Taille
	printf("Combien mesurez vous ? ( en m ex 1.80 ) : ");
	scanf("%f", &taille);
	purge();

	//Poids
	printf("Combien psez-vous ? ( en Kg ex 80.5 ) : ");
	scanf("%f", &poids);
	purge();

	printf("Calcul en cours, veuillez patientez...\n\n");
	imc = poids / (taille * taille);
	Sleep(1500);


	if ( imc < 16.5 ){
		printf("%s %s, votre Imc ( %.2f ) correspond à la famine\n",nom , prenom, imc);
	} else {

		if (imc > 16.5 && imc < 18.5 ) {
			printf("%s %s, votre Imc ( %.2f ) correspond à maigre\n",nom , prenom, imc);
		} else {

			if (imc > 18.5 && imc < 25) {
				printf("%s %s, votre Imc ( %.2f ) est normal\n",nom , prenom, imc);
			} else {

				if (imc > 25 && imc < 30) {
					printf("%s %s, votre Imc ( %.2f ) indique un surpoids\n",nom , prenom, imc);
				} else {

					if (imc > 25 && imc < 30) {
						printf("%s %s, votre Imc ( %.2f ) indique un surpoids\n",nom , prenom, imc);
					} else {

						if (imc > 30 && imc < 35) {
							printf("%s %s, votre Imc ( %.2f ) indique une obesite modere\n",nom , prenom, imc);
						} else {

							if (imc > 35 && imc < 40) {
								printf("%s %s, votre Imc ( %.2f ) indique une obesite severe\n",nom , prenom, imc);
							} else {
								printf("%s %s, votre Imc ( %.2f ) indique une obesite morbide\n",nom , prenom, imc);
							}

						}

					}

				}

			}

		}

	}
	system("pause");


}