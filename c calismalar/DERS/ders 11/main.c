#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
int sayac=0;
int i;
for(i=1;i<=10;i++)
{
    sayac=sayac+i;
}
printf("%d",sayac);
----------------------------

int i;
int faktor=1;
for(i=1;i<=7;i++)
{
    faktor=faktor*i;
}
printf("5 faktoriyel %d",faktor);
------------------------------------------
*/
     int i,number;
     int faktor=1;

     printf("enter a number..");
     scanf("%d",&number);
     for (i=1;i<=number;i++)
     {
     faktor=faktor*i;
     }
     printf("girmis oldugunuz sayinin faktoriyeli: %d",faktor);

     return 0;
}
