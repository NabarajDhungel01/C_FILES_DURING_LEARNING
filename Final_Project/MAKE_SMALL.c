#include <string.h>#include <stdio.h>


char make_name_to_7_charcter_short(char name[40]);


int main()
{

    char name[] = "HELLOOOOOO";
    make_name_to_7_charcter_short(name[40]);

    return 0;
}




char make_name_to_7_charcter_short(char name[40])
{

    char seven_letter_name[40];
    for (int i = 0; i < 7; i++)
    {
        seven_letter_name[i] = name[i];
    }
    return seven_letter_name;

}