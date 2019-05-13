#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct
{
    int time;
    int pulse;
}table;

table* LireFichier();
int tailleDeFichier();



#endif // DONNEES_H_INCLUDED
