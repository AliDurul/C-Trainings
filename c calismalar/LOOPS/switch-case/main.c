#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    int secim;
    menu:
    printf("\n1-5 arasinda bir sayi giriniz: "); scanf("%d",&secim);
    switch(secim)
    {
        case 1: printf("1e bastiniz"); break;
        case 2: printf("2ye bastiniz");break;
        case 3: printf("3ye bastiniz");break;
        case 4: printf("4ye bastiniz");break;
        case 5: printf("5ye bastiniz");break;
        default : printf("lutfen 1 ile 5 arasi bir deger girin\n");
          goto menu;
         break;
      }
      -----------------------------------------------------
    char sec;
        menu:
        printf("bir karakter giriniz: "); scanf("%c",&sec);

        switch(sec)
        {
        case 'a': printf("1e bastiniz"); break;
        case 'b': printf("2ye bastiniz");break;
        case 'c': printf("3ye bastiniz");break;
        default : printf("\nyanlis bir deger girdiniz\n"); break;
        }
      ------------------------------------------------
         int secim;
         menu:
         printf("\nAkrep burcu icin :1\n");

         printf("boga burcu icin :3\n");
         printf("yengec burcu icin :5\n");
         scanf("%d",&secim);

         switch(secim)
         {
        case 1:
        printf("burcu \n"); break;
        soru3:
        case 3:
        printf("boga en sevmedigim burcu \n"); scanf("%d,",&secim);
            if(secim==1)
            {
                printf("wrong ..\n try again.."); goto soru3;
            }
        break;
        case 5:
        printf("iste bu benim burcum,,kralllll\n"); break;
        default :
        printf("\nyanlis deger girdiniz..\a"); Sleep(3000); goto menu; break;
         }
 */       int secim,s1,s2;
            char secim1;
    menu:
    system("cls");
    printf("toplama: 1\n");
    printf("cikarma: 2\n");
    printf("carpma : 3\n");
    printf("bolme  : 4\n");
    printf("bir secim yapiniz: ");
    scanf("%d",&secim);

    switch(secim)
    {
        case 1:     printf("iki adet sayi giriniz: "); scanf("%d%d",&s1,&s2);
                        printf("iki sayinin toplamlari %d",s1+s2);
                        break;

        case 2:     printf("iki adet sayi giriniz: "); scanf("%d%d",&s1,&s2);
                        printf("iki sayinin farki %d",s1-s2);
                        break;

        case 3:     printf("iki adet sayi giriniz: "); scanf("%d%d",&s1,&s2);
                        printf("iki sayinin carpimi %d",s1*s2);
                        break;

        case 4:     printf("iki adet sayi giriniz: "); scanf("%d%d",&s1,&s2);
                        printf("iki sayinin bolumu %d",s1/s2);
                        break;

        default :    printf("\nhatali secim ..tekrar deneyin..");Sleep(1000);
                            goto menu;
    }
   Sleep(5000);
   goto menu;



}
