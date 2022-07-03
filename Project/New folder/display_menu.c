#include <stdio.h>
void display_menu();
int main()
{
    display_menu();
}

void display_menu()
{
    // system("cls"); // will clear the screen to show the menu
    int option = 0; // for taking choice input
main:               // declaring main for GOTO fuction later
    printf("\n");
    printf("\n");
    printf("\n\t\t Press  <2> \t Delete Products");
    printf("\n\t\t Press  <1> \t Add Products");
    printf("\n\t\t Press  <3> \t Search Products");
    printf("\n\t\t Press  <4> \t Read Products");
    printf("\n\t\t Press  <5> \t Edit Products");
    printf("\n\t\t Press  <6  \t Show Credits");
    printf("\n\t\t Press  <7> \t Exit!!!");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\t\t Choose any option [1-7]");
    scanf("d", &option);

    switch (option)
    {
    case 1:
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 6:
        break;

    case 7:
        printf("Designed by Nabaraj Dhungel a.k.a Mr.Navy\n");
        printf("");

        break;

    default:
        break;
    }
}