#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int s1,s2,tp;
    s1=15;
    s2=10;
    tp=s1+s2;

    if (tp>=50)
{

    printf("iki sayinin toplami 50den buyuk veya esttir\n");
    printf("girilen iki sayinin toplami %d",tp);
    printf("nasil ya ");
}
    else
        printf("giridiginiz sayi 50den kucuk");


        int s1,s2,tp,s3;


        printf("bir sayi giriniz: ");
        scanf("%d",&s1);
        printf("bir sayi daha giriniz: ");
        scanf("%d",&s2);
tp=s1+s2;
        printf("girdginiz sayilarin toplami %d\n",tp);
        if (tp>30){
            printf("iki sayinin toplami 30dan buyuktur");
        }
        else {
            printf("bir sayi daha giriniz: ");
            scanf("%d",&s3);
         tp=s1+s2+s3;
            printf("\nen son girilen sayi ile toplam %d",tp);

        }

     */
float s1,s2,s3,ort;
char isim[10];
printf("\t\t\togrenci ortalama sistemi");
 getch();
 system("cls");
printf("ogrenci adi: ");
gets(isim);
system("cls");
printf("\t\t%s adli ogrencinin sinav bilgilerini giriniz\n",isim);
printf("ilk sinav sonucu: ");
scanf("%f",&s1);
printf("ikinci sinavini giriniz: ");
scanf("%f",&s2);
printf("son sinavini giriniz: ");
scanf("%f",&s3);
printf("press any key to see average..");
getch();
system("cls");
ort=(s1+s2+s3)/3;
printf("\t\t %s adli ogrencinin ortalamasi %f\n\n",isim,ort);
getch();
system("cls");
if (ort>=50){
    printf("\t\t\t\t\n\n\nnotlari girilen %s adli ogrenci sinifi gecti\n\n",isim);
}
else {
    printf("\t\t\t\t\n\n\nnotlari girilen %s adli ogrenci sinifi gecemedi\n\n",isim);
}
        return 0;
}
