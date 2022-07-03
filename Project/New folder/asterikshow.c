#include <stdio.h>
#include <conio.h>
int main()
{
char pword[20];
char c;
int i;
printf(" \n     PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

    return 0;
}
