#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int tailleDeFichier()
{
    int counter = 0 ;
    char c;

    // un pointeur vers le fichier
    FILE *fp = NULL;

    //ouvrire le fichier
    fp = fopen("Battements.csv", "r");

    // verfier si il a etait ouvrer sans erreur
    if(fp  == NULL)
    {
        fprintf(stderr, "Unable to open file.");
        exit(-1);
    }

    // test see the size of the file
    for (c = getc(fp); c != EOF; c = getc(fp))
    {
        if (c == '\n')
        {
            // Increment count if this character is newline
            counter = counter + 1;
        }
    }

    return counter;

}

table* LireFichier()
{

    // un pointeur vers le fichier
    FILE *fp = NULL;

    //ouvrire le fichier
    fp = fopen("Battements.csv", "r");

    // verfier si il a etait ouvrer sans erreur
    if(fp  == NULL)
    {
        fprintf(stderr, "Unable to open file.");
        exit(-1);
    }

    //recouvrire la taille de le fichier csv
    int taille = tailleDeFichier();
    // creat an array of structure of the appropriate size
    table *pouls;
    pouls = malloc(sizeof( table) * taille);



    // fill the aray with data from our file fp
    int inndex = 0;
    rewind(fp);
     while ( fscanf(fp, " %d %*c %d", &pouls[inndex].time, &pouls[inndex].pulse) == 2) {
        inndex++;
    }


    //
    return pouls;

}
