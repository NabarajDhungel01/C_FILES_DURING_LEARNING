#include <stdio.h>
#include <conio.h>
#include <string.h>

void del();
int main()
{

void del();

    return 0;
}

void del()
{
    int flag;
    char x[ANS];
    FILE *file, *file1;
    system("cls");
    // textbackground(11);
    // textcolor(0);
    window(23, 51, 25, 34);
    gotoxy(29, 18);
    printf("DELETE ARTICLES");
    gotoxy(27, 27);
    printf("enter item code: ");
    scanf("%s", x);
    flag = check(x);
    if (flag == 0)
    {
        file1 = fopen("record1.txt", "ab");
        file = fopen("record.tx8t", "rb");
        rewind(file);
        while (fread(&item, sizeof(item), 1, file))
        {
            if (strcmp(item.code, x) != 0)
                fwrite(&item, sizeof(item), 1, file1);
        }
        gotoxy(27, 29);
        printf("---item deleted---");
        remove("record.txt");
        rename("record1.txt", "record.txt");
    }
    if (flag == 1)
    {
        gotoxy(25, 29);
        printf("---item does not exist---");
        gotoxy(30, 31);
        printf("TRY AGAIN");
    }
    fclose(file1);
    fclose(file);
    getch();
    // d_mainmenu();
}