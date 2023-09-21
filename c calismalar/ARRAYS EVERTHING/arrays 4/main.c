#include <stdio.h>
#include <stdlib.h>

int main()
{
       /*
    int fabrika[2][5];
    int i,j;
    for (i=0;i<2;i++)
    {
         for (j=0;j<5;j++)
         {
              printf("%d. fabrikanin %d. elamanin maasi: ",i+1,j+1); scanf("%d",&fabrika[i][j]);
               if(fabrika[i][j]<1250)
               {
                    fabrika[i][j]+=fabrika[i][j]*0.10;
               }
               else if (fabrika[i][j]>1250)
               {
                    fabrika[i][j]+=fabrika[i][j]*0.05;
               }
         }
    }
     printf("\n************************\n");
     printf("Maasi 1250 telinin altinda olanlara yuzde '10' zam yapilmistir..");
     printf("\nMaasi 1250 telinin ustunde olanlara yuzde '5' zam yapilmistir..");
    printf("\n************************\n");
    for (i=0;i<2;i++)
    {
         for (j=0;j<5;j++)
         {
              printf("%d. fabrikanin %d. elamanin maasi : %d TL \n",i+1,j+1,fabrika[i][j]);
         }
    }
    */

    int okul_vize[1][2][3],okul_final[1][2][3],i,j,k;
float average[1][2][3];
    for (i=0;i<1;i++)
    {
         for(j=0;j<2;j++)
         {
              for(k=0;k<3;k++)
              {
                    printf("%d. okuldaki %d. sinfintaki %d. ogrencinin vize sinavi: ",i+1,j+1,k+1);scanf("%d",&okul_vize[i][j][k]);
                    printf("%d. okuldaki %d. sinfintaki %d. ogrencinin final sinavi: ",i+1,j+1,k+1);scanf("%d",&okul_final[i][j][k]);
                    average[i][j][k]+=(okul_final[i][j][k]+okul_vize[i][j][k])/2;
                    printf("%d. okuldaki %d. sinfintaki %d. ogrencinin ortalamasi %.2f \n",i+1,j+1,k+1,average[i][j][k]);
              }
              printf("\n");
         }
         printf("\n");
    }

     for (i=0;i<2;i++)
    {
         for(j=0;j<3;j++)
         {
              for(k=0;k<4;k++)
              {
                    printf("%d. okuldaki %d. sinfintaki %d. ogrencinin vize sinav notu: %d \n",i+1,j+1,k+1,okul_vize[i][j][k]);
                    printf("%d. okuldaki %d. sinfintaki %d. ogrencinin final sinav notu: %d \n",i+1,j+1,k+1,okul_final[i][j][k]);


              }
              printf("\n");
         }
         printf("\n");
    }



    return 0;
}
