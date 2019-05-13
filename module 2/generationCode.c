#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

void tout_Leds()
{
    // créer un pointeur  de type fichier
    FILE* fichierParam = NULL;

    // ouvrir ou creer le fichier C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h
    fichierParam = fopen("C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h","w");

    // ecrire sur le fichier
    fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",fichierParam);

    fputs("#define TOUT_LESLEDS",fichierParam);

    fputc('\n',fichierParam);
    fputs("#endif",fichierParam);

    printf("\t\t\t\t Votre choix a ete enregistre\n");

    //fermer le ficheir
    fclose(fichierParam);
}

void une_Led_sur2()
{
    // créer un pointeur  de type fichier
    FILE* fichierParam= NULL;

    // ouvrire sinon creer le fichier
    fichierParam= fopen("C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h","w");

    // ecrire sur le fichier
    fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",fichierParam);

    fputs("#define UNE_LED_SUR2",fichierParam);

    fputc('\n',fichierParam);
    fputs("#endif",fichierParam);
    printf("\t\t\t\t Votre choix a ete enregistre\n");

    //fermer le ficheir
    fclose(fichierParam);
}

void une_Led_sur3()
{
    // créer un pointeur  de type fichier
    FILE* fichierParam= NULL;

    // ouvrire sinon creer le fichier
    fichierParam= fopen("C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h","w");

    // ecrire sur le fichier
    fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",fichierParam);

    fputs("#define UNE_LED_SUR3",fichierParam);

    fputc('\n',fichierParam);
    fputs("#endif",fichierParam);
    printf("\t\t\t\t Votre choix a ete enregistre\n");

    //fermer le ficheir
    fclose(fichierParam);
}

void une_Led_sur4()
{
    // créer un pointeur  de type fichier
    FILE* fichierParam= NULL;

    // ouvrire sinon creer le fichier
    fichierParam= fopen("C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h","w");

    // ecrire sur le fichier
    fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",fichierParam);
    fputs("#define UNE_LED_SUR4",fichierParam);
    fputc('\n',fichierParam);
    fputs("#endif",fichierParam);
    printf("\t\t\t\t Votre choix a ete enregistre\n");

    //fermer le ficheir
    fclose(fichierParam);
}


void une_led_auChoix(int choixDeLed)
{
    // créer un pointeur  de type fichier
    FILE* fichierParam= NULL;

    // ouvrir sinon creer le fichier
    fichierParam= fopen("C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h","w");

    fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",fichierParam);

    // ecrire sur le fichier  les données correspondantes au choix de l'utilisateur
    switch(choixDeLed)
    {
    case 1:
        {
            fputs("#define Led_CHOIX_1",fichierParam);
            break;
        }
    case 2:
        {
            fputs("#define LED_CHOIX_2",fichierParam);
             break;
        }
    case 3:
        {
            fputs("#define LED_CHOIX_3",fichierParam);
             break;
        }
    case 4:
        {
            fputs("#define LED_CHOIX_4",fichierParam);
             break;
        }
    case 5:
        {
            fputs("#define LED_CHOIX_5",fichierParam);
            break;
        }
    case 6:
        {
            fputs("#define LED_CHOIX_6",fichierParam);
             break;
        }
    case 7:
        {
            fputs("#define LED_CHOIX_7",fichierParam);
             break;
        }
        case 8:
        {
            fputs("#define LED_CHOIX_8",fichierParam);
             break;
        }
        case 9:
        {
            fputs("#define LED_CHOIX_9",fichierParam);
             break;
        }
        case 10:
        {
            fputs("#define LED_CHOIX_10",fichierParam);
             break;
        }
    }

    fputc('\n',fichierParam);
    fputs("#endif",fichierParam);
    fclose(fichierParam);
    printf("\t\t\t\t Votre choix a ete enregistre\n");


}

void chenille()
{
    // créer un pointeur  de type fichier
    FILE* fichierParam = NULL;

    // ouvrire sinon creer le fichier
    fichierParam = fopen("C:\\Users\\Yacine\\Desktop\\projet 1\\arduino\\coeur.c\\param.h","w");

    // ecrire sur le fichier
    fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",fichierParam);
    fputs("#define MODE_CHENILLE",fichierParam);
    fputc('\n',fichierParam);
    fputs("#endif",fichierParam);
    printf("\t\t\t\t Votre choix a ete enregistre\n");

    //fermer le fichier
    fclose(fichierParam);
}
