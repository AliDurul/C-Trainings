#include <stdio.h>
#include <math.h>
#define PIE 3.142

int main()
{ /*

* int abs(x) // tam sayinin mutlak degerini hesaplar
* double fabs(x) //x gercel sayisinin mutlak degerini hesaplar
* double sqrt(x) // x sayisinin karekokunu hesaplar                                                  //formuller
* double pow(x,y) // x^y degerini hesaplar
     double log() //pozitif x sayisinin dogal logaritmasini hesaplar
     double log10() // pozitif x sayisinin 10 tabanindaki  logaritmasini hesaplar
     ************************************************************************************
    */
   char secim1[2];
  int secim,s1,x,y,r,bolunen,bolum,kalan;
  double s2;
  float alan,vol,rs,h;

   mainhome:
  system("cls");
 printf("\t------------------ matematik islemler-----------------\n\n");
 printf("\t1) karekok bulma\n");
 printf("\t2) mutlak deger bulma\n");
 printf("\t3) gercel sayinin mutlak degerini bulma\n");
 printf("\t4) Power of any given number\n");
 printf("\t5) kalani bulma\n");
 printf("\t6) dairenin alanini bulma\n");
  printf("\t7) silindir alanini bulma\n");
 scanf("%d",&secim);
     switch(secim)
     {    case1:
          case 1:
               {    system("cls");
                    printf("--------karekok bulma-----------\n\n");
                    printf(" bir deger giriniz: "); scanf("%d",&s1);
                    printf("%d sayisinin karekoku:%.2f\n",s1,sqrt(s1));
                    printf("tekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case1;
                    else if (*secim1=='M')
                         goto mainhome;

                    break;
               }
          case2:
          case 2:
               {
                    printf("-----------mutlak deger bulma----------------\n");
                    printf(" bir deger giriniz: "); scanf("%d",&s1);
                    printf("%d sayisinin mutlak degeri:%d",s1,abs(s1));
                   printf("\ntekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case2;
                    else if (*secim1=='M')
                         goto mainhome;
                    break;
               }
          case3:
          case 3:
               {
                    printf("---------------Gercel sayisinin mutlak deger bulma----------------------\n");
                    printf(" bir deger giriniz: "); scanf("%f",&s2);
                    printf("%f sayisinin mutlak degeri",s2);                                       //????
                    printf("\ntekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case3;
                    else if (*secim1=='M')
                         goto mainhome;
                    break;
               }
          case4:
          case 4:
               {
                    printf("------------------Power of numbers---------------\n");
                    printf(" bir taban deger giriniz: "); scanf("%d",&x);
                    printf(" bir ussu deger giriniz: "); scanf("%d",&y);
                    printf("%d^%d sayisinin degeri:%.1f",x,y,pow(x,y));
                   printf("\ntekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case4;
                    else if (*secim1=='M')
                         goto mainhome;
                    break;
               }
          case5:
          case 5:
               {
                    printf("----------------kalani bulma-------------------\n");
                    printf("bolunen: "); scanf("%d",&bolunen);
                    printf("bolum: "); scanf("%d",&bolum);
                    kalan=bolunen%bolum;
                    printf("%d",kalan);
                    printf("\ntekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case5;
                    else if (*secim1=='M')
                         goto mainhome;
                    break;
               }
          case6:
          case 6:
               {
                   printf("--------------dairenin alanini bulma-----------");
                    printf("dairenin yari capini giriniz\n--> ");
                    scanf("%d",&r);
                    alan=PIE*(r*r);
                    printf("dairenin alani: %.2f ",alan);
                    printf("\ntekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case6;
                    else if (*secim1=='M')
                         goto mainhome;
                    break;
               }
                     case7:
          case 7:
               {

                    printf("****\tThe calculation of volume of cylinder****\n");
                    printf("\nenter height of the cylinder: ");
                    scanf("%f",&h);
                    printf("\nenter radius of the cylinder: ");
                    scanf("%f",&rs);
                    vol = PIE * (rs *rs) *  h;
                    printf("\nThe volume of the cylinder whose information is entered : %f\n\n\n",vol);
                    printf("\ntekrar denemek icin  T\n");
                    printf("menuye donmek icin  M\n-->"); scanf("%s",&secim1);
                    if(*secim1=='T')
                         goto case7;
                    else if (*secim1=='M')
                         goto mainhome;
                    break;
               }

          default:
               {
               printf("gecersiz secenek...");
               Sleep(2000);
               goto mainhome;
               break;
               }
     }






      return 0;
}
