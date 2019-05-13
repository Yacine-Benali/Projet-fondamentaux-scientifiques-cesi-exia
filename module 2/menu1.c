#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
void afficherMenu1()
{
    // declarer les variables utilisees
    int premiereCondition;
    int choixDeLed;
    int sortie = 1;

    while (sortie > 0)
    {
        // afficher le menu
        system("cls");

        printf ("\t\t\t\t\t\t*************\n\t\t\t\t\t\t*HEXART CARE*\n\n");
        printf ("\t\t\t\t\t\t *TEAM BAA*\n");
        printf ("\t\t\t\t\t    *BENALI AMARA ACIMI*\n\t\t\t\t\t\t*************\n\n");
        printf ("\t\t\t\t\------------------------------------------------------  \n");
        printf ("\t\t\t\t\| De quelle facon voulez-vous que les LEDs s'allument:| \n");
        printf ("\t\t\t\t\| Entrez 1 pour allumer toutes les led:               | \n");
        printf ("\t\t\t\t\| Entrez 2 pour allumer 1 LED sur 2:                  | \n");
        printf ("\t\t\t\t\| Entrez 3 pour allumer 1 LED sur 3:                  | \n");
        printf ("\t\t\t\t\| Entrez 4 pour allumer 1 LED sur 4:                  | \n");
        printf ("\t\t\t\t\| Entrez 5 pour allumer 1 LED au choix:               | \n");
        printf ("\t\t\t\t\| Entrez 6 pour allumer en mode chenille:             | \n");
        printf ("\t\t\t\t\------------------------------------------------------ \n");
        printf("\t\t\t\t");
        scanf ("%d",&premiereCondition);

        //appelle de la fonction appropriée au dépend de choix
        switch (premiereCondition)
        {
             case 1 :
            {
                     tout_Leds();
                     break;
            }
            case 2:
            {
                une_Led_sur2();
                break;
            }
            case 3:
            {
                une_Led_sur3();
                break;
            }
             case 4:
            {
                une_Led_sur4();
                break;
            }
             case 5:
            {
                printf("\t\t\t\t Choisir le numero de la LED que vous souhaitez allumer: \n ");
                printf ("\t\t\t\t 1,2,3...10. \n ");
                printf("\t\t\t\t");
                scanf ("%d",&choixDeLed);
                if (choixDeLed>10)
                {
                    printf ("\t\t\t\t Erreur.\n ");
                    break;
                }else
                {
                    une_led_auChoix(choixDeLed);

                }
                break;

            }
            case 6:
            {
                chenille();
                break;
            }
        }

        printf ("\t\t\t\t\Tapez 0 pour Quitter, 1 pour Continuer :\n");
        printf("\t\t\t\t");
        scanf ("%d",&sortie);

    }
}
