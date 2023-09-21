#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    printf("Enter a name !\n"); gets(name);
    printf("%s",strlwr(name));   // BUYUK HARFLERI KUCUK HARFE CEVIRIR

                    printf("\n\n\n");
     char name1[10];
    printf("Enter a name !\n"); gets(name1);
    printf("%s",strupr(name1));
    return 0;
}
