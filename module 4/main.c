#include <stdio.h>
#include <stdlib.h>

#include "menu2.h"
#include "donnees.h"
#include "action.h"


int main()
{
    table* pouls = LireFichier();
    afficherMenu2(pouls);
}
