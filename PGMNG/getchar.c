#include <stdio.h>
int main()
{
    char flag;
    /* Our first simple C basic program */
    printf("Hello World! ");
    printf("Do you want to continue Y or N");
    flag = getche(); // It waits for keyboard input.
    if (flag == 'Y')
    {
       printf("You have entered Yes");
    }
    else
    {
       printf("You have entered No");
    }
    return 0;
}