#include <stdio.h>
#include <stdlib.h>

int main()
{
        //MOD ALMA-->%
        //VE -->&&
        // VEYA-->||
/*int sayi;


        ---------------------
        sayi=8;
        if (sayi%2==0){

        printf("sayi cifttir!\n");
        }
        else{
        printf("sayi tektir..");
        }

        -----------------------------
        int x;
        printf("bir sayi giriniz: ");
        scanf("%d",&x);
        if (x%5==0)
        {
        printf("sayi 5 e tam bolunur..");
        }
        else
        {
        printf("sayi 5  e tam bolunmez..");

        }
        -------------------------------------
        int x;
        printf("bir sayi giriniz: ");
        scanf("%d",&x);

        if(x%3==0 && x%5==0)
        {
            printf("sayi 3 ve 5 e tam bolunur..");
        }
        else{
            printf("sayi 3 ve 5 e tam bolunmez..");
    -------------------------------------------------

    int x;
        printf("bir sayi giriniz: ");
        scanf("%d",&x);

        if(x%3==0 || x%5==0)
        {
            printf("sayi 3 veya 5 e tam bolunur..");
        }
        else{
            printf("sayi 3 veya 5 e tam bolunmez..");

        }

    int su;
    printf("suyun sicaklik degerinigiriniz ");
    scanf("%d",&su);
    if (su<=0)
    {
        printf("su buz halinde");
     }
    if (su>0 && su<100)
    {
        printf("su sivi halde");
    }
    if (su>=100)
    {
        printf("su buhar halinde");
    }
------------------------------------
    float v1,v2,f,ort,okulort;
    printf("ilk vize sinaviniz: ");
    scanf("%f",&v1);
    printf("iKINCI vize sinaviniz: ");
    scanf("%f",&v2);
    printf("final sinaviniz: ");
    scanf("%f",&f);
    printf("uni ortalamasi: ");
    scanf("%f",&okulort);

    ort= (v1+v2+f)/3;

 if (ort>=60)
    {
        printf("dersten gectiniz \n;)");
        printf("ortalamaniz %f",ort);
        if (okulort>3.50)
        {
            printf("tebrikler aq :D");
        }

    }
    else if (ort>49 )
        {
        printf("dersten bute kaldinz:(\n");
        printf("ortalamaniz %f",ort);
    if (okulort<=2.10)
    {
        printf("sanada cok ayip");
    }
    }
    else {
        printf("dersten kalndin");
        printf("ortalamaniz %f",ort);

    }
*/

    int v1,v2,f;
    float oklort,drsort;
        printf("vize 1");
        scanf("%d",v1);
        printf("vize 2");
        scanf("%d",v2);
        printf("final");
        scanf("%d",f);
        printf("üni ortalamasi");
        scanf("%f",oklort);
        drsort= (v1*3/10+v2*3/10+f*4/10);
        if (drsort>=90)
        {
            printf("harf notunuz AA\n ders ortalamasi %f",drsort);
        }
        else if (drsort>=85 && drsort<90)
        {
            printf("HARF NOTINUZ BA\n DERS ORTALAMSI %f",drsort);
        }
        else if (drsort>=80 && drsort<85)
        {
            printf("HARF NOTINUZ BA\n DERS ORTALAMSI %f",drsort);
        }
        else if (drsort>=75 && drsort<80)
        {
            printf("HARF NOTINUZ BA\n DERS ORTALAMSI %f",drsort);
        }
        else if (drsort>=70  &&  drsort<75)
        {
            printf("HARF NOTINUZ BA\n DERS ORTALAMSI %f",drsort);
            if (oklort<2.5){
                printf("dersi tekrar alman olur");
            }
        }
        else if (drsort>=5  &&  drsort<90)
        {
        printf("HARF NOTINUZ BA\n DERS ORTALAMSI %f",drsort);
        }

        //eksik kaldi sen tamamlarsin..
                                                                

return 0;
}
