#include "param.h"

/*
  on vas utilise les sortie pin de 2 a 11
*/

int  pinLed[10] = {2, 3, 4, 5 , 6, 7, 8, 9, 10, 11}; //déclaration et initialisation du tableau
//avec les valeurs des pins

void setup()
{
  // Boucle d'initialisation des sortie
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); 
  }
}

void loop(){
  allume();
}

void allume()
{
 
    #ifdef TOUT_LESLEDS
    Toutes_LED_Allumees();
    #endif
  
   

    #ifdef UNE_LED_SUR2
    Une_LED_Sur_Deux();
    #endif
    
  
    #ifdef UNE_LED_SUR3
    Une_LED_Sur_Trois();
    #endif

    #ifdef UNE_LED_SUR4
    Une_LED_Sur_Quatre();
    #endif

  
    #ifdef Led_CHOIX_1
    choix_leds_a_allumer_1();
    #endif

    #ifdef Led_CHOIX_2
    choix_leds_a_allumer_2();
    #endif

    #ifdef Led_CHOIX_3
    choix_leds_a_allumer_3();
    #endif

    #ifdef Led_CHOIX_4
    choix_leds_a_allumer_4();
    #endif

    #ifdef Led_CHOIX_5
    choix_leds_a_allumer_5();
    #endif

    #ifdef Led_CHOIX_6
    choix_leds_a_allumer_6();
    #endif

    #ifdef Led_CHOIX_7
    choix_leds_a_allumer_7();
    #endif

    #ifdef Led_CHOIX_8
    choix_leds_a_allumer_8();
    #endif

    #ifdef Led_CHOIX_9
    choix_leds_a_allumer_9();
    #endif

    #ifdef Led_CHOIX_10
    choix_leds_a_allumer_10();
    #endif

    #ifdef MODE_CHENILLE
    Chenille();
    #endif
    
    #ifdef MODE_CLIGNOTANT
    Clignotant();
    #endif
 }

int Toutes_LED_Allumees ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  } /*
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(100);*/
}
int Clignotant()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
  } 
  delay(100);
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], LOW);
  }
  delay(100);
}
int Chenille ()
{
  for(int i=0; i<10; i++)
  {
    digitalWrite(pinLed[i], HIGH);
    delay(100);
    digitalWrite(pinLed[i], LOW);    
  }
}


int Une_LED_Sur_Deux ()
{
  for(int i=0; i<10; i++)
  {
    if (i%2==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}

int Une_LED_Sur_Trois ()
{
  for(int i=0; i<10; i++)
  {
    if (i%3==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}


int choix_leds_a_allumer_1()
{
  digitalWrite(pinLed[0], HIGH);
    delay(100);
    digitalWrite(pinLed[0], LOW);
    delay(100);
}
int choix_leds_a_allumer_2()
{
  digitalWrite(pinLed[1], HIGH);
    delay(100);
    digitalWrite(pinLed[1], LOW);
    delay(100);
}
int choix_leds_a_allumer_3()
{
  digitalWrite(pinLed[2], HIGH);
    delay(100);
    digitalWrite(pinLed[2], LOW);
    delay(100);
}
int choix_leds_a_allumer_4()
{
  digitalWrite(pinLed[3], HIGH);
    delay(100);
    digitalWrite(pinLed[3], LOW);
    delay(100);
}
int choix_leds_a_allumer_5()
{
  digitalWrite(pinLed[4], HIGH);
    delay(100);
    digitalWrite(pinLed[4], LOW);
    delay(100);
}
int choix_leds_a_allumer_6()
{
  digitalWrite(pinLed[5], HIGH);
    delay(100);
    digitalWrite(pinLed[5], LOW);
    delay(100);
}
int choix_leds_a_allumer_7()
{
  digitalWrite(pinLed[6], HIGH);
    delay(100);
    digitalWrite(pinLed[6], LOW);
    delay(100);
}
int choix_leds_a_allumer_8()
{
  digitalWrite(pinLed[7], HIGH);
    delay(100);
    digitalWrite(pinLed[7], LOW);
    delay(100);      
}
int choix_leds_a_allumer_9()
{
  digitalWrite(pinLed[8], HIGH);
    delay(100);
    digitalWrite(pinLed[8], LOW);
    delay(100);
}
int choix_leds_a_allumer_10()
{
  digitalWrite(pinLed[9], HIGH);
    delay(100);
    digitalWrite(pinLed[9], LOW);
    delay(100);
}
int Une_LED_Sur_Quatre ()
{
  for(int i=0; i<10; i++)
  {
    if (i%4==0)
    {    
      digitalWrite(pinLed[i], HIGH);
    }
  }
}
