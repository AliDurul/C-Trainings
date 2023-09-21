#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
     strcmp(string1,string2)==0; // her iki karakter dizisinin esit oldugunu gosterir.
     strcmp(string1,string2)<0; // string1 , string 2den alfabetik olarak once oldugunu gosterir.
     strcmp(string1,string2)>0; // string1 , string 2den alfabetik olarak sonra oldugunu gosterir.
        */

     char capital[]="Ankara",answer[10];

    printf("The capital of Turkey? \n"); scanf("%s",answer);
    if (strcmp(capital,answer)==0)
    {
         printf("correct answer %s is the capital of the Turkey",answer);
    }
    else
    {
         printf("Wrong answer!!");
    }




    return 0;
}
