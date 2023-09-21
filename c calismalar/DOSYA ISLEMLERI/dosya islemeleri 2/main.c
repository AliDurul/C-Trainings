#include <stdio.h>
#include <stdlib.h>
char isim[20], okul[20],bolum[20];
char ogrencis,i;
int main()
{
     FILE *dosya;
     /*
     dosya=fopen("carpim tablosu.txt","w");
    int i,j;
    for (i=1;i<=10;i++)
    {
         for(j=1;j<=10;j++)
         {
              fprintf(dosya,"%d * %d= %d\n",i,j,i*j);
         }
         fputs("\n",dosya);
    }
fclose(dosya);
*/      dosya=fopen("ogrenci kayit.txt","a+");

          puts("enter number of students: "); gets(ogrencis);
          for(i=1; i <=ogrencis; i++)
         {
          printf("school: "); gets(okul);                                            //??????
          printf("names : "); gets(isim);
          printf("course: "); gets(bolum);
          fprintf(dosya,"%s  %s  %s\n",isim,okul,bolum);
         }


     printf("\n-----------------------------\n");
     fclose(dosya);
     printf("dosya okuma\n\n")        ;
     char container[1024];
     dosya=fopen("ogrenci kayit.txt","r");

      while(fgets(container,1000,dosya))
      {
           printf("%s",container);
      }
     fclose(dosya);

    return 0;
}

