#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*
 int i=1;
 while (i<10){
    printf("merhaba dunya\n");
 }

int i=1;
 while (i<10){
    printf("%d\n ",i);
    i++;
 }
 printf("program bitti");

int i=1;
 while (i<=10){
    printf("%dnin karesi= %d\n ",i,i*i);
    i++;
 }

int i=1;
 while (i<=10){
    printf("1*%d=%d\t ",i,i*1);
   printf("2*%d=%d\t\t",i,i*2);
   printf("3*%d=%d\t\t",i,i*3);
    printf("4*%d=%d\t\t",i,i*4);
    printf("5*%d=%d\t\t",i,i*5);
    printf("6*%d=%d\n\n",i,i*6);
    i++;
 }

int i=1;
printf("1den 10 kadar olan cift sayilar..\n\n");
while (i<=110)
{
    if (i%2==0)
    {
        printf("cift sayi: %d\n\t\t",i);
     }
     else      {
        printf("\t\ttek sayi: %d\n",i);
     }
          i++;
}
*/
int i,sayi,karesi,counterc,countert;
    while (i<=2){
    printf("\nBir sayi giriniz: ");  scanf("%d",&sayi);
    if (sayi%2==0){
        counterc++;// hata var burda..
        printf("%d sayisi bir cift rakamdir..\n",sayi);

    }
    else {
        printf("%d sayisi  bir tek rakamdir..\n",sayi);
        countert++;
    }
    printf("%dnin karakoku : %.1f",sayi,sqrt(sayi));
    karesi=sayi*sayi;
    printf("\n%dnin karesi: %d\n",sayi,karesi);
    i++;
    }
    printf("\ngirmis oldugunuz rakamlardan %d tanesi cift ve %d tek rakamlardir..",counterc,countert);
    return 0;
}
