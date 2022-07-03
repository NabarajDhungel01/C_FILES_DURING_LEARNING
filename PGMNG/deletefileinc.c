#include <stdio.h>
#include <conio.h>

int main()
{

FILE *file1;
FILE *file2;
file1 = fopen("file1.txt","w+");
file2 = fopen("file2.txt","w+");

fprintf(file1,"THis is first file");
// DELETING THE FIRST FILE: after closing;
fclose(file1);
printf("Enter any key to delete the file");
getch();
remove("file1.txt");






// fprintf(file1,"THis is first file");
// DELETING THE FIRST FILE:
// remove("file1.txt");

// fprintf(file2,"THis is second file");
// RENAMING THE SECOND FILE TO THE FIRST FILE NAME.
// int result = rename("file2.txt","filerenamed.txt");
// fclose(file2);


    // return 0;
}




