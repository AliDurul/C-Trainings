/*
#include <stdio.h>
#include <stdlib.h>

int main()
{


    int Ncontact,i,j;

    printf("enter number of contacts: ");
    scanf("%d",&Ncontact);
    char contacts[Ncontact][25], temp[25];

    printf("Enter the contacts: \n");

    for(i=0; i <= Ncontact; i++)
        {
        gets(contacts[i]);
        }

    // We get each name of position i, one by one

    for(i=0; i< Ncontact - 1; i++)
        {
            for(j = i + 1; j < Ncontact; j++)
            {
                if(strcmp(contacts[i], contacts[j]) >0)
                {
                strcpy(temp, contacts[i]);
                strcpy(contacts[i], contacts[j]);
                strcpy(contacts[j], temp);
                }
            }
        }


    printf("\n\nThese can be sorted as:\n\n");

    // We display our sorted list after the comparison above is done
    for(i=1; i<=Ncontact; i++)
        {
        printf("%d -------- %s\n",i,contacts[i]);
        }

}
=====================================================

*/

//* This program would sort the input strings in
 //* an ascending order and would display the same

#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char str[25][25],temp[25];
   puts("Please enter how many number of names to be sorted in alphabetical order: ");
   scanf("%d",&count);

   puts("Enter Strings one by one: ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
    {
        for(j=i+1;j<=count;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
            }
        }
    }
   printf("\nOrder of Sorted Strings:\n");
   for(i=0;i<=count;i++)
      puts(str[i]);

   return 0;
}


