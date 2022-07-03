#include <stdio.h>
                                    // head for sleep function #include <unistd.h>
int main()
{
int num;
FILE *ptr;
ptr = fopen("file1.txt","r");
while (!feof(ptr))
{
    while (fscanf(ptr, "%d", &num) == 1)
{
printf("%d ",num);
}
                                 // sleep(1); // used to delay 
}

fclose(ptr);
}
