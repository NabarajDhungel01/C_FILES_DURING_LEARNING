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
#include <ctype.h>   // Especially for toupper function

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
void edit_product();
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

void welcome_screen(void) // Welcome Screen Function Code
{
    time_t t; // use this code by adding enter on it..  //#include <stdio.h> #include<time.h> int main() {    	time_t t;	time(&t);     printf("Date and Time is : %s",ctime(&t));     return 0; }
    time(&t);
    printf("                                                                                                         \n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t%s", ctime(&t)); // Print Time
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t|\t     WELCOME TO \t |\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t|  INVENTORY MANAGEMENT SYSTEM\t |\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
    printf("|                                                                                                               |\n");
    printf("|\t\t                 Address : United States of America     \t\t\t\t\t|\n");
    printf("|\t\t                 Number : XXXXXXXXXX\t\t\t\t\t\t\t\t|\n");
    printf("|                                                                                                               |\n");
    printf("|\t\t\t\t      \"Project By Mr Navy\"\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|Press any key to continue.........\t\t\t\t\t\t\t\t\t\t|\n");

    printf("-----------------------------------------------------------------------------------------------------------------\n");

    getch(); // Using the getch to pause the output and asking for any key to continue..
    // After printing the Welcome Screen  We will proceed to the login screen...
    // Calling the login screen
    system("cls"); // after pressing some button, the screen will be cleared..
    // Now the main function will execute, let's move to the main function.
}

