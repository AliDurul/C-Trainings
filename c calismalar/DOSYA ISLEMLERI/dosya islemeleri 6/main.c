#include <stdio.h>
#include <stdlib.h>
#define MAX 250


int main()
{
     auto int num,index,line=1,row,editf;
     char fname [MAX], lname[MAX],buffer[ MAX ],_fname [MAX],_lname[MAX],stringCut[MAX],new_value[MAX];

     FILE * pFile;

     menu:
          system("cls");
          system("COLOR 7");
          printf("1. add a name\n");
          printf("2. edit and existing name\n");
          printf("3. list tthe names\n>>>");
          scanf(" %d",&num);
           system("cls");
          switch(num){
               case 1:
                    pFile = fopen("new.txt","a");
                    printf("First name:\t");
                    scanf(" %s",fname);
                    printf("First name:\t");
                    scanf(" %s",lname);
                    fprintf(pFile,"%s %s\n",fname,lname);

                    fclose(pFile);
                    system("cls");
                    system("COLOR A");

                    printf("added %s %s with success!!!\n",fname,lname);
                    Sleep(2000);
                    goto menu;
                    break;


               case 2:
                    pFile = fopen("new.txt","r");

                    while(!feof(pFile))
                    {

                         fscanf(pFile,"%s %s",_fname,_lname);
                         printf("%d. %s %s\n",line,_fname,_lname);
                         ++line;
                    }
                    fclose(pFile);

                    printf("choose employee id to edit:\n>>>");
                    scanf(" %d",&row);

                    pFile = fopen("new.txt","r");
                    FILE *editing;
                    editing=fopen("temp.txt","w");
                    line = 0;

                    while(!feof(pFile))
                    {
                         fscanf(pFile,"%s %s",_fname,_lname);
                         ++line;
                         strcpy(stringCut,"\0")  ;

                         if(!feof(pFile))
                         {
                          if(line==row)
                              {
                                   //printf("---------->>> %s %s<<<----------\n\n",_fname,_lname);
                                   printf("---------->>>%d. %s %s<<<----------\n\n",line,_fname,_lname);
                                   printf("1. edit first name \n2. edit last name\n>>>"); scanf(" %d",&editf);
                                   if(editf==1)
                                   {
                                        printf("enter a new name for %s\n>>>",_fname); scanf(" %s",new_value);
                                        strcpy(_fname,new_value);
                                        fprintf(editing,"%s %s\n",new_value,_lname);
                                        fprintf(editing,"%s",stringCut);
                                   }
                                   if(editf==2)
                                   {
                                        printf("enter a new surname for %s\n>>>",_lname); scanf(" %s",new_value);
                                        fprintf(editing,"%s %s\n",_fname,new_value);
                                        fprintf(editing,"%s",stringCut);
                                   }
                              }
                              else
                              {
                                  fprintf(editing,"%s %s\n",_fname,_lname);
                                  fprintf(editing,"%s",stringCut);
                              }
                         }
                    }
                    printf("successfuly updated %s",new_value);
                    fclose(pFile);
                    fclose(editing);
                    remove("new.txt");
                    rename("temp.txt","new.txt");
                    Sleep(3000);
                    goto menu;

                    break;

               case 3:
                    pFile=fopen("new.txt","r");
                    while(fgets(buffer,MAX,pFile))
                    {
                         printf("%s",buffer);
                    }
                    fclose(pFile);
                    break;

               default:
                    printf("Invalid input!!!\n");
                    //system("cls");
                    goto menu;
          }



    return 0;
}
