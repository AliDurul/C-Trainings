#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main()
{
     int choice;
     char name[MAX],surname[MAX],container[MAX];
     menu:
     system("cls");
    printf("----------------SECTIONS------------\n");
    printf("\n1- delete all and record a name\n");
    printf("2-list  the names\n");
    printf("3-add a new names\n");
    printf("4-quit\n");
    scanf("%d",&choice);

    FILE *records;

    switch(choice)
    {
         case 1:
         {
          records=fopen("names.txt","w");
          printf("Enter full names: ");  scanf("%s",name);     //????? // gets from user input from keyboard //fgets gets from file that is created
          fprintf(records,"%s",name);
          fclose(records);
          goto menu;
          break;

         }
         case 2:
          {
               records=fopen("names.txt","r");
               while (fgets(container,MAX,records))
               {
                    printf("%s ",container);
               }
               fclose(records);
               Sleep(3000); goto menu;
               break;

          }
         case 3:
          {
               records=fopen("names.txt","a");
               printf("ENTER YOUR NAME: "); scanf("%s",name);
               printf("ENTER SURNAME: "); scanf("%s",surname);
               fprintf(records,"\n%s ",name);
               fprintf(records,"%s",surname);
               fclose(records);
               goto menu;
               break;

          }
         case 4:
          {
               exit(0);  break;
          }

         default:
          {
                    system("cls");
                    printf("invalid option..try again..");
                    Sleep(2000);
                    goto menu;
                    break;
          }



    }



    return 0;
}
