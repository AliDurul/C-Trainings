#include <stdio.h>
#include <stdlib.h>
#define MAX 3000

int main()
{
     //variable declaration
     FILE *pFile;
    float temp;
    int index,stdId,timeH,timeM,line=0;
    char fname[MAX],Sname[MAX],container[MAX];

     printf("Welcome to Cavendish\n");
     printf("first name: \t");
     scanf(" %s",fname);
     printf("last name: \t");
     scanf(" %s",Sname);
     printf("template: \t");
     scanf(" %f",&temp);
     printf("student id (eg: 57248): \t");
     scanf(" %d",&stdId);
     printf("time in hours(max:17): \t");
     scanf(" %d",&timeH);
      printf("time in Minutes(max: 60): \t");
     scanf(" %d",&timeM);
     pFile= fopen("list.csv","a+");
     fprintf(pFile,"First Name,Last  Name,Temperature,Student Id,Time in\n");
     fprintf(pFile,"%s,%s,%.1f\n%d,%d:%d",fname,Sname,temp,stdId,timeH,timeM);
     fclose(pFile);

    return 0;
}
