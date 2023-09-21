#include <stdio.h>
#include <stdlib.h>

int main()
{

    char note[]="HI ", note1[]="WORLD";
    strcat(note,note1);  // ikinci parametreyi birinci parametreye ekler ve birlikte calistirir.
     printf("%s!\n",note);
     printf("%s",note1);

     puts("\n");
     char name[10], note2[]="Welcome ";
     printf("Enter a name: "); scanf("%s",name);
     printf("%s",strcat(note2,name));

    return 0;
}
