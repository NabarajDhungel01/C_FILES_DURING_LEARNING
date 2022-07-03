#include <stdio.h>

int main()
{

FILE *ptr;      
FILE *ptr2;     
ptr = fopen("file2.txt","r");
ptr2 = fopen("filetwo.txt","w");
char ch;        
while (!feof(ptr))
{               
    while (fscanf(ptr,"%c",&ch) == 1)// dont use %s here will cause error 
    // wil.exe stopped 
    {           
       printf("%c",ch);// dont use %s here will cause error 
       // wil.exe stopped 
       fprintf(ptr2, "%c", ch);// dont use %s here will cause error 
       fprintf(ptr2, "%c", ch);// dont use %s here will cause error 
    }
}
fclose(ptr);
fclose(ptr2);
    return 0;
}
