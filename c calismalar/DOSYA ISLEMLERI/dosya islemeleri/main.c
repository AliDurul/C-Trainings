#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[90];


    FILE * pFile;
    /*
    pFile = fopen("foreigner.txt","a");             //yazdirma islemi
    printf("please enter name\n");
    scanf("%s",name);
    fprintf(pFile,"%s\n",name);
    fclose(pFile);*/

    pFile = fopen("foreigner.txt","a+");           //okuma islemi
    char buffer[100];


    while(fgets(buffer,100,(FILE *)pFile))
    {
        fscanf(pFile,"%s",name);
        printf("%s\n",name);
    }


    fclose(pFile);


    printf("done!");
    return 0;
}
