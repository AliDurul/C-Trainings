#include <stdio.h>
#include <stdlib.h>

int main()
{
    int su,kola,bilet,misir,toplam;



    printf("su adeti: ");
    scanf("%d",&su);
    printf("kola adeti: ");
    scanf("%d",&kola);
    printf("bilet adeti: ");
    scanf("%d",&bilet);
    printf("misir adeti: ");
    scanf("%d",&misir);
    toplam=su*5+kola*10+bilet*50+misir*15;
    printf("toplam tutar: %d ",toplam);

    return 0;
}
