    /*Yhis is a simple quiz game .It has 20 questions and each correct question carry 5 marks.
    Wrong questions carry -3 marks.
    YOu start by entering  user name and then start answer questions.
    Each questions are multiple choice A,B,C and D.
    At the end the program prints out the results or mark.
    */


    /*
    the following are header files with .h extion
    the give use access to special reserved words from the c library
    */
    #include<stdio.h>
    #include<conio.h>
    #include<ctype.h>
    #include<stdlib.h>
    #include<string.h>


    /*  defining global variables.*/
    int countert,counterf,total;


    countert= 0; //assigning initial value to countert
    counterf= 0;  //assigning initial value to countert
    void help();// prototype of help function

    void main()
    {

    //local vairables
    float score;
    char choice[1]; // get 2 choocies
    char playername[20];

    //main menu option
    mainhome:
    //display options for main menu
    printf("\n\n\t*****************************************************************");
    printf("\n\t*\t\t\t\t\t\t\t\t*");
    printf("\n\t\n\t*\t\t*-*-*-*WELCOME TO C PROJECT*-*-*-*\t\t*");
    printf("\n\t\t====================================================");
    printf("\n\t*\t\t*-*-*-*-*-*QUIZ GAME*-*-*-*-*-*\t\t\t*\n");
    printf("\t\t====================================================");
    printf("\n\t*\t\t*-*-*-*DEVELOPED BY ALI DURUL*-*-*-*\t\t*");
    printf("\n\t\t====================================================");
    printf("\n\t*\t\t > To start the game touch S\t\t\t*");
    printf("\n\t\t\t > To go help touch H ");
    printf("\n\t*\t\t > To quit touch Q \t\t\t\t*\n");
    printf("\n\t*\t\t\t\t\t\t\t\t*");
    printf("\n\t*****************************************************************");
    printf("\n\t\t\tOption-->");
    scanf("%s",choice);//get user input//get user input


    if(*choice=='H' || *choice=='h')//compare if input is "h"
    {
    system("cls");//clear screen//clear screen
    help();
    getch();//get user input
    system("cls");//clear screen
    goto mainhome;//redirect to main menu
    }
    else if (*choice=='Q' || *choice=='q')//compare if input is "q"
    {
    system("cls");//clear screen
    printf("\nAre you sure that you want to Quit ?? \n");
    printf("\nEnter 'Q' for quit or Enter 'R' for return..!!\n");
    printf("\n-->");
    scanf("%s",choice);//get user input
    system("cls");//clear screen
    if (*choice=='q' || *choice=='Q')//compare if input is "q"
    {
        printf("\n\n\t\tTHANK YOU.. :)\n\n");
             exit(1);
    }
    else
    {
        goto mainhome;//redirect to main menu//redirect to main menu
    }

    }
    else if(*choice=='S'||*choice=='s')//compare if input is "q"
    {
    system("cls");//clear screen
    printf("\n\n\n\n\tEnter your name:");
    scanf("%s",&playername);//scan for username
    system("cls");//clear screen
    printf("\n \t*******************Welcome %s to C Program Quiz Game***************",playername);
    printf("\n\n\n\t>>Before starting quiz game,I recommend you to go to help section :)\n");
    printf("\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Good Luck~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n\n\t-->Touch A to start the game!\n");
    printf("\n\t-->Touch any other key to return to the main menu!");

    if (toupper(getch())=='A')//toupper converts value to upper case
    {
    system("cls");//clear screen
    printf("\n\t\t\t  !!!NOTES!!!");
    printf("\n\n\t\t--> 5 MARKS FOR CORRECT ANSWERS..\n\t\t-->-3 MARKS FOR INCOORECT ANSWERS..\n\n\t\t     !!!MAKE SURE MY GAMER!!!");
    getch();//get user input//get user input
    system("cls");//clear screen
    goto q1;//goes to question 1
    }
    else
    {
    system("cls");//clear screen
    goto mainhome;//redirect to main menu
    }
    q1:
    system("cls");//clear screen
    printf("\n\n\t\t1)Which one of the following is NOT a benefit of being a sole trader?");
    printf("\n\n\t\tA)Keep all profits\n\t\tB)Shared responsibility\n\t\tC)Own boss\n\t\tD)Pursue personal goals");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='B' || *choice=='b')//if the user enters A or a
    {
    printf("\n\n\t\t!!!CORRECT!!!");
    countert+=5; //adds a 5 to counter or results
    total=countert-counterf; //add
    Sleep(500);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total);
    Sleep(500);//pause  for 5 mili seconds

    printf("\n\n\t\t>>Press any key to go next question..");//printing >>>Press any key to go next question
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Shared responsibility");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Shared responsibility");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Shared responsibility");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q1;

    }
    q2:
    system("cls");//clear screen
    printf("\n\n\t\t2)Which of the following are the customers of a business most likely to be interested in?");
    printf("\n\n\t\tA)Product range\n\t\tB)Employee wages\n\t\tC)Job security\n\t\tD)Share dividends ");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='B' || *choice=='b')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)Product range");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)Product range");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)Product range");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q2;
    }
    q3:
    system("cls");//clear screen
    printf("\n\n\n\t\t3)Which of the following is an internal stakeholder of a business that trades as a partnership??");
    printf("\n\n\t\tA)A shareholder\n\t\tB)A customer\n\t\tC)A supplier\n\t\tD)An employee ");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='B' || *choice=='b')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)A customer");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)A customer");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)A customer");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q3;
    }
    q4:
    system("cls");//clear screen
    printf("\n\n\n\t\t4)What is the final stage of the product life cycle?");
    printf("\n\n\t\tA)Diversification\n\t\tB)Distribution\n\t\tC)Decline\n\t\tD)Delegation");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Distribution");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Distribution");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Distribution");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q4;
    }
    q5:
    system("cls");//clear screen
    printf("\n\n\n\t\t5)A business breaks even at the level of output where?");
    printf("\n\n\t\tA)fixed costs = total revenue\n\t\tB)total profits = total costs\n\t\tC)total revenue = total costs\n\t\tD)variable costs = fixed costs");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if(*choice=='c'|| *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)total revenue = total costs");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)total revenue = total costs");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)total revenue = total costs");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q5;
    }
    q6:
    system("cls");//clear screen
    printf("\n\n\t\t6)Which big cat can run the fastest?");
    printf("\n\n\t\tA)Lion\n\t\tB)Tiger\n\t\tC)Cheetah\n\t\tD)Leopard ");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if(*choice=='c'|| *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Cheetah");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Cheetah");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Cheetah");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q6;
    }
    q7:
    system("cls");//clear screen
    printf("\n\n\t\t7)Which animal can live to 70 years old?");
    printf("\n\n\t\tA)Orangutan\n\t\tB)Gorilla\n\t\tC)Rihino\n\t\tD)African Elephant");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)African Elephant");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)African Elephant");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)African Elephant");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");//printing Invalid option,please enter a valid key.
    getch();//get user input
    goto q7;
    }
    q8:
    system("cls");//clear screen
    printf("\n\n\t\t8)What is the top grossing film of all time? ?");
    printf("\n\n\t\tA)Titanic\n\t\tB)Avatar\n\t\tC)Avengers:endgame\n\t\tD)Jurassic Park");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Avengers:endgame");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Avengers:endgame");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Avengers:endgame");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q8;
    }
    q9:
    system("cls");//clear screen
    printf("\n\n\t\t9)Who plays Jack Sparrow in Pirates of the Caribbean?");
    printf("\n\n\t\tA)Orlanda Bloom\n\t\tB)Tom Hardy\n\t\tC)Christ Evans\n\t\tD)Johnny Depp");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='D' || *choice=='d')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is )D)Johnny Depp");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)Johnny Depp");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)Johnny Depp");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q9;
    }
    q10:
    system("cls");//clear screen
    printf("\n\n\t\t10)What is the longest river in the world?");
    printf("\n\n\t\tA)The Amazon\n\t\tB)The nile\n\t\tC)The Congo\n\t\tD)The Yangize");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)The nile");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)The nile");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)The nile");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q10;
    }
    q11:
    system("cls");//clear screen
    printf("\n\n\t\t11)The brain of any computer system is..?");
    printf("\n\n\t\tA)ALU\n\t\tB)CPU\n\t\tC)Memory\n\t\tD)Control Unit");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)CPU");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)CPU");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)CPU");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q11;
    }
    q12:
    system("cls");//clear screen
    printf("\n\n\t\t12)The binary system uses powers of?");
    printf("\n\n\t\tA)2\n\t\tB)5\n\t\tC)3\n\t\tD)10 ");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)2");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)2");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
    getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)2");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q12;
    }
    q13:
    system("cls");//clear screen
    printf("\n\n\t\t13)Which of the following retains the information it�s storing when the power to the system is turned off?");
    printf("\n\n\t\tA)DIMM\n\t\tB)CPU\n\t\tC)RAM\n\t\tD)ROM");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)ROM");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)ROM");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='B' || *choice=='b')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)ROM");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q13;
    }
    q14:
    system("cls");//clear screen
    printf("\n\n\t\t14)Any type of storage that is used for holding information between steps in its processing is ?");
    printf("\n\n\t\tA)CPU\n\t\tB)Primary storage\n\t\tC)Intermediate storage\n\t\tD)None of the above ");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Intermediate storage");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Intermediate storage");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Intermediate storage");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q14;
    }
    q15:
    system("cls");//clear screen
    printf("\n\n\t\t15)A network of computers and other devices that is confined to a relatively small space is called?");
    printf("\n\n\t\tA)Wide Area Network\n\t\tB)Local Area Network\n\t\tC)Global Network\n\t\tD)Peer-to-Peer Network");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Local Area Network");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Local Area Network");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Local Area Network");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");

    getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q15;
    }
    q16:
    system("cls");//clear screen
    printf("\n\n\t\t16)In what country is it considered a compliment to slurp loudly while eating soup?");
    printf("\n\n\t\tA)Japan\n\t\tB)Iceland\n\t\tC)Russia\n\t\tD)Colombia");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)Japan");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)Japan");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is A)Japan");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q16;
    }
    q17:
    system("cls");//clear screen
    printf("\n\n\t\t17)You are in Amman, Jordan, and you are invited to go to the souk. Where will you be going??");
    printf("\n\n\t\tA)Mosque\n\t\tB)Park\n\t\tC)Market\n\t\tD)Turkish bath");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Market");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Market");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)Market");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q17;
    }
    q18:
    system("cls");//clear screen
    printf("\n\n\t\t18)What's the local name for Victoria Falls?");
    printf("\n\n\t\tA)Moss\n\t\tB)Mosi o-Tunya\n\t\tC)Tunya\n\t\tD)O Tunya");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if (*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Mosi o-Tunya");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Mosi o-Tunya");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is B)Mosi o-Tunya");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q18;
    }
    q19:
    system("cls");//clear screen
    printf("\n\n\t\t19)How many ethnical groups are there in Zambia?");
    printf("\n\n\t\tA)70\n\t\tB)80\n\t\tC)75\n\t\tD)73");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)73");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)73");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is D)73");
    counterf+=3; total=countert-counterf; Sleep(500); printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Current Score: %d",total); Sleep(500);
    printf("\n\n\t\tPress any key to go next question..");
        getch();//get user input
    system("cls");//clear screen
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q19;
    }
    q20:
    system("cls");//clear screen
    printf("\n\n\t\t20)How long is the Zambesi River?");
    printf("\n\n\t\tA)2380 km\n\t\tB)2450 km\n\t\tC)2650 km\n\t\tD)2500 km");
    printf("\n\n\t\t-->");
    scanf("%s",choice);//get user input
    if(*choice=='c' || *choice=='C')
    {
    printf("\n\n\t\tCORRECT!!!");
    countert+=5;//add 5 to counter
    printf("\n\n\t\tPress any key to see your result.."); //printing Press any key to see your result..
        total=countert-counterf; //calculating the total marks
    getch();//get user input
    system("cls");//clear screen
    printf("\n\n\n\n\t\t\t\t  ------%s-------\n\n\n\t\t\t",playername);
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!Final Score %d!! \t   *",total);// prints out sum of the countert and counterf
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    if(total>=75 && total<=100)//if mark is more that 75 and is less than 100
    {
    /*
        print out CONGRATULATION message
        reveals the grade of the user
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=70 && total<=74)
    {
    /*
        print out CONGRATULATION message
        reveals the grade of the user
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=65 && total<=69)
    {
    /*
        print out CONGRATULATION message
        reveals the grade of the user
        grading  B+
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=60 && total<=64)
    {
    /*
        print out CONGRATULATION message
        reveals the grade of the user
        grading  B
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=55 && total<=59)
    {
    /*
        print out CONGRATULATION message
        reveals the grade of the user
        grading C+
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=50 && total<=54)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=45 && total<=49)
    {
    /*
        print out UNFORTUNATLEY message
        reveals the grade of the user
        grading  D+
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!UNFORTUNATLEY!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is D+ \t   *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    if(total<=44)
    {
    /*
        print out UNFORTUNATLEY message
        reveals the grade of the user
        grading  D
        prints out with a design
    */
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!UNFORTUNATLEY!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is D \t   *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    }
    else if(*choice=='a' || *choice=='A')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)2650 km");
    counterf+=3;
    printf("\n\n\t\tPress any key to see your result..");
        total=countert-counterf;
    getch();//get user input
    system("cls");//clear screen
    printf("\n\n\n\n\t\t\t\t  ------%s-------\n\n\n\t\t\t",playername);
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!Final Score %d!! \t   *",total);
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    if(total>=75 && total<=100)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=70 && total<=74)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=65 && total<=69)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=60 && total<=64)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=55 && total<=59)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=50 && total<=54)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=45 && total<=49)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!UNFORTUNATLEY!!!  \t   *");
    printf("\n\t\t\t*\t  Your grade is D+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    goto q1;
    }
    if(total<=44)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t !!!UNFORTUNATLEY!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is D \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    }
    else if(*choice=='b' || *choice=='B')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)2650 km");
    counterf+=3;
    printf("\n\n\t\tPress any key to see your result..");
        total=countert-counterf;
    getch();//get user input
    system("cls");//clear screen
    printf("\n\n\n\n\t\t\t\t  ------%s-------\n\n\n\t\t\t",playername);
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!Final Score %d!! \t   *",total);
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    if(total>=75 && total<=100)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=70 && total<=74)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=65 && total<=69)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=60 && total<=64)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=55 && total<=59)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=50 && total<=54)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=45 && total<=49)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!UNFORTUNATLEY!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is D+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    if(total<=44)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t !!!UNFORTUNATLEY!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is D \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    }
    else if(*choice=='d' || *choice=='D')
    {
    printf("\n\n\t\t!!!WRONG!!! The Correct answer is C)2650 km");
    counterf+=3;
    printf("\n\n\t\tPress any key to see your result..");
    total=countert-counterf;
    getch();//get user input
    system("cls");//clear screen

    printf("\n\n\n\n\t\t\t\t  ------%s-------\n\n\n\t\t\t",playername);
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!Final Score %d!! \t   *",total);
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    if(total>=75 && total<=100)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME.. :)\n\n\n\n\n\n");
    }
    if (total>=70 && total<=74)
    {
    printf("\n\n\n\n\t\t\t\t  ------%s-------\n\n\n\t\t\t",playername);
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is A \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=65 && total<=69)
    {
    printf("\n\n\n\n\t\t\t\t  ------%s-------\n\n\n\t\t\t",playername);
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B+\t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if (total>=60 && total<=64)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is B \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=55 && total<=59)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=50 && total<=54)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!CONGRATULATION!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is C \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t\tTHANK YOU FOR PLAYING MY QUIZ GAME :)\n\n\n\n");
    }
    if(total>=45 && total<=49)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!!UNFORTUNATLEY!!!\t   *");
    printf("\n\t\t\t*\t  Your grade is D+ \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    if(total<=44)
    {
    printf("\n\t\t\t************************************");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t*\t!!!UNFORTUNATLEY!!! \t   *");
    printf("\n\t\t\t*\t  Your grade is D \t   *");
    printf("\n\t\t\t*                                  *");
    printf("\n\t\t\t************************************");
    printf("\n\t\t*********************************************************");
    printf("\n\t\t*  >> You have been given the second chance by Mr Zulu..*");
    printf("\n\t\t*  >> !!! Take this chance well !!!\t\t\t*");
    printf("\n\t\t*  >> Enter any key to restart the test..\t\t*");
    printf("\n\t\t*********************************************************");
    getch();//get user input
    goto q1;
    }
    }
    else
    {
    system("cls");//clear screen
    printf("\n\n\t\t Invalid option,please enter a valid key..");
    getch();//get user input
    goto q20;
    }
    }
    else {
    system("cls");//clear screen
    printf("\n\n\n\n\n\t\t>>Invalid options..\n\t\t>>Press any other key to go main home..");
    getch();//get user input
    system("cls");//clear screen
    goto mainhome;//redirect to main menu
    }
    }


    //create a function nameed help
    //the data type is void

    void help()
    {
    system("cls");//clear screen

    //the follwing lines are printing out instructions
    printf("\t\t\t\t !!!! INSTRUCTIONS !!!!");
        printf("\n\t-------------------------------------------------------------------------");
        printf("\n\n\t>>THERE WILL BE 20 QUESTIONS FOR YOU TO ANSWER..");
        printf("\n\n\t>>THE ALL QUESTIONS ARE GOING TO BE IN THE FORM OF MULTIPLE CHOICE QUESTIONS..\n");
        printf("\n\t>>FIRST 5 QUESTIONS ARE ABOUT BUSINESS..\n");
        printf("\n\t>>5 TO 10 QUESTIONS ARE ABOUT GENERAL KNOWLEDGE..\n");
        printf("\n\t>>10 TO 15 QUESTIONS ARE ABOUT COMPUTER..\n");
        printf("\n\t>>15 TO 20 QUESTIONS ARE ABOUT CULTURE..\n");
        printf("\n\t>>EACH QUESTION CARRYS FIVE MARKS FOR CORRECT ANSWER..\n");
    printf("\n\t>>AND INCORRECT ANSWERS CARRY MINES THREE MARKS.. \n");
    printf("\n\t>>THE ONLY OPTIONS ARE FROM 'A' TO 'D' TO FIND CORRECT ANSWER ..\n");
    printf("\n\t>>THE QUESTION WILL ASKED TO YOU UNLESS YOU SELECT THE OPTIONS WHICH ARE STATED ABOVE..\n");
    printf("\n\t>>YOU WILL BE GIVEN THE SECOND CHANCE TO ATTEMPT THE TEST IF YOU GOT 'D+' OR 'D'.. ");
    printf("\n\n\t******************************ALL THE BEST******************************");
    }


