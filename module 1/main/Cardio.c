#include "Cardio.h"
#include <Arduino.h>


int Pouls_Actuel()
{
  int valeurPrecedente = 0;
  long tempsPrecedent = 0;
  int valeurActuelle, valeurSeuil;
  long tempsDetection;

  valeurActuelle = analogRead(0);
  valeurSeuil = 650;

  if (valeurActuelle > valeurSeuil) 
  {  // on est dans la zone max
     
        Serial.println(valeurActuelle);
        
      
   }

int  Delais_Du_Programme()
{
  int Time = millis();
  Serial.println(Time);
}
