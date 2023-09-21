#include <stdio.h>
#include <string.h>

int main()
{
     char name[5][10];
     for (int i=0; i<5; i++)
     {
     gets(name[i]);
     printf("%s\n",strrev(name[i]));
     }
    return 0;
}
