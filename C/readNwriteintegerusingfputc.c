#include <stdio.h>
                                    // head for sleep function #include <unistd.h>
int main()
{
FILE *ptr;
FILE *ptr2;
ptr = fopen("file2.txt","r");
ptr2 = fopen("filetwo.txt","w");
char ch;
ch = fgetc(ptr);
while (ch != EOF )
{
    fputc(ch,ptr2);
    ch = fgetc(ptr); 
}
fclose(ptr);
fclose(ptr2);
}
