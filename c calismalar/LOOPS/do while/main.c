#include <stdio.h>
#include <math.h>

int main()
{
    int sayi;
    do{
        printf("\ncift sayi girdiginiz takdirde sayi girmeye devam edeceksiniz =..");
        printf("\nbir sayi giriniz: "); scanf("%d",&sayi);
        printf("%d nin 2 kati %d",sayi,sayi*2);
    }while (sayi%2==0);
    return 0;
}
