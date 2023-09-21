#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
    int s1;
   float tplm=0;
   puts("kac ogrenci girisi yapacaksiniz: "); scanf("%d",&s1);

   int ogr_notu[s1],i;
   for (i=0;i<s1;i++)
     {
    printf("%5d. ogrencinin notu -->",i+1); scanf("%d",&ogr_notu[i]);
     tplm+=ogr_notu[i];
     }

     printf("\n\n\t\tsinifin ortalamsi:%.2f ",tplm/s1);

/*        //ayri

        int i,n1,ogr_notu[10],aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
        float toplam=0;
          puts("ogrenci sayisi: "); scanf("%d",&n1);
        for (i=0;i<n1;i++)
        {
             printf("%d. ogrencinin notu: ",i+1); scanf("%d",&ogr_notu[i]);
              toplam=toplam+ogr_notu[i];
             if(ogr_notu[i]>=90 && ogr_notu[i]<=100)
               aanotu++;
             else if(ogr_notu[i]>=70 && ogr_notu[i]<=89)
               bbnotu++;
             else if (ogr_notu[i]>=50 && ogr_notu[i]<=69)
               ccnotu++;
             else if (ogr_notu[i]>=30 && ogr_notu[i]<=49)
               ddnotu++;
             else
               ffnotu++;
        }

          printf("AA alan ogrenci sayisi %d\n",aanotu);
          printf("BB alan ogrenci sayisi %d\n",bbnotu);
          printf("CC alan ogrenci sayisi %d\n",ccnotu);
          printf("DD alan ogrenci sayisi %d\n",ddnotu);
          printf("FF alan ogrenci sayisi %d\n",ffnotu);

          printf(" ortalamalari %.2f",toplam/n1);

     */
     int i,num_student,aagrade=0,bbgrade=0,ccgrade=0,ddgrade=0,ffgrade=0;

     printf("enter number of students\n-->"); scanf("%d",&num_student);

     int stu_test[num_student],stu_final[num_student],stu_ass[num_student];
     float avarege[num_student];

     for (i=0;i<num_student;i++)
     {         printf("\n\t\t***results of %d. student***\n\n",i+1) ;
          printf(" test: "); scanf("%d",&stu_test[i]);
          printf(" final: "); scanf("%d",&stu_final[i]);
          printf(" assigment: "); scanf("%d",&stu_ass[i]);

          avarege[i]=stu_ass[i] *0.2+stu_test[i] *0.2+stu_final[i]*0.6;

          printf("\n\n\t\t\t\tAVAREGE -->%.2f\n",avarege[i]);

          if(avarege[i]>=90 && avarege[i]<=100)
          {
               printf("\t\t\t\tThe grade is AA\n");
               aagrade++;
               }
          else if(avarege[i]>=70 && avarege[i]<=89)
               {
                    printf("\t\t\t\tThe grade is BB\n");
               bbgrade++;
               }
          else if(avarege[i]>=50 && avarege[i]<=69)
                {
                     printf("\t\t\t\tThe grade is CC\n");
               ccgrade++;
               }
          else if (avarege[i]>=30 && avarege[i]<=49)
               {
                    printf("\t\t\t\tThe grade is DD\n");
               ddgrade++;
               }
          else
               {
                    printf("\t\t\t\tThe grade is FF\n");
               ffgrade++;
               }
     }

          printf("\n\n\n\t\t%d number of student got AA\n",aagrade);
          printf("\t\t%d number of student got BB\n",bbgrade);
          printf("\t\t%d number of student got CC\n",ccgrade);
          printf("\t\t%d number of student got DD\n",ddgrade);
          printf("\t\t%d number of student got FF\n",ffgrade);

    return 0;
}
