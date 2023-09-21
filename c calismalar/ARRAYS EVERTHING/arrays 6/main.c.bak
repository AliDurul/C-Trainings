#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ogrnci[2][2][10]; int vize[2][2], final [2][2]; float ort[2][2];
   for(int i=0; i<2; i++)
   {
         printf("%d. siniftaki ogrencilerin bilgileri..\n\n******************************************\n\n",i+1);
        for(int j=0; j<2; j++)
        {
             printf("%d. siniftaki %d. ogrencinin adini giriniz: ",i+1,j+1); scanf("%s",&ogrnci[i][j]);
             printf("%d. siniftaki %d. ogrencinin vizesini giriniz: ",i+1,j+1); scanf("%d",&vize[i][j]);
             printf("%d. siniftaki %d. ogrencinin final giriniz: ",i+1,j+1); scanf("%d",&final[i][j]);
             ort[i][j]=vize[i][j]*0.4+final[i][j]*0.6;

        }
   }


   for(int i=0; i<2; i++)
   {
        printf("%d. siniftaki ogrencilerin bilgileri..\n\n******************************************\n\n",i+1);
        for(int j=0; j<2; j++)
        {
             printf("%d. siniftaki %d. ogrencinin adi: %s \n",i+1,j+1,ogrnci[i][j]);
              printf("%d. siniftaki %d. ogrencinin vizesi: %d \n",i+1,j+1,vize[i][j]);
             printf("%d. siniftaki %d. ogrencinin finali: %d \n",i+1,j+1,final[i][j]);
             printf("%d. siniftaki %d. ogrencinin ortalamasi: %.2f\n",i+1,j+1,ort[i][j]);

        }
   }


    return 0;
}
