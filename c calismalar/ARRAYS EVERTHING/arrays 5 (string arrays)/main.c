#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
     char name[10]="Ali";
     char name1[]="Ali";
     char *name2="Ali";
     char name3[]={'a','l','i'};
    printf("%s!\n",name1);

    //

    char names[3][10]={"Ali","furkan","felix"};

    for(int i=0; i<3; i++)
    {
         printf("%20s\n",names[i]);
    }

    */
    //
    int n_sehir;
    printf("daha once kac sehirde bulundunuz?\n-->"); scanf("%d",&n_sehir);
    char sehirler[n_sehir][10];
    printf("Daha omce bulundugunuz sehirlerin isimlerini yaziniz.\n");
    for (int i=0; i<n_sehir; i++)
    {
         printf("%d.",i+1);  scanf("%s",sehirler[i]);
    }
     printf("Daha once bulundugunuz sehirler asagida listelenmistir..\n");
         for (int i=0; i<n_sehir; i++)
         {
              printf("%d. bulundugunuz sehir %s\n",i+1,sehirler[i]);
         }




    return 0;
}
