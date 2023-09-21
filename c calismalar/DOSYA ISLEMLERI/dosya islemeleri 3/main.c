#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main()
{
     char container[MAX];
     /*
    FILE *a1;
    a1=fopen("deneme1.txt","a");                //yeni dosya olusturma (a yerine herhangi bir sey kullanabilirsin)
    fclose(a1);
        */

        FILE *a2;
        a2=fopen("deneme2.txt","w");   //w yazar ama onceki verinin uzerine              // ayni anda dosyayi olusturdu ve icine bir seyler yazabilir duruma getirdi

          fprintf(a2,"adi: Ali \n");
          fprintf(a2,"soyadi: Durul\n");
          fprintf(a2,"Yasi: 19\n");

          putc('a',a2);
          putc('l',a2);
          putc('i',a2);

          fclose(a2);

         printf("\ncode blocksta bu metnin ustendeki kodlar dosyaya veri girme yontemi..\n\nsimdi yazdigin metinleri okuma kodlari yazili olucak code blocksta..\n\n");

         a2=fopen("deneme2.txt","r");
       /*
       do
       {
          container=getc(a2);
         printf("%c",container);
       } while(container!=EOF);
           */
                                     // veyea
          while(fgets(container,MAX,a2))
          {
          printf("%s",container);
          }
          fclose(a2);






    return 0;
}
