// Store Management Project
// Features:
// Login Screen
// Add / Delete / Search / Read all Products / Delete Products
#include <stdio.h>  // CREATED BY Mr Navy
#include <conio.h>  // for getch()
#include <stdlib.h> // for system("cls")
#include <time.h>   // for showing Date and time above the inventory management
#include <string.h> // for strcmp
#include<ctype.h>   
#include<windows.h> // for COORD variable // 

COORD coord= {0,0}; // this is global variable


void display_menu(); // function for display menu screen
void cursor(int position);
void gotopositionxy(int x, int y);
void highlight(int, int);

void main(void)

{
    display_menu();
}
void display_menu()
{
    system("cls"); // will clear the screen to show the menu
    const char *menu[] = {"\tCalculate Bill", "\tAdd Products", "\tEdit Product", "\tDisplay All", "Search Product", "Delete Product", "Exit"};
    system("cls");
    gotopositionxy(33,18);
    printf("MAIN MENU");
    for (int i = 0; i <= 6; i++)
    {
        gotopositionxy(30,22+i+1);
        printf("%s\n\n\n",menu[i]);
    }
    cursor(7);
    
    printf("final");
    getch();
}

// function to move the cursor
void cursor(int position)
{
    int count = 1;
    char ch = '0';
    gotopositionxy(30,23);
    while (1)
    {
        switch(ch)
        {
            case 80:
                count++;
                if (count == position + 1 ) count =1;
                break;

            case 72:
                count--;
                if(count == 0) count=position;
                break;
        }
        highlight(position, count);
        ch = getch();
        if (ch == '\r')
        {
            if (position == 7)
            {

                if (count==1) /*bill()*/  printf("bill") ;
                else if(count==2) /*add()*/ printf("add");
                else if(count==3) /*edit()*/ printf("edit");
                else if (count==4) /*d_all()*/printf("show all");
                else if (count==5) /*d_search()*/printf("search");
                else if (count==6) /*del()*/printf("delete");
                else if (count==7) exit(0) /*printf("exit"*/;                
            }
            
        }
        

    }
    

}
void gotopositionxy(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void highlight(int position,int count)
{
    if (position==4)
    {
        gotopositionxy(30,23);
        printf("   By Code          ");
        gotopositionxy(30,24);
        printf("   By Rate          ");
        gotopositionxy(30,25);
        printf("   By Quantity      ");
        gotopositionxy(30,26);
        printf("   Back to main menu");

        switch (count)
        {
        case 1:
            gotopositionxy(30,23);
            printf(" - By Code          ");
            break;
        case 2:
            gotopositionxy(30,24);
            printf(" - By Rate          ");
            break;
        case 3:
            gotopositionxy(30,25);
            printf(" - By Quantity      ");
            break;
        case 4:
            gotopositionxy(30,26);
            printf(" - Back to main menu");
            break;
        }
    }

    if(position==7)
    {
        gotopositionxy (30,23);
        printf("   Calculate Bill ");
        gotopositionxy (30,24);
        printf("   Add Goods      ");
        gotopositionxy (30,25);
        printf("   Edit Goods     ");
        gotopositionxy (30,26);
        printf("   Display All    ");
        gotopositionxy (30,27);
        printf("   Search         ");
        gotopositionxy (30,28);
        printf("   Delete Goods   ");
        gotopositionxy (30,29);
        printf("   Exit           ");

        switch(count)
        {
        case 1:
            gotopositionxy (30,23);
            printf(" - Calculate Bill ");
            break;
        case 2:
            gotopositionxy (30,24);
            printf(" - Add Goods      ");
            break;
        case 3:
            gotopositionxy (30,25);
            printf(" - Edit Goods     ");
            break;
        case 4:
            gotopositionxy (30,26);
            printf(" - Display All    ");
            break;
        case 5:
            gotopositionxy (30,27);
            printf(" - Search         ");
            break;
        case 6:
            gotopositionxy (30,28);
            printf(" - Delete Goods   ");
            break;
        case 7:
            gotopositionxy (30,29);
            printf(" - Exit           ");
            break;
        }
    }
}