#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

/*	char kullaniciadi[15];
	printf("Kullanici adinizi giriniz:");
	scanf("%s",kullaniciadi);
	printf("kullanici adiniz: %s",kullaniciadi);

	char Ad[5],Soyad[5],Yas[2],Milliyeti[10],Dogumtarihi[10];

	printf("Adinizi Giriniz: ");
	scanf("%s",Ad);

	printf("Soyadinizi Giriniz: ");
	scanf("%s",Soyad);

	printf("Yasinizi Giriniz: ");
	scanf("%s",Yas);

	printf("Milliyetinizi Giriniz: ");
	scanf("%s",Milliyeti);

	printf("Dogum Tarihini Giriniz: ");
	scanf("%s",Dogumtarihi);

	printf("........ogrenci bilgileri........\n");
	printf("Ogrencinin adi: %s\nOgrencinin Soyadi: %s\nOgrencinin Yasi: %s\nOgrencinin Uyrugu: %s\nOgrencinin Dogum Tarihi: %s",Ad,Soyad,Yas,Milliyeti,Dogumtarihi);

*/

	char kitapad[20],yazari[20],sayfa[3],basimyili[4],basimevi[5],tur[10];

	printf("enter the name of the book: ");
	scanf("%s",kitapad);

	printf("enter the bookwriter`s name: ");
	scanf("%s",yazari);

	printf("enter the page of the book: ");
	scanf("%s",sayfa);

	printf("enter the year of printing of the book: ");
	scanf("%s",basimyili);

	printf("enter the print house of the book: ");
	scanf("%s",basimevi);

	printf("enter the type of book: ");
	scanf("%s",tur);

	printf("*******ABOUT BOOK*******\n");
	printf("Name of the book: %s\n",kitapad);
	printf("Bookwriter`s Name: %s\n",yazari);
	printf("Page number: %s\n",sayfa);
	printf("The printing year: %s\n",basimyili);
	printf("The print house: %s\n",basimevi);
	printf("Book type: %s",tur);

	return 0;
}
