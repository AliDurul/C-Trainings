#include <stdio.h>
#include <stdlib.h>

int main()
{

      int i, temp, j, n, number[10],s_number,found=0;

        printf("Enter number of element that you want to put in order: ");
        scanf("%d", &n);
         system("cls");
        printf("\nEnter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j])
                {
                    temp =  number[i];
                    number[i] = number[j];
                    number[j] = temp;
                }
            }
        }
        system("cls");
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
{
         	Sleep(1000);
            printf("%d\n", number[i]);
        	}

        	system ("cls");

        	printf("Which number you want to research: \n"); scanf("%d",&s_number);
        	for(i=0; i<n; i++)
          {
               if (s_number==number[i])
               {
                    found=1;
                    break;
               }
          }
          if (found)
               printf("\nthe number found which is in  index of %d. ",i);
          else
               printf("not found..\n");


    return 0;
}
