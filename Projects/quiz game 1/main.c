#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /* VARIABLES */

    /* POINTS */
   int points = 0;

    /* VARIABLES FOR USER HOME PAGE INPUT 1 AND 2 */
   int userinputforhome;

    /* VARIABLES FOR HARD MODE AFTER FORMS */
   int homeorquit;

    /* VARIABLE FOR USERNAME */
   char Username [20];
   char Surename [20];

    /* VARIABLES FOR EXAMPLE */
   int numE = 0;
   char userinputE [64];

   /* VARIABLES FOR QUESTION 1 */
   int num1 = 0;
   char userinput1 [64];

    /* VARIABLES FOR QUESTION 2 */
   int num2 = 0;
   char userinput2 [64];

   /* VARIABLES FOR QUESTION 3 */
   int num3 = 0;
   char userinput3 [64];

   /* VARIABLES FOR QUESTION 4 */
   int num4 = 0;
   char userinput4 [64];

   /* VARIABLES FOR QUESTION 5 */
   int num5 = 0;
   char userinput5 [64];

   /* VARIABLES FOR QUESTION 6 */
   int num6 = 0;
   char userinput6 [64];

   /* VARIABLES FOR QUESTION 7 */
   int num7 = 0;
   char userinput7 [64];

   /* VARIABLES FOR QUESTION 8 */
   int num8 = 0;
   char userinput8 [64];

   /* VARIABLES FOR QUESTION 9*/
   int num9 = 0;
   char userinput9 [64];

   /* VARIABLES FOR QUESTION 10 */
   int num10 = 0;
   char userinput10 [64];

   // VARIBALES FOR HARD MODE //

   int hardmodeswitch;

   /* END OF VARIABLES */

   /* HOME PAGE*/

 HOME:
 system("COLOR A");

 printf("\t   \t------------------------------------------------------------------------------------- \n");
 Sleep(100);
 printf("\t   \t------------------------------------------------------------------------------------- \n");
 Sleep(100);
 printf("\t   \t------------------------------------------------------------------------------------- \n");
 Sleep(100);
 printf("\t   \t----------              -------   --------   ---            ----              ------- \n");
 Sleep(100);
 printf("\t   \t--------   -----------   ------   --------   -------    ------------------   -------- \n");
 Sleep(100);
 printf("\t   \t-------   -------------   -----   --------   -------    ----------------    --------- \n");
 Sleep(100);
 printf("\t   \t-------   -------------   -----   --------   -------    ---------------    ---------- \n");
 Sleep(100);
 printf("\t   \t-------   -------------   -----   --------   -------    --------------    ----------- \n");
 Sleep(100);
 printf("\t   \t-------   -------------   -----   --------   -------    ------------    ------------- \n");
 Sleep(100);
 printf("\t   \t--------   -----------   ------   --------   -------    ----------     -------------- \n");
 Sleep(100);
 printf("\t   \t----------              --------            ----            ----              ------- \n");
 Sleep(100);
 printf("\t   \t----------------------   ------------------------------------------------------------ \n");
 Sleep(100);
 printf("\t   \t------------------------------------------------------------------------------------- \n");
 Sleep(100);
 printf("\t   \t------------------------------------------------------------------------------------- \n");
 printf("\t \t >>  Press '1' for easy mode  \n");
 printf("\t \t       - Basic Setup. \n");
 printf("\t \t       - Basic Questions. \n");
 printf("\t \t       - Need to choose correct answer to proceed.\n");
 printf("\t \t       - Choose between '1' , '2' , '3' or '4'. \n");
 printf("\t \t       - Points are not calculated.\n");
 printf("\t \t       - Always get 100 percent.\n \n");
 Sleep(500);
 printf("\t \t >>  Press '2' for hard mode \n");
 printf("\t \t       - Advanced setup. \n");
 printf("\t \t       - Basic Questions. \n");
 printf("\t \t       - Will be marked correct or incorrect. \n");
 printf("\t \t       - Choose between 'A' , 'B' , 'C' or 'D'. \n");
 printf("\t \t       - Points are calculated.\n");
 printf("\t \t       - Points vary depending on your answers.\n");
 printf("\t \t       - Forms will be printed to show results and perfomance.\n \n");
 Sleep(500);
 printf("\t \t >>  Press '3' to Exit ( Pressing any other key will make you exit too ). \n");
 printf("\t \t       - End the quiz.\n \n");
 Sleep(500);
 printf("\t \t >>  Please enter: "); scanf("%d",&userinputforhome); printf(" \n"); /* SCANS FOR USERINPUT, IF USER ENTERED 1 OR 2 */


 if(userinputforhome == 1){ /* IF USER ENTERED 1 THEN CODE WILL EXECUTE FROM HERE */
system("COLOR F");


   printf("\t \t     Easy mode selected, Please wait.");
   Sleep(1000);
   printf(".");
   Sleep(1000);
   printf(".");

   printf("Starting in 3 "); Sleep(1000); printf("2 "); Sleep(1000); printf("1 "); Sleep(1000);


    /* EXAMPLE PAGE */

    system("cls");
    printf(" \n");
    printf("\t \t \t    Selected mode: EASY \n");
    printf("\t \t \t    Here are a few tips and rules that can guide you through the quiz  \n \n ");
    printf("\t \t \t -------------------------------------------------------------------------------\n");
    printf("\t \t \t| >> You are Provided with Ten (10) multiple choice questions.                  |\n");
    printf("\t \t \t| >> Answer each question correctly to move on.                                 |\n");
    printf("\t \t \t| >> You may only proceed when the question has been answered correctly.        |\n");
    printf("\t \t \t| >> Type in '1' , '2' , '3' or '4' depending on the answer you choose.         |\n");
    printf("\t \t \t| >> Try this example question below.                                           |\n");
    printf("\t \t \t -------------------------------------------------------------------------------\n \n ");
    Sleep(2000);
    printf("\t \t \t \t \t \t     Example question \n \n");
    Sleep(2000);


    /* EXAMPLE QUESTION */

    printf("What year are we currently in?\n \n");
    printf("1. 2020 \n");
    printf("2. 2021   <-- Answer \n"); /* <--- ANSWER FOR EXAMPLE */
    printf("3. 2022 \n");
    printf("4. 2023 \n \n");

    printf(" ");
    fgets(userinput1,63,stdin);

    // LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION

        while (numE == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter '2' to continue: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinputE,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinputE) < 2 || strlen(userinputE) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinputE, "%d",&numE) != 1) {
            numE = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( numE < 2 || numE > 2){
            numE = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        printf("\t \t \t \t           Great job! Good luck with the quiz! \n \n");
        Sleep(2000);
        printf("\t \t \t \t           Quiz is now starting in 3");
        Sleep(1000);
        printf("  2");
        Sleep(1000);
        printf("  1");
        Sleep(2000);

        system("cls");

        printf(" \n");
        printf("\t \t \t    Selected mode: EASY \n");
        printf("\t \t \t    Here are a few tips and rules that can guide you through the quiz  \n \n ");
        printf("\t \t \t -------------------------------------------------------------------------------\n");
        printf("\t \t \t| >> You are Provided with Ten (10) multiple choice questions.                  |\n");
        printf("\t \t \t| >> Answer each question correctly to move on.                                 |\n");
        printf("\t \t \t| >> You may only proceed when the question has been answered correctly.        |\n");
        printf("\t \t \t| >> Type in '1' , '2' , '3' or '4' depending on the answer you choose.         |\n");
        printf("\t \t \t| >> Try this example question below.                                           |\n");
        printf("\t \t \t -------------------------------------------------------------------------------\n \n ");

        /* QUESTION 1 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 1 \n \n");

        Sleep(1000);

        printf("[Q1] How many continents are there in the world?\n \n");
        printf("1. 2 \n");
        printf("2. 5 \n");
        printf("3. 10 \n");
        printf("4. 7 \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num1 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput1,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput1) < 2 || strlen(userinput1) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput1, "%d",&num1) != 1) {
            num1 = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num1 < 4 || num1 > 4){
            num1 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 1 HAS ENDED */

        /* QUESTION 2 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 2 \n \n");

        Sleep(1000);

        printf("[Q2] How many Countries are there in the world? \n \n");
        printf("1. 100 \n");
        printf("2. 300 \n");
        printf("3. 195\n");
        printf("4. 150 \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num2 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput2,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput2) < 2 || strlen(userinput2) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput2, "%d",&num2) != 1) {
            num2 = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num2 < 3 || num2 > 3){
            num2 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 2 HAS ENDED */

        /* QUESTION 3 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 3 \n \n");

        Sleep(1000);

        printf("[Q3] Which continent is considered the largest continent in the world? \n \n");
        printf("1. Asia \n");
        printf("2. Australia \n");
        printf("3. Europe\n");
        printf("4. Africa \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num3 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput3,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput3) < 2 || strlen(userinput3) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput3, "%d",&num3) != 1) {
            num3 = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num3 < 1 || num3 > 1){
            num3 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 3 HAS ENDED */

        /* QUESTION 4 HAS STARTED */

                printf("\t \t \t \t \t \t     Question 4 \n \n");

        Sleep(1000);

        printf("[Q4] Initial amount of money needed to start a business is called? \n \n");
        printf("1. Money \n");
        printf("2. Monopoly \n");
        printf("3. Startup Capital\n");
        printf("4. investment \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num4 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput4,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput4) < 2 || strlen(userinput4) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput4, "%d",&num4) != 1) {
            num4 = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num4 < 3 || num4 > 3){
            num4 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 4 HAS ENDED */

        /* QUESTION 5 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 5 \n \n");

        Sleep(1000);

        printf("[Q5] What is the other word for profit and loss account? \n \n");
        printf("1. Suspense account \n");
        printf("2. Income statement \n");
        printf("3. Trial balance\n");
        printf("4. Bank statement \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num5 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput5,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput5) < 2 || strlen(userinput5) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput5, "%d",&num5) != 1) {
            num5 = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num5 < 2 || num5 > 2){
            num5 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 5 HAS ENDED */

        /* QUESTION 6 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 6 \n \n");

        Sleep(1000);

        printf("[Q6] What is the name of the tallest mountain in the world? \n \n");
        printf("1. Mt. k2 \n");
        printf("2. Mt. Makalu \n");
        printf("3. Mt. Kilimanjaro \n");
        printf("4. Mt. Everest \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num6 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput6,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput6) < 2 || strlen(userinput6) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput6, "%d",&num6) != 1) {
            num6= 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num6 < 4 || num6 > 4){
            num6 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTIION 6 HAS ENDED */

        /* QUESTION 7 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 7 \n \n");

        Sleep(1000);

        printf("[Q7] What is the name of the tallest building in the world? \n \n");
        printf("1. Burj al arab \n");
        printf("2. Shanghai Tower \n");
        printf("3. Burj Khalifa \n");
        printf("4. Jeddah Tower \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num7 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput7,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput7) < 2 || strlen(userinput7) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput7, "%d",&num7) != 1) {
            num7= 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num7 < 3 || num7 > 3){
            num7 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 7 HAS ENDED */

        /* QUESTION 8 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 8 \n \n");

        Sleep(1000);

        printf("[Q8] What is the capital city of Zambia? \n \n");
        printf("1. Lusaka \n");
        printf("2. Copperbelt \n");
        printf("3. Muchinga \n");
        printf("4. Luapula \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num8 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput8,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput8) < 2 || strlen(userinput8) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput8, "%d",&num8) != 1) {
            num8= 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num8 < 1 || num8 > 1){
            num8 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 8 HAS ENDED */

        /* QUESTION 9 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 9 \n \n");

        Sleep(1000);

        printf("[Q9] How many provinces are there in zambia? \n \n");
        printf("1. 5 \n");
        printf("2. 10 \n");
        printf("3. 7 \n");
        printf("4. 11 \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num9 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput9,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput9) < 2 || strlen(userinput9) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput9, "%d",&num9) != 1) {
            num9= 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num9 < 2 || num9 > 2){
            num9 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 9 HAS ENDED */

        /* QUSTION 10 HAS STARTED */

         printf("\t \t \t \t \t \t     Question 10 \n \n");

        Sleep(1000);

        printf("[Q10] How many countries are there in africa?\n \n");
        printf("1. 50 \n");
        printf("2. 200 \n");
        printf("3. 54 \n");
        printf("4. 100 \n \n");


    /* LOOPS TILL THE CORRECT ANSWER HAS BEEN INPUTTED FOR THE EXAMPLE QUESTION */

        while (num10 == 0){ /* LOOPS TILL THE CORRECT CONDITION HAS BEEN MET */
        printf("Please enter answer: "); /* KEEPS LOOPING AND PRINTING THIS QUESTION TILL THE CORRECT CONDITION HAS BEEM MET */
        fgets(userinput10,63, stdin); /* SCANNING FOR USER INPUT */

        if( strlen(userinput10) < 2 || strlen(userinput10) > 2){
            printf("Incorrect answer! Please try again. \n \n");
            continue;
        }

        if ( sscanf(userinput10, "%d",&num10) != 1) {
            num10 = 0 ;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        if ( num10 < 3 || num10 > 3){
            num10 = 0;
            printf("Incorrect answer! Please try again.  \n \n");
            continue;
        }

        printf("Correct answer! You may proceed. \n \n \n");

        }

        /* QUESTION 10 HAS ENDED */

        printf("\t \t \t \t \t \t     You have answered all questions. \n \n ");
        Sleep(2000);

        printf("\t \t \t -------------------------------------------------------------------------------\n");
        printf("\t \t \t -------------------------------------------------------------------------------\n");
        printf("\t \t \t -----------------------------CONGRATULATIONS-----------------------------------\n");
        printf("\t \t \t -----------------------------------YOU-----------------------------------------\n");
        printf("\t \t \t ----------------------------------PASSED---------------------------------------\n");
        printf("\t \t \t -------------------------------------------------------------------------------\n");
        printf("\t \t \t -------------------------------------------------------------------------------\n");

        Sleep(5000);

        system("cls");

        goto HOME;

 }

 // HARD MODE //


 else if (userinputforhome == 2){
 system("COLOR C");
/* put here */

    printf("\t \t     Hard mode selected, Please wait.");
   Sleep(1000);
   printf(".");
   Sleep(1000);
   printf(".");

   printf("Starting in 3 "); Sleep(1000); printf("2 "); Sleep(1000); printf("1 "); Sleep(1000);

   /* PAGE FOR ENTERING A USERNAME */

     system("cls"); /* CLEARS THE PAGE */
   Sleep(1000);
   printf("Before you start the quiz, Please provide us with some details. \n \n ");
   Sleep(1000);
   printf("Please type in your first name: ");
   scanf ("%s",&Username);
   printf(" \n");
   printf(" please type in your Surename: ");
   scanf("%s", &Surename);
   printf(" \n \n");


    /* RECEIVING DATA */

    printf("\t \t \t \t \t  Collecting Data, Please wait" );
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(". \n \n \n \n ");
    Sleep(1000);





    /* EXAMPLE PAGE */
 system("COLOR F");
    system("cls");
    printf(" \n");
    printf("\t \t \t    Selected mode: HARD \n");
    printf("\t \t \t    Here are a few tips and rules that can guide you through the quiz  \n \n ");
    printf("\t \t \t -------------------------------------------------------------------------------\n");
    printf("\t \t \t| >> You are Provided with Ten (10) multiple choice questions.                  |\n");
    printf("\t \t \t| >> Each question is worth 10 points.                                          |\n");
    printf("\t \t \t| >> Marks will be shown after all the questions have been answered.            |\n");
    printf("\t \t \t| >> Type in 'A' , 'B' , 'C' or 'D' depending on the answer you choose.         |\n");
    printf("\t \t \t| >> Try this example question below.                                           |\n");
    printf("\t \t \t -------------------------------------------------------------------------------\n \n ");




    printf("\t \t \t \t \t \t     Example question \n \n");



    /* EXAMPLE QUESTION */

    printf("What year are we currently in?\n \n");
    printf("A. 2020 \n");
    printf("B. 2021 \n"); /* <--- ANSWER FOR EXAMPLE */
    printf("C. 2022 \n");
    printf("D. 2023 \n \n");
    printf("Please enter 'B' or 'b' to continue \n \n");

    scanf("%s",&hardmodeswitch);

    switch(hardmodeswitch){

case 'B':
    printf("Correct answer, You will now me directed to the quiz! \n \n");
    Sleep(2500);
    system("cls");
    break;
case 'b':
    printf("Correct answer, You will now be directed to the quiz!\n \n ");
    Sleep(2500);
    system("cls");
    break;
default :
    printf("Incorrect answer, You are not eligible to take the quiz! \n \n");
    Sleep(3000);
    system("cls");
    goto HOME;
    break;
    }

       printf(" \n");
       printf("\t \t \t    Selected mode: HARD \n");
       printf("\t \t \t    Here are a few tips and rules that can guide you through the quiz  \n \n ");
       printf("\t \t \t -------------------------------------------------------------------------------\n");
       Sleep(100);
       printf("\t \t \t| >> You are Provided with Ten (10) multiple choice questions.                  |\n");
       Sleep(100);
       printf("\t \t \t| >> Each question is worth 10 points.                                          |\n");
       Sleep(100);
       printf("\t \t \t| >> Marks will be shown after all the questions have been answered.            |\n");
       Sleep(100);
       printf("\t \t \t| >> Type in 'A' , 'B' , 'C' or 'D' depending on the answer you choose.         |\n");
       Sleep(100);
       printf("\t \t \t| >> Try this example question below.                                           |\n");
       Sleep(100);
       printf("\t \t \t -------------------------------------------------------------------------------\n \n ");

       Sleep(1000);

        printf("\t \t \t \t \t \t     Question 1 \n \n");

        printf("[Q1] How many continents are there in the world? \n \n");
        printf("A. 2 \n");
        printf("B. 5 \n");
        printf("C. 10 \n");
        printf("D. 7 \n \n");

        printf("Your answer: ");scanf("%s",&hardmodeswitch);

switch(hardmodeswitch){

case 'D':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'd':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }
        /* QUESTION 1 HAS ENDED */

        /* QUESTION 2 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 2 \n \n");

        Sleep(1000);

        printf("[Q2] How many Countries are there in the world? \n \n");
        printf("A. 100 \n");
        printf("B. 300 \n");
        printf("C. 195\n");
        printf("D. 150 \n \n");

        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'C':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'c':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 2 HAS ENDED */

        /* QUESTION 3 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 3 \n \n");

        Sleep(1000);

        printf("[Q3] Which continent is considered the largest continent in the world? \n \n");
        printf("A. Asia \n");
        printf("B. Australia \n");
        printf("C. Europe\n");
        printf("D. Africa \n \n");

        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'A':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'a':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 3 HAS ENDED */

        /* QUESTION 4 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 4 \n \n");

        Sleep(1000);

        printf("[Q4] Initial amount of money needed to start a business is called? \n \n");
        printf("A. Money \n");
        printf("B. Monopoly \n");
        printf("C. Startup Capital\n");
        printf("D. investment \n \n");

        printf("Your answer: ");scanf("%s",&hardmodeswitch);

switch(hardmodeswitch){

case 'C':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'c':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 4 HAS ENDED */

        /* QUESTION 5 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 5 \n \n");

        Sleep(1000);

        printf("[Q5] What is the other word for profit and loss account? \n \n");
        printf("A. Suspense account \n");
        printf("B. Income statement \n");
        printf("C. Trial balance\n");
        printf("D. Bank statement \n \n");


        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'B':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'b':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 5 HAS ENDED */

        /* QUESTION 6 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 6 \n \n");

        Sleep(1000);

        printf("[Q6] What is the name of the tallest mountain in the world? \n \n");
        printf("A. Mt. k2 \n");
        printf("B. Mt. Makalu \n");
        printf("C. Mt. Kilimanjaro \n");
        printf("D. Mt. Everest \n \n");


        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'D':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +1 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'd':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTIION 6 HAS ENDED */

        /* QUESTION 7 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 7 \n \n");

        Sleep(1000);

        printf("[Q7] What is the name of the tallest building in the world? \n \n");
        printf("A. Burj al arab \n");
        printf("B. Shanghai Tower \n");
        printf("C. Burj Khalifa \n");
        printf("D. Jeddah Tower \n \n");


        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'C':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'c':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 7 HAS ENDED */

        /* QUESTION 8 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 8 \n \n");

        Sleep(1000);

        printf("[Q8] What is the capital city of Zambia? \n \n");
        printf("A. Lusaka \n");
        printf("B. Copperbelt \n");
        printf("C. Muchinga \n");
        printf("D. Luapula \n \n");


        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'A':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'a':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 8 HAS ENDED */

        /* QUESTION 9 HAS STARTED */

        printf("\t \t \t \t \t \t     Question 9 \n \n");

        Sleep(1000);

        printf("[Q9] How many provinces are there in zambia? \n \n");
        printf("A. 5 \n");
        printf("B. 10 \n");
        printf("C. 7 \n");
        printf("D. 11 \n \n");

        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'B':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'b':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        /* QUESTION 9 HAS ENDED */

        /* QUSTION 10 HAS STARTED */

         printf("\t \t \t \t \t \t     Question 10 \n \n");

        Sleep(1000);

        printf("[Q10] How many countries are there in africa?\n \n");
        printf("A. 50 \n");
        printf("B. 47 \n");
        printf("C. 54 \n");
        printf("D. 65 \n \n");


        printf("Your answer: ");scanf("%s",&hardmodeswitch);


switch(hardmodeswitch){

case 'C':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n \n \n");
    points = points + 10;
    Sleep(1000);
    break;
case 'c':
    printf("Correct answer \t \t \t \t \t \t \t \t \t \t \t  [ +10 Points ]\n \n \n \n");
    points = points + 10;
    Sleep(1000);
    break;
default :
    printf("Incorrect answer\t \t \t \t \t \t \t \t \t \t  [ +0 Points ]\n \n \n \n");
    points = points + 0;
    Sleep(1000);
    break;
    }

        printf("\t \t \t \t \t \t>> You have answered all the questions. Please wait. \n \n ");
        Sleep(2500);
        printf("\t \t \t \t \t \t>> Collecting Data");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(". \n \n ");
        Sleep(1000);
        printf("\t \t \t \t \t \t>> Calculating Answers");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(". \n \n \n \n");
        Sleep(2000);

    printf("\t \t \t \t \t \t>> your final score is: %d/100 \n \n ",points);
    Sleep(2000);
    printf("\t \t \t \t \t \t>> Please wait while your form is being printed. \n \n \n \n");
    Sleep(2000);


switch(points){

case 0:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 0/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' U '  ( Ungraded )                  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Sorry, But you are a failure.______ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;



case 10:
     printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 10/100                               \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' F '  ( Absolute Fail )             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Absolute Fail, Better luck next     \n");
    Sleep(100);
    printf("\t \t \t \t \t \t time.______________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;



case 20:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 20/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' E '  ( Fail )                      \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: That was a terrible fail. Please___ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t study and work harder in order to gain ____ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t better results.____________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;



case 30:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 30/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' D '  ( Bare pass )                  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Can do alot better if you ever_____ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t considered to concentrate in class.________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;




case 40:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 40/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' D+ '  ( Pass )                     \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Can do better._____________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;




case 50:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 50/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' C '  ( Credit )                  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Good result, can do better._______ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t i would recommend you use online books to  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t give you a boost.__________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;


case 60:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 60/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' C+ '  ( Credits )                  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Work harder next time._____________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;


case 70:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 70/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' B '  ( Merit )                     \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Good effort, Need a boost._________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;


case 80:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 80/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' B+ '  ( Merit )                  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Great job! Always room for_________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Improvement._______________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;


case 90:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 90/100                                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' A '  ( Destinction )                \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: Passed with flying colors_________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Slight room for improvement________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;


case 100:
    printf("\t \t \t \t \t \t               PLAYER FORM                   \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    printf("\t \t \t \t \t \t Player name: %s                               \n",Username);
    Sleep(100);
    printf("\t \t \t \t \t \t Player Surename: %s                            \n",Surename);
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Narrative: Player is done with the quiz,    \n");
    Sleep(100);
    printf("\t \t \t \t \t \t            Waiting for results.             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Score: 100/100                              \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Grade: ' A+ '  ( DESTINCTION )                  \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t REVIEW: 100!!!!___________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t ___________________________________________ \n");
    Sleep(100);
    printf("\t \t \t \t \t \t                                             \n");
    Sleep(100);
    printf("\t \t \t \t \t \t Programmed by: Ali Durul            \n");
    Sleep(100);
    printf("\t \t \t \t \t \t email: alidrl26@gmail.com          \n \n \n ");
    Sleep(2500);
    break;

    }


    }


 else if (userinputforhome == 3){
    printf(" \n");
    printf("\t \t     Closing quiz, Please wait.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
 }

  else if (userinputforhome != 1 || 2 || 3){
    printf(" \n");
    printf("\t \t     Closing quiz, Please wait.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
 }


        return 0;

}
