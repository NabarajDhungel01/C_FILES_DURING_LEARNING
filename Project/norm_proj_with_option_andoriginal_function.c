// Store Management Project
// Features:
// Login Screen
// Add / Delete / Search / Read all Products / Delete Products
#include <stdio.h>   // Especially  CREATED BY Mr Navy
#include <conio.h>   // Especially  for getch()
#include <stdlib.h>  // Especially  for system("cls") , exit(0);
#include <time.h>    // Especially  for showing Date and time above the inventory management
#include <string.h>  // Especially  for strcmp
#include <windows.h> // Especially  for STD_OUTPUT_HANDLE

void welcome_screen(void);               // function for welcome screen
void login_screen();                     // function for login screen
void display_menu();                     // function for display menu screen
void credits();                          // function to display credits.
void gotopositionxy(int x, int y);       // this will place the cursor.
void cursor(int position);               // this will move the cursor the the positionxy
void highlight(int position, int count); // this will highlight the thing
// function seen in the menu of  DISPLAY_MENU function.
void add_product();
void delete_product();
void search_product();
void display_products();
void edit_products();
void exit(); // we will not be using this function for sure. because we will be using """"exit(0)"""" function from <stdlib.h>;

COORD coord = {0, 0}; // this is global variable used for the position of cursor // it is included in <windows.h>  header

struct product
{
    char product_name[30];
    char product_company[40];
    char c;
    int product_code;
    int product_price;
    int product_quantity;
} pdt;

int main()

{
    // Let's make the welcome screen first. and call the function.
            // welcome_screen();     // Calling the welcome screen.
    // login_screen();   // Now calling the login screen for entering the username and password..
    // let's move to the login_screen;
    // After login is successful, we will move to the menu appearance; with function name display_menu

        display_menu(); // you can also call this finction in the welcome_screen at last

    // the menu seen in the menu bar are function and we are calling those function in
    // We will call menu function from CUROSR FUNCTION //////
    // return 0;  // Since the function is void so it doesnt returns any value
}

void display_menu()
{
	int choice;
	system("cls");
	main:
	printf("\n======================== Product Management System ========================");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tPress <1> Add Products");
	printf("\n\t\tPress <2> Delete Products");
	printf("\n\t\tPress <3> Search Products");
	printf("\n\t\tPress <4> Read Items");
	printf("\n\t\tPress <5> Edit Items");
	printf("\n\t\tPress <6> Exit!");	
	
	printf("\n\n\t\tEnter your choice[1-6]");
	scanf("%i", &choice);
	
	system("cls");
	
	switch(choice)	
	{
		case 1:
			add_product();
			break;
		case 2:
			// deleteproduct();
			break;
		case 3:
		// search_item();
			break;
		case 4:
		// read_item();
			break;	
		case 5:
			// edit_item();
			break;
		case 6:
		printf("System Exit");
		exit(0);
		break;
			
		
		default:
		printf("Invalid Choice! System Exit\n");
			getch();
	}
	
}

// void display_menu()  // cursor wala
// {
//     system("cls"); // will clear the screen to show the 
//     const char *menu[] = {"\tAdd Product", "\tDelete Product", "\t Search Product", "\tDisplay All", "Edit Product", "Exit", "Credits"};
//     system("cls");
//     gotopositionxy(33, 18);
//     printf("MAIN MENU");
//     for (int i = 0; i <= 6; i++)
//     {
//         gotopositionxy(30, 22 + i + 1);
//         printf("%s\n\n\n", menu[i]);
//     }
//     cursor(7);

//     printf("final");
//     getch();
// }



