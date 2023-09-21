/*
this is an employee management system program
user add employee and saves in the system
admin can add edit and delete employees from the list
the output is saved to a file named data.txt

*/

//add preprocessors
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define BUFF 2000
#define MAX 250
#define USER "Admin"

//add global variables
char first_name[MAX], last_name[MAX], gender[MAX];
char email[MAX], nationality[MAX], marital_status[MAX], position[MAX], NRC[11];
char city[MAX], street[MAX], house_number[MAX], P_number[15];
int spam, counter;
char buffer[BUFF], password[8];

void list_employee(); //prototype of list_employee function

void main()
{
	//add local variables
	FILE *data;
	char newVal[MAX]; //local variables

login:
	printf("\n\n\n\n\t\t\t\t\tUsername: \t%s\n\t\t\t\t\tPassword:\t", USER); //prompt user
	scanf(" %s", password);						 //scan for user password



	if ((strcmp(password, "admin@123")) == 0) //checks if user types in admin as password
	{
    system("cls");//clear screen
	//main menu
	start:
		printf("\n\t\t\t\t\t1.Register Employee\n\t\t\t\t\t2.Modify Details\n\t\t\t\t\t3.logout\n\t\t\t\t\t4.Quit\n\t\t\t\t\t>>>"); //prompt user
		scanf(" %d", &spam);													//scan for input user choice
		if (spam == 1)															//if user selects 1
		{
		    system("cls");//clear screen
			printf("\t\t\t\t\tREGISTER EMPLOYEE\n"); //print "Register Employee" to screen
			data = fopen("data.txt", "a+");									   //open file named data.csv and append or add new enties


			//prompt and scan for input

			printf("\t\t\t\t\tFirst Name:\n\t\t\t\t\t>>>"); //print "first name"
			scanf(" %s", first_name);	//scan for first name from user to type in
			printf("\n\t\t\t\t\tLast Name:\n\t\t\t\t\t>>>");
			scanf(" %s", last_name);
			printf("\n\t\t\t\t\tGender(e.g...Male/Female):\n\t\t\t\t\t>>>");
			scanf(" %s", gender);
			printf("\n\t\t\t\t\tEmail:\n\t\t\t\t\t>>>");
			scanf(" %s", email);
			printf("\n\t\t\t\t\tMarital Status(options...Single/Maried/Other):\n\t\t\t\t\t>>>");
			scanf(" %s", marital_status);
			printf("\n\t\t\t\t\tNational Registration Card(e.g...123456/10/1):\n\t\t\t\t\t>>>");
			scanf(" %s", NRC);
			printf("\n\t\t\t\t\tPhone Number(e.g...+2609xxxxxxxx):\n\t\t\t\t\t>>>");
			scanf(" %s", P_number);
			printf("\n\t\t\t\t\tCity:\n\t\t\t\t\t>>>");
			scanf(" %s", city);
			printf("\n\t\t\t\t\tHouse Number(e.g...#456/11):\n\t\t\t\t\t>>>");
			scanf(" %s", house_number);

			//print to data.txt
			fprintf(data, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", first_name, last_name, P_number, gender, NRC, marital_status, city, house_number, email);
			fclose(data); //close file data.txt
			system("cls");
			printf("\n\t\t\t\t\tEmployee added with success!!\n\n"); //success message
			goto start;										 //return to main menu
		}
		else if (spam == 2) //if user selects 2
		{
		    system("cls");
			//declare local variables
			FILE *frplus, *frtemp; //file pointers
			int row, line = 0, num;
			char newVal[MAX], newValEmail[MAX], string[MAX], old[MAX];
			char newLn[MAX], temp[] = "temp.txt", ogf[] = "shazzie.txt";
			char eNameF[MAX], eMail[MAX], eNameL[MAX], eID[MAX], eNumberP[MAX], eGender[MAX], eNRC[11], eMStatus[MAX], eCity[MAX], eHNumber[MAX];

			list_employee(); //call function to display employee list to select from

			frplus = fopen("data.txt", "r"); //open file
			if (!frplus)					 //if data.txt cant be opened
			{
			    system("cls");
				printf("\t\t\t\t\tUnable to open the file!!\n");//error message
				return 0;//terminate program
			}
			frtemp = fopen("temp.txt", "w"); //creates and opens temporary file named temp.txt
			if (!frtemp)//if no temp.txt
			{
			    system("cls");
				printf("\t\t\t\t\tCan't open a temporary file to write!!\n");//error message
				fclose(frtemp);     //close temp.txt
				return 0;//terminate program
			}
			printf("Input employee id to modify (enter 0 to edit the heading):\n>>>");//prompt for employee id
			scanf("%d", &row);//scan for id and save in varible named row

			printf("1.Edit First Name\n2.Edit Last Name\n3.Edit Phone Number\n4.Edit Gender\n5.Edit NRC\n6.Edit Marital Status\n7.Edit City\n8.Edit House Number\n9.Edit Email\nPress 0 to delete employee\n>>>");
			scanf(" %d", &spam);//scan for user selection
			row++;//add id by 1
			while (!feof(frplus))//if not end of file of data.txt
			{
			    //scan for deails
				fscanf(frplus, " %s %s %s %s %s %s %s %s %s", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);
				strcpy(string, "\0");
				fgets(string, MAX, frplus);
				if (!feof(frplus))
				{
					line++;//add line by 1
					if (line != row)//if id input is not equal to file line
					{
					    //print scanned details to temp.txt file
						fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);
						fprintf(frtemp, "%s", string);
					}
					else //if id input is equal to file line
					{
					    /*
					    swict conditions depending on the user selection
					    0 is for deleting
					    1.Edit First Name
					    2.Edit Last Name
					    3.Edit Phone Number
					    4.Edit Gender
					    5.Edit NRC
					    6.Edit Marital Status
					    7.Edit City
					    8.Edit House Number
					    9.Edit Email
					    in each case a new value is scanned and stored in newVal...
					    depending on the case the new value is replaced with value being edited
					    and the new combination is printed to the file temp.txt
					    */
						switch (spam)
						{
						case 0:
							printf("are you sure u want to remove \"%s\" from employee list\n1.confirm\n2.cancel\n>>>", eNameF);
							scanf(" %d", &num);//scan for input to confirm action
							if (num == 1)
							{
                                system("cls");
								printf("\n\t\t\t\t\temployee removed with success\n");

							}
							else if (num == 2)
							{
							    system("cls");//clear screen
                                //prints the scanned value without any replacement to the file temp.txt
								fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);

                            }
							else
							{
							    system("cls");
                                //prints the scanned value without any replacement to the file temp.txt
								fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);

							}
							break;

						case 1:
							printf("Input the new value in place of %s\n>>>", eNameF);
							scanf(" %s", newVal);//scans for new value of firstname
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", newVal, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);
							break;
						case 2:
							printf("Input the new value in place of %s\n>>>", eNameL);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, newVal, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);
							break;
						case 3:
							printf("Input the new value in place of %s\n>>>", eNumberP);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, newVal, eGender, eNRC, eMStatus, eCity, eHNumber, eMail);
							break;
						case 4:
							printf("Input the new value in place of %s\n>>>", eGender);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, newVal, eNRC, eMStatus, eCity, eHNumber, eMail);
							break;
						case 5:
							printf("Input the new value in place of %s\n>>>", eNRC);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, newVal, eMStatus, eCity, eHNumber, eMail);
							break;
						case 6:
							printf("Input the new value in place of %s\n>>>", eMStatus);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, eNRC, newVal, eCity, eHNumber, eMail);
							break;
						case 7:
							printf("Input the new value in place of %s\n>>>", eCity);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, newVal, eHNumber, eMail);
							break;
						case 8:
							printf("Input the new value in place of %s\n>>>", eHNumber);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, newVal, eMail);
							break;
						case 9:
							printf("Input the new value in place of %s\n>>>", eMail);
							scanf(" %s", newVal);
							fprintf(frtemp, "%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t%s\n", eNameF, eNameL, eNumberP, eGender, eNRC, eMStatus, eCity, eHNumber, newVal);
							break;
						default:
							printf("\n\t\t\t\t\tInvalid input!");
							break;
							goto start;
						}
					}
				}
			}
			fclose(frplus);//close the data.txt
			fclose(frtemp);//close the temp.txt
			remove("data.txt");//delete data.txt
			rename("temp.txt", "data.txt");//rename temp.txt to data.txt
			system("cls");//clear screen
			printf("\n\t\t\t\t\tEmployee modified with success!!!\n");//success message
			goto start;//go to main menu
		}
		else if (spam == 3)//if user selects option 3 on main menu
		{

            system("cls");//clear scrren
			goto login;//go to login
		}
		else if (spam == 4)//if they select option 4 on main menu
		{
		    system("cls");//clear screen
			printf("\n\t\t\t\t\tThank You for using our system\n");//close the data.txt
			exit(EXIT_SUCCESS);//exit status message
			return 0;//terminate
			}
		else //if user enters any other option apart from 1,2,3, or 4 on main menu
		{
		    system("cls");//clear screen
			printf("\n\t\t\t\t\tInvalid Option Entered!!\n\n");//error message printed out
			goto start;//go to start
		}
	}
	else //if password is not equal to "admin@123"
	{
	    system("cls");//clear screen
        counter++;//add 1 to counter
		printf("\n\t\t\t\t\tAccess Denied!...please enter a valid password!!!\n\t\t\t\t\t%d trie(s) remaining\n", 3 - counter);//error message
		while (counter < 3)//while counter is not more that 3
		{
			goto login;//redirect to login

		}

		printf("\n\t\t\t\t\tu have entered inccorect password %d times\n\t\t\t\t\ttry again next time\n", counter);//error message to print out if counter > 3
		return 0;//terminate
	}

	return 0;
}
//this is a function for viewing all the employee
void list_employee()
{
	printf("\n\n\t\t\t\t\t\t******************EMPLOYEE LIST******************\n\n");//print to screen
	FILE *fpMod;//create a file pointer
	int id = 0;//variable used for counting/showing employee id

	fpMod = fopen("data.txt", "r");//open data.txt for reading
	//rintf("#\tFirst Name\tMiddle Name\tSurname\n");
	while (fgets(buffer, BUFF, (FILE *)fpMod))//while reading each line
	{
		printf("%d. ", id);//print out id on one line
		printf("%s", buffer);//print employee details on the same line
		++id;//add employee by 1
	}
	fclose(fpMod);//close file data.txt
	return;
}
