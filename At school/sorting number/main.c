#include <stdio.h>
    /*void main()
    {
// m is amount of number which user input
//n is number of elements predefined by system
//number[] is line of number   }


        int i, temp, j, n, number[10];
        printf("Enter number of element that you want to put in order: ");
        scanf("%d", &n);
        Sleep(1000);
        system("cls");
        printf("loading");
        Sleep(1000);printf(".");Sleep(1000);printf(".");Sleep(1000);printf(".");
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
        for (i = 0; i < n; ++i){
         Sleep(1000);
            printf("%d\n", number[i]);
        }

}
        */
    void main()
    {
       int i, temp, j, n, number[10];

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
}