void add_product()
{
	int index, valid;
	char c;
	int a=0;
	FILE *filep1;
	

	do
	{
		system("cls");
		printf("============ Enter Product Detail Orig ============");
		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		filep1 = fopen("RECURDFILE.dat","a+");//opening file and creating a staff.dat file to append or write
		
		if((filep1 = fopen("RECURDFILE.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nProduct Code\t :");
			scanf("%i",&ID);
			while(fscanf(filep1,"%s %s %i %i %i", pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_code,&pdt.product_quantity)!=EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == pdt.product_code)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			pdt.product_code = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&pdt.product_code);
		}
		
	//add product name
		do
		{
		
			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nProduct Name\t :");
			gets(pdt.product_name); // get input string
			pdt.product_name[0]=toupper(pdt.product_name[0]);
			//iterate for every character in string
			for (index=0; index<strlen(pdt.product_name); ++index)
			{	//check if character is valid or not
				if(isalpha(pdt.product_name[index]))
				{
					valid = 1;
				}
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			}
		}while(!valid);	//while end here
		

		//Product Company
			do
		{
			char product_company[40];
			fflush(stdin);
			printf("\nProduct Company\t :");
			gets(pdt.product_company); // get input string
			pdt.product_company[0]=toupper(pdt.product_company[0]);
			//iterate for every character in string
			for (index=0; index<strlen(pdt.product_company); ++index)
			{	//check if character is valid or not
				if(isalpha(pdt.product_company[index]))
					valid = 1;
				else
				
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();
			}
		}while(!valid);
		
		//product_code
		do
		{
			printf("\nPrice [10-5000]Rupees:");
			scanf("%i",&pdt.product_price);
			if(pdt.product_price<10 || pdt.product_price>5000)
			{
				printf("\n\tYou Cannot Enter the product_price limit [10-5000].Re-Enter.");
			}
		}while(pdt.product_price<10 || pdt.product_price>5000);
			
				do
			{
				printf("\nQuantity [1-500]\t:");
				scanf("%i",&pdt.product_quantity);
				if(pdt.product_quantity<1 || pdt.product_quantity>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(pdt.product_quantity<1 || pdt.product_quantity>500);
	
	//	printf("\nProduct product_price\t :");
	//	scanf("%i", &pdt.product_price);
		//printf("\nProduct ID\t :");
		//scanf("%i", &pdt.product_code);
	//	printf("\nProduct Quantity :");
	//	scanf("%i",&pdt.product_quantity);
		
		filep1=fopen("RECURDFILE.dat","a");
		fprintf(filep1,"\n%s %s %i %i %i", pdt.product_name, pdt.product_company,pdt.product_price, pdt.product_code,pdt.product_quantity);
		fclose(filep1);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");
		
	}
	while((c = getch()) =='\r');
	display_menu();
}



void add_products() // remove s in products to make it function
{
    int valid = 0;              // declared to check if character is valid or not.
    char c;                  // we delcared this variable for later so that after taking all the inputs from the user, c will contain getch() , if the user presses enter, the while loop will be continued if any other key is entered, the loop will stop and will get to next step.                       // int index = 0;              // we will use this for checking if the charcter in string is valid or not
    FILE *filep1;
    
    
    
    do
    {
        system("cls"); // clears the screen
        printf("=========== ENTER THE DETAILS OF THE PRODUCT NAVY... ===========");
        int Product_Code_Input; // we will be taking the input in this variable

        filep1 = fopen("recordfile.dat", "a+");               

        if ((filep1 = fopen("recordfile.dat", "a+")) != NULL) // if condition that checks if the file is NULL or not
        {
        XYZ: // for goto loop later on
            printf("\n Product Code \t :");
            scanf("%i", &Product_Code_Input);   //Down // Checking if the product code is already there or not.
            while (fscanf(filep1, "%s %s %i %i %i", pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_code, &pdt.product_quantity) != EOF)
            {
                /*
                fscanf reads every data stored in the file
                if entered staffID already exist then jumps to
                position I declared inside if(sfile!=NULL) at top
                */
                if (Product_Code_Input == pdt.product_code)
                {
                    printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
                    goto XYZ;
                }
            }
            pdt.product_code = Product_Code_Input;
        }
        else // runs if sfile is empty
        {
            printf("\nProduct Code\t :");
            scanf("%i", &pdt.product_code);
        }

        // add product name
        do
        {


            fflush(stdin);
            printf("\n Product Name\t :");
            gets(pdt.product_name); // takes input from user
            pdt.product_name[0] = toupper(pdt.product_name[0]); // will capitalize the first letter of
            // this will iterate for every character in string and change it to uppercase
            for (int i = 0; i < strlen(pdt.product_name); ++i)
            { // check if the character is valid or not
                if (isalpha(pdt.product_name[i]))
                {
                    valid = 1;
                }
                else
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n The name you entered contain invalid character. Please 'Enter' Again");
                getch(); // this will hold the output
            }
        } while (!valid); // while end here


        // Product Company
        do
        {   
             // char product_company[40];
            fflush(stdin);
            printf("\nProduct Company\t :");
            gets(pdt.product_company); // will get the input string
            pdt.product_company[0] = toupper(pdt.product_company[0]); 
            // will capitalize the first letter of
            for (int j = 0; j < strlen(pdt.product_company); ++j)
            { // check if the character is valid or not
                if (isalpha(pdt.product_company[j]))
                    valid = 1;
                else
                
                {
                    valid = 0;
                    break;
                }
            }
            if (!valid)
            {
                printf("\n The name you entered contain invalid character. Please 'Enter' Again");
                getch();
            }
        } while (!valid);

        // Product product_price
        printf("\n product_price :");
        scanf("%i", &pdt.product_price);

        // Product Quantity
        printf("\n Quantity\t :");
        scanf("%i", &pdt.product_quantity);

        filep1 = fopen("recordfile.dat", "a");
        fprintf(filep1, "\n%s %s %i %i %i", pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_code, &pdt.product_quantity);
        fclose(filep1);
        printf("\n Press 'Enter' button to add more item and any other key to go to main menu");

    } while ((c = getch()) == '\r'); // c will contain getch() , if the user presses enter, the while loop will be continued if any other key is entered, the loop will stop and will get to next step.
    display_menu();                  // After taking all the input and adding the products , the menu will be shown while the button other than enter is pressed.
}
