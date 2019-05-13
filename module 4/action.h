#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include "donnees.h"

void afficherCsv(table* );
void chercher(table* pouls , int time);
void trouverMin(table *pouls);
void trouverMax(table *pouls);
void moyenne(table *pouls,int borne_inf , int borne_sup);
void afficherLesLignes();



#endif // ACTION_H_INCLUDED
