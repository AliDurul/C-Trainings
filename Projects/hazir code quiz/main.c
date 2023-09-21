#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void help();

int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");

     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
    if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t************** GOOD LUCK ***************");
    printf("\n\n\n Press P to start the game!\n");
    printf("\n Press any other key to return to the main menu!");

if (toupper(getch())=='P')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\n SORU KOY ");
		printf("\n\n SIK KOY ");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			    getch();
			    break;
}
		else
		       {printf("\n\nWrong!!! The correct answer is C. ");
		           getch();
		       break;
}

        case 2:
		printf("\n\n\n  SORU KOY");
		printf("\n\n SIK KOY ");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B. ");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nSORU KOY");
		printf("\n\ SIK KOY");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nSORU KOY");
		printf("\n\nSIK KOY");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nSORU KOY");
        printf("\n\nSIK KOY");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nSORU KOY");
		printf("\n\nSIK KOY");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.");
		       getch();
		       break;}}
		       }







     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nSORU KOY");
		printf("\n\nSIK KOY");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.");getch();
		       break;}



		case 23:
		printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
		printf("\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
