#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main()
{
     char container[MAX];       // this is for reading
                     // creating file
   /*
     FILE *ali1;
     ali1=fopen("C:\\Users\\Ali\\Desktop\\CAVENDISH\\john.txt","a");
     //code
     fclose(ali1);

                      // reading file

     FILE *ali1;
     ali1=fopen("C:\\Users\\Ali\\Desktop\\CAVENDISH\\john.txt","r");
     printf("\t---------------------------------------------------------------");
     while(fgets(container,MAX,(FILE *)ali1))
     {
          printf("\n\t%s",container);
     }
      printf("\n\t---------------------------------------------------------------\n");
     fclose(ali1);

     */                                              
     FILE *try1;
     // creating and wrting
     try1=fopen("kelvin.txt","a+");
     printf("what is the time : \n-->");
     int time;
     scanf("%d",&time);
     fputs("bu bir deneme\n",try1);
     fprintf(try1,"time was %d\n",time); //fputs fonsiyonu ayni gorevi gorur  // tek fark %d seklinde tip vericileri kullanamiyorsun
     fclose(try1);
             printf("\nyazilablari okuma \n") ;
      try1=fopen("kelvin.txt","r");         // to read

      while(fgets(container,MAX,try1))
     {
          printf("%s",container);
     }
         fclose(try1);

    return 0;
}
