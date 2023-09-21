#include <stdio.h>
#include <stdlib.h>

int main()
{         /*
    int a,b,temp;
     a=5;
     b=7;
     temp=a;
     a=b;
     b=temp;
    printf("a: %d \nb: %d",a,b);

    int array[]={45,78,98,65,40},i,j,temp;

    for (i=0;i<5;i++)
    {
         for (j=0; j<5;j++)
         {
              if (array[j]>array[j+1])
              {
                   temp=array[j];
                   array[j]=array[j+1];
                   array[j+1]=temp;
              }
         }
    }

    for (i=0;i<5;i++)
    {
         printf("%d\n",array[i]);
    }

    */
    int i,j,temp,n,array[50];
     printf("enter number of element: "); scanf("%d",&n);
     for (i=0;i<n;i++)
          {
          printf("%d. integer: ",i+1); scanf(" %d",&array[i]);
          }
     for (i=0;i<n;i++)
    {
         for (j=0; j<n;j++)
         {
              if (array[i]<array[j])
              {
                   temp=array[i];
                    array[i]=array[j];
                   array[j]=temp;
              }
         }
    }

    for (i=0;i<n;i++)
    {
         printf("%d\n",array[i]);
    }
                    
    return 0;  
}
