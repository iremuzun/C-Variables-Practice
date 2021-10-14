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
   // %f kullandýðýmýzda noktadan sonra 6 basamak yazdýrýyor.
    float weight2= 55.8;
   printf("I am %.2f kilogram.", weight2);
   // %f ifadesinin yanýna noktadan sonra kaç basamak yazdýrmasýný istediðimizi bu þekilde kodluyoruz.
   float weight3= 55.8;
   printf("I am %.8f kilogram.", weight3);
   // virgülden sonra 8 basamak yazdýrmak istediðimizde accuracynin azaldýðýný görüyoruz
   double weight4= 55.8;
   printf("I am %.8f kilogram.", weight4);
   // ayný deðeri double ile yazdýrdýðýmýzda hassasiyet korundu ve girdiðimiz deðere yakýn bir deðer yazdýrdý.




    char character = 'Ý';
    printf("The first letter of my name %c \a", character);

    char character1[10] = "Ýrem Uzun";
    // kelimenin sonunda gizli bir /0 var bu nedenle bir karakter fazla sayýyoruz

    printf("My name is %s ", character1);
    return 0;

 // int=tam sayý
 //float= ondalýklý sayý (en fazla yedi basamak içerebilir)
 //double= floattan daha hassas ve geniþ deðer aralýðýnda bir deðer ifade etmek için kullanýlýr(daha fazla basamak)
 //char=karakter
}


