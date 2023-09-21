#include <stdio.h>
#include <string.h>

int main()
{
    char name[]="Melek";
    char name1[]="Ayse";
    printf("1.%s ve 2.%s \n\n",name,name1);
    strcpy(name,name1);
    printf("1.%s ve 2.%s \n\n",name,name1);
    puts("\n\n**********************\n\n");
    char note[10];
    printf("Hi Mr Man %s",strcpy(note,"Naber dost"));

    return 0;
}
