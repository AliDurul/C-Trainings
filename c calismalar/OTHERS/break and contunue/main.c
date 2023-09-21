#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     int deger;
    printf("bir deger giriniz: ");scanf("%d",&deger);

    switch(deger)
     {                                                                                               //break
               case 1: printf("1 e bastiniz..");
               case 2: printf("2 e bastiniz..");
               case 3: printf("3 e bastiniz..");
               default: printf("yanlis deger girdiniz..");
     }

   =========

     for (int i=0;i<=10;i++)
     {
          if(i==5)
          {                                                                                                        //break
               break;
          }
          printf("%d\n",i);
     }
          printf("dongu sonlandi");

============

     int sayi,toplam;
     for(int i=0;i<=10;i++)
     {

          printf("bir sayi giriniz (bitirmek icin sifira basiniz: ");
          scanf("%d",&sayi);                                                                                            //break
          toplam+=sayi;

          if (sayi==0)
          {
               break;
          }
     }
          printf("toplamlari: %d",toplam);
  ==========


          int i;
      for ( i=1;i<=10;i++)
      {
           if(i==5)
           {
                continue;                                                                      //continue
           }
          printf("%d\n",i);
     }
 =========
*/
     for ( int i=1;i<=30;i++)
     {
          if (i%2==0)
          {
               continue;
          }
          printf("%d\n",i);
     }





    return 0;
}
