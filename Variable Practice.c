#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");


  int weight=55;
  printf("I am %d kilogram.", weight);

  float weight1= 55.8;
   printf("I am %f kilogram.", weight1);
   // %f kulland���m�zda noktadan sonra 6 basamak yazd�r�yor.
    float weight2= 55.8;
   printf("I am %.2f kilogram.", weight2);
   // %f ifadesinin yan�na noktadan sonra ka� basamak yazd�rmas�n� istedi�imizi bu �ekilde kodluyoruz.
   float weight3= 55.8;
   printf("I am %.8f kilogram.", weight3);
   // virg�lden sonra 8 basamak yazd�rmak istedi�imizde accuracynin azald���n� g�r�yoruz
   double weight4= 55.8;
   printf("I am %.8f kilogram.", weight4);
   // ayn� de�eri double ile yazd�rd���m�zda hassasiyet korundu ve girdi�imiz de�ere yak�n bir de�er yazd�rd�.




    char character = '�';
    printf("The first letter of my name %c \a", character);

    char character1[10] = "�rem Uzun";
    // kelimenin sonunda gizli bir /0 var bu nedenle bir karakter fazla say�yoruz

    printf("My name is %s ", character1);
    return 0;

 // int=tam say�
 //float= ondal�kl� say� (en fazla yedi basamak i�erebilir)
 //double= floattan daha hassas ve geni� de�er aral���nda bir de�er ifade etmek i�in kullan�l�r(daha fazla basamak)
 //char=karakter
}


