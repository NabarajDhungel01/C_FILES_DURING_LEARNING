#include <stdio.h>
#include <string.h>
int main()
{
FILE *ptr;
ptr = fopen("append.txt","w");
char name;
printf("Enter the name : \n");
scanf("%s",&name);
for (int i = 0; i <=strlen(name); i++)
{
fprintf(ptr, "%s", name);
}
fclose(ptr);
    return 0;
}
