#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnees.h"

void afficherLesLignes()
{
    int taille = tailleDeFichier();
    printf("\t\t\t\t le nombre de lignes de données actuellement en memoire :%d",taille);
}

int compareTempsCroissant(const void *s1, const void *s2)
{
    /*
        fonction utiliser par la fonction qsort
        pour determiner l'ordre de trie

    */
    table *e1 = (table *) s1;
    table *e2 = (table *) s2;
    int Compare = ((e1->time) - (e2->time));
    if (Compare == 0)
    {   // même temps comparer selon les pouls
        Compare = (e1->pulse) - (e1->pulse);
        return Compare;
    }
    else
        return Compare;
}

int comparePoulsCroissant(const void *s1, const void *s2)
{
    /*
        fonction utiliser par la fonction qsort
        pour determiner l'ordre de trie

    */
    table *e1 = (table *) s1;
    table *e2 = (table *) s2;
    int Compare = ((e1->pulse) - (e2->pulse));
    if (Compare == 0)
    {   // meme pouls trié selon le temps
        Compare = (e1->time) - (e1->time);
        return Compare;
    }
    else
        return Compare;

}

int compareTempsDecroissant(const void *s1, const void *s2)
{
    /*
        fonction utiliser par la fonction qsort
        pour determiner l'ordre de trie
        c'est l'invers de compareTempsCroissant
    */
    table *e1 = (table *) s1;
    table *e2 = (table *) s2;
    int Compare = ((e2->time) - (e1->time));
    if (Compare == 0)
    {
        // meme temps  compare par poul
        Compare = (e2->pulse) - (e1->pulse);
        return Compare;
    }
    else
        return Compare;
}

int comparePoulsDecroissant(const void *s1, const void *s2)
{
    /*
        fonction utiliser par la fonction qsort
        pour determiner l'ordre de trie
        c'est l'invers de comparePoulsCroissant
    */
    table *e1 = (table *) s1;
    table *e2 = (table *) s2;
    int Compare = ((e2->pulse) - (e1->pulse));
    if (Compare == 0)
    {
        // meme pouls compare par temps
        Compare = (e1->time) - (e2->time);
        return Compare;
    }
    else
        return Compare;

}

void trieCroissant(table *pouls,int timePulseCompare)
{
    /*
        fair un tri croissant sur
        le tableau de strucutre
    */
    int taille = tailleDeFichier();

    // fair une copie de le tableau original
    table *sortedPulse = pouls;
    if(timePulseCompare == 1)
    {
            // trie selon le temps
            qsort(sortedPulse, taille, sizeof(table), compareTempsCroissant);
            /*
             qsort c'est une fonction predeclarer
             dans les bibliotheque de c elle prend 4 parametre

            */

    }else if(timePulseCompare == 2)
    {
            // trie selon le poul
            qsort(sortedPulse, taille, sizeof(table), comparePoulsCroissant);

    }

    // afficher le tableau trié
    for (int i = 0; i < taille; ++i)
        printf("\t\t\t\t temps: %d, poul: %d \n ",sortedPulse[i].time,sortedPulse[i].pulse);
}
void trieDecroissant(table *pouls,int timePulseCompare)
{
    /*
        fair un tri decroissant sur
        le tableau de strucutre
    */

         int taille = tailleDeFichier();
        // fair une copie de le tableau original
        table *sortedPulse = pouls;
        if(timePulseCompare == 1)
        {
            // trie selon le temps
            qsort(sortedPulse, taille, sizeof(table), compareTempsDecroissant);

        }else if(timePulseCompare == 2)
        {
            // trie selon le poul
            qsort(sortedPulse, taille, sizeof(table), comparePoulsDecroissant);
        }



    for (int i = 0; i < taille; ++i)
        printf("\t\t\t\t temps: %d, poul: %d \n ",sortedPulse[i].time,sortedPulse[i].pulse);
}


void afficherCsv(table *pouls)
{
    // récupérer la taille du tableau
  int taille = tailleDeFichier();

  // afficher le tableau de structure
  for(int i = 1; i < taille ; i++)
  {
      printf("\t\t\t\t temps: %d, poul: %d \n ",pouls[i].time,pouls[i].pulse);
  }
}

void chercher(table* pouls , int time)
{
    /*
        fonction pour trouver le pouls
         correspondant a un temps spécifie
    */
    int taille = tailleDeFichier();
    // rechrche sequentielle
    for(int i = 0 ; i < taille ; i++)
    {

        if(pouls[i].time == time)
        {
            printf("\t\t\t\t the pulse at that time is %d \n",pouls[i].pulse);

        }else
        {
             printf("\t\t\t\t not found");
        }

    }

}

void trouverMin(table *pouls)
{
    /*
        un fonction pour trouver
        le poul le plus petit
    */
    int taille = tailleDeFichier();
    int minPulse = pouls[0].pulse;
    int minPulseTime = 0;

    for(int i = 0 ; i < taille ; i++)
    {
        if(minPulse > pouls[i].pulse)
        {
            /*
             une valeur plus petite que la valeur précédent
             a etait trouver, mis a jour de la valeur la plus petite
             */
            minPulse = pouls[i].pulse;
            minPulseTime = pouls[i].time;
        }
    }
    //afficher le poul
    printf("\t\t\t\t la valeur de la pulsation la plus petite est: %d \n", minPulse);
    printf("\t\t\t\t dans le temp est: %d \n",minPulseTime);
}

void trouverMax(table *pouls)
{
    /*
    une valeur plus grande que la valeur précédent
    a etait trouver, mis a jour de la valeur la plus petite
    */
    int taille = tailleDeFichier();
    int maxPulse = pouls[0].pulse;
    int maxPulseTime = 0;
    for(int i = 0 ; i < taille ; i++)
    {
        if(maxPulse < pouls[i].pulse)
        {
            /* une valeur plus grand quel la
            valuer precedant a etait trouver
            mis a jour de la valeur la plus grand */
            maxPulse = pouls[i].pulse;
            maxPulseTime= pouls[i].time;
        }

    }
    printf("\t\t\t\t la valeur de la pulsation la plus grande est: %d \n", maxPulse);
    printf("\t\t\t\t dans le temp est: %d \n",maxPulseTime);
}

void moyenne(table *pouls,int borne_inf , int borne_sup)
{

    // trouver l'index de la borne inferieur
    int borne_inf_index = 0;
    while(borne_inf != pouls[borne_inf_index].time)
        {
            borne_inf_index++;
        }

    // trouver l'index de la borne superieur
    int borne_sup_index = 0;
    while(borne_sup != pouls[borne_sup_index].time)
    {
        borne_sup_index++;
    }


    // ajouter toutes les pouls entre borne inf et sup

    int resultat = 0;

    for(; borne_inf_index <= borne_sup_index++; borne_inf_index)
    {
        resultat += pouls[borne_inf_index].pulse;
    }
    // calculer la moyenne
    resultat = resultat / (borne_sup_index - borne_inf_index + 1);

    printf("\t\t\t\t la moyenne est : %d\n",resultat);
}


