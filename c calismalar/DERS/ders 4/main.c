#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ogrenciismi[10],sinifi[5];
    int ilksnv,ikincisnv,ucuncusnv,ortlm;
ortlm:ilksnv+ikincisnv+ucuncusnv/3;
    printf("\tsene sonu ogrenci bilgileri ve dersnotlari\n");
   printf("\t==============================================\n");
   printf("\togrenci ismi: ");
   scanf("%s",ogrenciismi);
   printf("\togrencinin sinifi: ");
   scanf("%s",sinifi);
   printf("**********sinav sonuclari**********\n");
   printf("ilk sinav sonucu: ");
   scanf("%d",&ilksnv);
   printf("ikinci sinav sonucu: ");
   scanf("%d",&ikincisnv);
   printf("ucuncu sinav sonucu: ");
   scanf("%d",&ucuncusnv);

   printf("ogrencinin ortalamasi: %d ",ortlm);






    return 0;
}
