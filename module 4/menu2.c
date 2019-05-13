#include <stdio.h>
#include <stdlib.h>
#include "menu2.h"
void afficherMenu2(table* pouls)

{     int premierecondition;

      int deuxiemecondition;
      int borne_inf;
      int borne_sup;
      int sortie=1;
      while (sortie>0)
    {
        system("cls");
        printf ("\t\t\t\t\t\t*************\n\t\t\t\t\t\t*HEXART CARE*\n\n");
        printf ("\t\t\t\t\t\t *TEAM BAA*\n");
        printf ("\t\t\t\t\t    *BENALI AMARRA ACIMI*\n\t\t\t\t\t\t*************\n\n");


        printf ("\t\t\t***********************************************************************************\n");
            printf ("\t\t\t* Entrez 1 Afficher les donnees dans l ordre du fichier .csv:                     *\n");
            printf ("\t\t\t* Entrez 2 Afficher les donnees en ordre croissant:                               *\n");
            printf ("\t\t\t* Entrez 3 Afficher les donnees en ordre decroissant:                             *\n");
            printf ("\t\t\t* Entrez 4 Rechercher et afficher les donnees pour un temps particulier:          *\n");
            printf ("\t\t\t* Entrez 5 pour Afficher la moyenne de pouls dans une plage de temps donnees:     *\n");
            printf ("\t\t\t* Entrez 6 pour Afficher le nombre de lignes de données actuellement en memoire:  *\n");
            printf ("\t\t\t* Entrez 7 pour Rechercher et afficher les max/min de pouls :                     *\n");
        printf ("\t\t\t\***********************************************************************************\n");
        printf("\t\t\t");
        scanf ("%d",&premierecondition);


        switch (premierecondition)
        {
            case 1 :
                {
                    afficherCsv(pouls );
                    break;
                }
            case 2:
            {
                printf("\t\t\t\t Voulez vous afficher en fonction du temps ou selon le pouls?: \n");
                printf ("\t\t\t\t Tapez 1 pour afficher en fonction du temps: \n");
                printf ("\t\t\t\t Tapez 2 pour afficher selon le pouls: \n");
                printf("\t\t\t");
                scanf ("%d",&deuxiemecondition);
                        switch (deuxiemecondition)
                        {
                            case 1 :
                            {
                                trieCroissant(pouls,deuxiemecondition);
                                break;
                            }
                            case 2 :
                            {
                                trieCroissant(pouls,deuxiemecondition);
                                break;
                            }
                }
                    break;
                     }
                case 3:
                {
                        printf("\t\t\t\t Voulez vous afficher en fonction du temps ou selon le pouls?: \n");
                        printf ("\t\t\t\t Tapez 1 pour afficher en fonction du temps: \n");
                        printf ("\t\t\t\t Tapez 2 pour afficher selon le pouls: \n");
                        printf("\t\t\t");
                        scanf ("%d",&deuxiemecondition);
                        switch (deuxiemecondition)
                        {
                            case 1 :
                                {
                                    trieDecroissant(pouls,deuxiemecondition);
                                    break;
                                }
                            case 2 :
                                {
                                    trieDecroissant(pouls,deuxiemecondition);
                                    break;
                                }
                        }
                        break;
                }


            case 4 :
            {
                printf("\t\t\t\t quel est le temps que vous voulez voir son pouls en ms\n");
                printf("\t\t\t");
                scanf("%d",&deuxiemecondition);
                chercher(pouls,deuxiemecondition);
                break;

            }
            case 5:
            {
                 printf("\t\t\t\t entrez la borne inférieur en ms");
                 printf("\t\t\t");
                 scanf("%d",&borne_inf);
                 printf("\t\t\t\t entrez la borne supérieure en ms");
                 printf("\t\t\t");
                 scanf("%d",&borne_sup);
                moyenne(pouls,borne_inf,borne_sup);
                break;
            }

            case 6:
            {
                afficherLesLignes();
                break;
            }
             case 7:
            {
                    printf ("\t\t\t\t Tapez 1 pour Maximum, 2 pour Minimum: \n");
                    printf("\t\t\t");
                    scanf ("%d",&deuxiemecondition);
                    switch (deuxiemecondition)
                    {
                        case 1 :
                        {
                            trouverMax(pouls);
                            break;
                        }
                        case 2 :
                        {
                            trouverMin(pouls);
                            break;
                        }
                        default :
                            {
                                printf("\t\t\t\t choix invalide" );
                                break;
                            }

                    }

             break;
            }
            default :
            {
                printf("\t\t\t\t choix invalide" );
            }

        }

        printf ("\n \t\t\t\t Tapez 0 pour Quitter, 1 pour Continuer :\n");
        printf("\t\t\t\t");
        scanf ("%d",&sortie);

    }
}

