#include <stdio.h>   // CREATED BY Mr Navy
#include <conio.h>   // Especially  for getch()
#include <stdlib.h>  // Especially  for system("cls") , exit(0);
#include <time.h>    // Especially  for showing Date and time above the inventory management
#include <string.h>  // Especially  for strcmp
#include <windows.h> // Especially  for STD_OUTPUT_HANDLE
#include <ctype.h>   // Especially for toupper function

COORD coord = {0, 0}; // this is global variable used for the position of cursor // it is included in <windows.h>  header

void gotopositionxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void calculate_bill();
void display_bill();
int main()
{
    system("cls");
    calculate_bill();
}

void calculate_bill()
{
display_bill();
gotopositionxy(1,1);

}

void display_bill()
{

     int i;
    gotopositionxy(24,5);
//;
    for (i=1; i<=10; i++)
        printf("*");
    printf(" * MR NAVY * ");
    for (i=1; i<=10; i++)
        printf("*");
    printf("\n\n");
    gotopositionxy(30,6);
    printf("Inevntory Management");
//textcolor(1);
    gotopositionxy(37,25);
    printf("CUSTOMER'S BILL") ;
//textcolor(8);
    gotopositionxy(13,27);
    printf("SN.   Name     Closing Stocks    Company    Quantity     Rate          Total");

}
