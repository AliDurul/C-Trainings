#include <stdio.h>
#include <string.h>

int main()
{

    char name[]="Ali durul";
    int length=strlen(name);
    //printf("%s \nThe name that is above consists of %d characters...  !\n",name,length);
    printf("%s \nThe name that is above consists of %d characters...  !\n",name,strlen(name));

    puts("\n\n****an other example*****\n\n");

    char name1[25];
    printf("enter a string: "); scanf("%s",name1);
    printf("%d characters...\n",strlen(name1));

    puts("\n\n****an other example*****\n\n");

    char city[]="Ankara Istanbul Eskisehir lusaka";

    for (int i=0; i<strlen(city);i++)
    {
     printf("%c",city[i]);
    }
   puts("\n");
    for (int j=strlen(city); j>=0; j--)
    {
         printf("%c",city[j]);
    }

      puts("\n\n****an other example*****\n\n");

      char u_name[10];
      usurname:
      printf("enter a user name: "); scanf("%s",u_name);
      if(strlen(u_name)<8)
      {
      printf("\nThe user name should be at least 8 characters..\n Try again..\n");
      getch();
      goto usurname;
      }
      else
     {
      printf("\n*******Registration Successful*******");

     }
     printf("\n\nThe user name entered is : %s",u_name);


    return 0;
}
