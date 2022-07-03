#include <stdio.h>
#include <string.h>
#include <conio.h>

#define ANS 15
#define ACS 3

typedef struct
{
    char name[ANS],code[ACS];
    float rate;
    int quantity;
} rec;
rec item;

void del();
int main()
{
del();
}

/*function to delete records*/
void del()
{
    int flag;
    char x[ANS];
    FILE *file,*file1;
                    // printf("DELETE ARTICLES");
                    // printf("enter item code: ");
                    // scanf("%s",x);

                        file1=fopen("abcd.txt","ab");
                        file=fopen("abcd.txt","rb");
                    //     rewind(file);
                    //     while (fread(&item,sizeof (item),1,file))
                    //     {
                    //         if(strcmp(item.code,x)!=0)
                    //             fwrite(&item,sizeof(item),1,file1);
                    //     }
        printf("---item deleted---");
        
        remove("abc.txt");
        printf("\nCHECK");
        
        getch();
        rename("abcd.txt","abcdee.txt");
        
        printf("\nCHECK2");
        printf("\nCHECK2");
        printf("\nCHECK2");
        getch();
        
         fclose(file1);
         fclose(file);

}