void login_screen() // Making Login Function
{
    int i = 0;
    int a = 0;         // we are declaring this variable so that we can check if the login details is incorrect more than 2 times, it will exit
    char c = ' ';      // for displaying as asterik
    char username[20]; // for taking input of username
    char password[20]; // to store the password
    do
    {
        printf("\n");
        printf("\n ================  LOGIN  ================ \n");
        printf("\n");
        printf("       Username :-  ");
        scanf("%s", &username);
        printf("\n       Password :-  "); // now asking for password
        // when we are entering the password, it should be taken as
        // character and display as asterik  ********
        // explanation on how the asterik is shown here,
        while (i < 20)
        {
            password[i] = getch(); // storing the value of getch,i.e. when you press some key in the console/keyboard in terminal, the getch will capture it and move forward, when you use getch to take the input, the character you pressed is not shownn in the screen.
            c = password[i];       //
            if (c == 13)           // if user inputs the password more than 13 character, it will exit
                break;             // will exit loop
            else                   // until the user enters the password less than 13 characers, it will take input and print asterik in output when one character is taken
                printf("*");       //
            i++;
        }
        password[i] = '\0';
        // char code = pword;
        i = 0;
        // use this to take login details whithout showing asterik             // scanf("%s",&password);
        if (strcmp(username, "mrnavy") == 0 && strcmp(password, "navy") == 0) // strcmp compares the two strings and if the two strings strcmp(username,"user") username value and "user" are same it returns the value of 0, so after that the login will be successful
        {
            system("cls");

            printf("!!! LOGIN IS SUCCESSFUl\n\n");

            printf("              =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("              ==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==");
            printf("\n              === WELCOME TO NAVY'S INVENTORY MANAGEMENT SYSTEM =-=\n");
            printf("              ===-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("              =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\t\t\t\n\nPress any key to continue...");

            getch(); // this will hold the output
            break;   // this will exit the if and else loop and will go to while a<=2 and that will be incorrect too.
        }
        else
        {
            printf("\n");
            printf("\n");
            system("cls"); // clearing screen and asking for the login details again if the entered is wrong.
            printf("\n SORRY !!! THE CREDENTIALS YOU ENTERED ARE INCORRECT ");
            printf("\n\n Enter the login details again...");
            a++;

            // this will hold the output
        }
    } while (a <= 2);

    if (a > 2)
    {
        system("cls"); // clearing screen for showing below action..
        printf("\n You have entered the wrong for more than three times \n You will get exit from this program");
        getch(); // will hold the screen
    }
}

void display_menu()
{
    system("cls"); // will clear the screen to show the menu
    system("cls"); // will clear the screen to show the menu
    const char *menu[] = {"\tAdd Product", "\tDelete Product", "\t Search Product", "\tDisplay All", "Edit Product", "Exit", "Credits"};
    system("cls");
    gotopositionxy(33, 18);
    printf("MAIN MENU");
    for (int i = 0; i <= 6; i++)
    {
        gotopositionxy(30, 22 + i + 1);
        printf("%s\n\n\n", menu[i]);
    }
    cursor(7);

    printf("final");
    getch();
}

void add_product()
{

    char check;
    gotopositionxy(30,35);
    printf("Press Y to add product or any other key to go back to menu\t:");
    check = getche();
    if (check == 'y' || check == 'Y')
    {
        //  do nothing
    }
    else
    {

        display_menu();
    }
    
    int valid = 0; // declared to check if character is valid or not.
    char c;        // we delcared this variable for later so that after taking all the inputs from the user, c will contain getch() , if the user presses enter, the while loop will be continued if any other key is entered, the loop will stop and will get to next step.                       // int index = 0;              // we will use this for checking if the charcter in string is valid or not
    FILE *filep1;
    int i;

    do
    {
        system("cls"); // clears the screen
        printf("=========== ENTER THE DETAILS OF THE PRODUCT NAVY... ===========");
        int Product_Code_Input; // we will be taking the input in this variable

        filep1 = fopen("ProductDetails.dat", "a+");

        if ((filep1 = fopen("ProductDetails.dat", "a+")) != NULL) // if condition that checks if the file is NULL or not
        {
        XYZ: // for goto loop later on
            printf("\n Product Code \t :");
            scanf("%i", &Product_Code_Input); // Down // Checking if the product code is already there or not.
            while (fscanf(filep1, "%i %s %s %i %i", &pdt.product_code, pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_quantity) != EOF)
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
            printf("\n\nProduct Code\t :");
            scanf("%i", &pdt.product_code);
        }

        // add product name
        do
        {

            fflush(stdin);
            printf("\n Product Name\t :");
            gets(pdt.product_name);                             // takes input from user
            pdt.product_name[0] = toupper(pdt.product_name[0]); // will capitalize the first letter of
            // this will iterate for every character in string and change it to uppercase
            for (i = 0; i < strlen(pdt.product_name); ++i)
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
            printf("\n Product Company\t :");
            gets(pdt.product_company); // will get the input string
            pdt.product_company[0] = toupper(pdt.product_company[0]);
            // will capitalize the first letter of
            for (i = 0; i < strlen(pdt.product_company); ++i)
            { // check if the character is valid or not
                if (isalpha(pdt.product_company[i]))
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

        // Product Price
        printf("\n Product Price\t :");
        scanf("%i", &pdt.product_price);

        // Product Quantity
        printf("\n Product Quantity\t :");
        scanf("%i", &pdt.product_quantity);
       

        filep1 = fopen("ProductDetails.dat", "a");
        fprintf(filep1, "\n%i %s %s %i %i", pdt.product_code, pdt.product_name, pdt.product_company, pdt.product_price, pdt.product_quantity);
        fclose(filep1);
        printf("\n Press 'Enter' button to add more item and any other key to go to main menu");

    } while ((c = getch()) == '\r'); // c will contain getch() , if the user presses enter, the while loop will be continued if any other key is entered, the loop will stop and will get to next step.
    display_menu();                  // After taking all the input and adding the products , the menu will be shown while the button other than enter is pressed.
}

void delete_product()
{
    int repitition;
    char repeat;
    again :
    system("cls");  // clears the screen
    fflush(stdin);
    // int input_product_code;
    int found = 0 ;// initialing with zero bcz, there is no rule that the value is always 0 once you initialize
    int input_product_code = 0; 
    printf("Enter the product code\t: \n\n");
    scanf("%d",&input_product_code);
                            // TO CHECK THE PRODUCT IS PRESENT OR NOT WITH NAME   →→  char input_product_name[40];
                            // TO CHECK THE PRODUCT IS PRESENT OR NOT WITH NAME   →→  printf("Enter the name of the product to delete\t :");
                            // TO CHECK THE PRODUCT IS PRESENT OR NOT WITH NAME   →→  gets(input_product_name);
    FILE *fileptr1;
    FILE *fileptr2;
    fileptr1 = fopen("ProductDetails.dat","r");
    fileptr2 = fopen("Temp_ProductDetails.dat","w+");
    fflush(stdin);
                            // TO CHECK THE PRODUCT IS PRESENT OR NOT WITH NAME   →→  input_product_name[0]= toupper(input_product_name[0]); // this will capitalize the first letter of the product to search with name
    
    
    if ((fileptr1 = fopen("ProductDetails.dat", "r+")) == NULL) // r+ does both read and write
    {
        printf(" \n\n\t\t RECORD FILE IS EMPTY \n");
        printf("\n\t\t Enter any key to go back to main menu\n");
        getch();
        display_menu();
    }
    else
    {                                                                                                                                       // because we have capitalize the first letter of the name by ourselves when adding the product.

    while (fscanf(fileptr1, "%i %s %s %i %i\n",&pdt.product_code, pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_quantity)!=EOF);
    {
        
                                // TO CHECK THE PRODUCT IS PRESENT OR NOT WITH NAME   →→  if(strcmp(input_product_name,pdt.product_name)==0)
        if(input_product_code == pdt.product_code)
        {
            found = 1; // when the name is found , this time the NAME, COMPANY, PRICE, CODE
				// will not be printed, this will be skipped this time.
				// resulting into deletion and jumps to next while instead of else;
        }
        else
        {
            fprintf(fileptr2, "%i %s %s %i %i\n",pdt.product_code, pdt.product_name, pdt.product_company, pdt.product_price, pdt.product_quantity);
        }
    }
    if(!found) // i.e. if found = 0               HERE ::  0 represents false and 1 represents true
    {
        printf("\n\n Record not found\n");
        getch();
        display_menu();
    }
    else
    {
        printf("\n Record Deleted");
    }
    
    fclose(fileptr1);
    fclose(fileptr2);
    remove("ProductDetails.dat");
    rename("Temp_ProductDetails.dat","ProductDetails.dat");
    printf("\n\nPRESS 'Y' TO DELETE ANOTHER PRODUCT\tOR\tPress any other button to go to main menu\n\n\t\t\t\t");
    
    repeat = getche();
    if (repeat == 'y' || repeat =='Y')
    {
    repitition = 1;
    goto again;
    }
    else
    {
        //end
    }
    }

}



































void display_products()
{

    system("cls");

    FILE *filep1;
    int p = 0;
    int q = 0;
    int y = 8; // declaring this to print the details from the file in the next y axis;

    // if file is null
    if ((filep1 = fopen("ProductDetails.dat", "r")) == NULL)
    {
        gotopositionxy(10, 3);
        printf(" RECORD FILE IS EMPTY");
        printf("\n\t\t Enter any key to go back to main menu");
        getch();
        display_menu();
    }
    else
    {
        gotopositionxy(0, 5);
        for (int i = 0; i < 99; i++)
        {
            printf("-"); // this will be printed 100 times to make a bar like this ----------------------------------------
        }
        printf("\n");

        // we are tweaking with only Y-axis because we want output horizontally like this↓↓↓↓
        // Product Name      Product Price     Product Company    Product Code   Product Quantity  etc
        gotopositionxy(5, 6);
        printf("Product Code");
        gotopositionxy(25, 6);
        printf("Product Name");
        gotopositionxy(40, 6);
        printf("Product Company");
        gotopositionxy(60, 6);
        printf("Product Price");
        gotopositionxy(80, 6);
        printf("Product Quantity");

        printf("\n");
        for (int i = 0; i < 99; i++)
        {
            printf("-"); // this will be printed 100 times to make a bar like this ----------------------------------------
        }
        printf("\n");

        while (fscanf(filep1, "%i %s %s %i %i", &pdt.product_code, pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_quantity) != EOF)
        {
            gotopositionxy(5, y);
            printf("%i", pdt.product_code);
            gotopositionxy(25, y);
            printf("%s", pdt.product_name);
            gotopositionxy(40, y);
            printf("%s", pdt.product_company);
            gotopositionxy(60, y);
            printf("%i", pdt.product_price);
            gotopositionxy(80, y);
            printf("%i", pdt.product_quantity);

            y++; // this will point to the new line every time the loop repeates
        }
        printf("\n"); // takes to the new line
        for (int i = 0; i < 99; i++)
        {
            printf("-"); // this will be printed 100 times to make a bar like this ----------------------------------------
        }
        printf("\n");
    }
    fclose(filep1);

    gotopositionxy(25, y + 1);

    printf("\n\nEND OF FILE!\n\n");

    printf("\n Enter any key to go to Main Menu ");
    getch();
    display_menu();
}



// ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓CALLING FUNCTION IN THE MENUS ADD / DELETE / SEARCH / DISPLAY PRODUCTS / etc.
void cursor(int position)
{
    int count = 1;
    char ch = '0';
    gotopositionxy(30, 23);
    while (1)
    {
        switch (ch)
        {
        case 80:
            count++;
            if (count == position + 1)
                count = 1;
            break;

        case 72:
            count--;
            if (count == 0)
                count = position;
            break;
        }
        highlight(position, count);
        ch = getch();
        if (ch == '\r')
        {
            if (position == 7)
            {
                // YOU CAN SET YOUR FUNCTION WHERE TO JUMP HERE

                if (count == 1) /*add_product()*/ /*printf("add_item")*/
                    add_product();
                else if (count == 2) /*delete_product()*/
                 delete_product();   // printf("deleteproduct");
                else if (count == 3) /*search_product()*/
                   printf("credits()"); // search_product();  // printf("search_item");
                else if (count == 4)    /*display_products()*/
                    display_products(); /*printf ("read_item")*/
                else if (count == 5)    /*()*/
                         printf("edit_item");   // edit_product();
                else if (count == 6)
                   printf("credits()")  /*del()*/ /*printf("credits")*/;
                else
                    exit(0) /*printf("exit"*/;
            }
        }
    }
    
}

void gotopositionxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void highlight(int position, int count)
{
    // THIS FUNCTOIN WILL HIghlight the selected item by cursor
    if (position == 7)
    {
        gotopositionxy(30, 23);
        printf("   Add Product ");
        gotopositionxy(30, 24);
        printf("   Delete Products      ");
        gotopositionxy(30, 25);
        printf("   Search Product     ");
        gotopositionxy(30, 26);
        printf("   Display All    ");
        gotopositionxy(30, 27);
        printf("   Edit Product         ");
        gotopositionxy(30, 28);
        printf("   Credits   ");
        gotopositionxy(30, 29);
        printf("   Exit           ");

        switch (count)
        {
        case 1:
            gotopositionxy(30, 23);
            printf(" - Add Product ");
            break;
        case 2:
            gotopositionxy(30, 24);
            printf(" - Delete Products      ");
            break;
        case 3:
            gotopositionxy(30, 25);
            printf(" - Search Product     ");
            break;
        case 4:
            gotopositionxy(30, 26);
            printf(" - Display All    ");
            break;
        case 5:
            gotopositionxy(30, 27);
            printf(" - Edit Products       ");
            break;
        case 6:
            gotopositionxy(30, 28);
            printf(" - Credits   ");
            break;
        case 7:
            gotopositionxy(30, 29);
            printf(" - Exit           ");
            break;
        }
    }
}
