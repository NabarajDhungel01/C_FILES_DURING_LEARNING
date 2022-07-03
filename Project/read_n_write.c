#include <stdio.h>
#include <conio.h>

struct product
{
    char product_name[30];
    char product_company[40];
    char c;
    int product_code;
    int product_price;
    int product_quantity;
} pdt;


int main()
{
    FILE *fp;
    FILE *tp;


    fp = fopen("Pfile.txt","a+");
    tp = fopen("Tfile.txt","a+");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",i);
    scanf("%s %s %d %d %d\n",&pdt.product_name, &pdt.product_company, &pdt.product_code, &pdt.product_price, &pdt.product_quantity);
    fprintf(fp,"%s %s %d %d %d\n",pdt.product_name, pdt.product_company, pdt.product_code, pdt.product_price, pdt.product_quantity);
    }
    
    
    while (fscanf(fp,"%s %s %d %d %d\n",&pdt.product_name, &pdt.product_company, &pdt.product_code, &pdt.product_price, &pdt.product_quantity)!=EOF)
    {
    fprintf(tp,"%s %s %d %d %d\n",pdt.product_name, pdt.product_company, pdt.product_code, pdt.product_price, pdt.product_quantity);
    }
    
    fclose(fp);
    fclose(tp);
    remove("Pfile.txt");
    getch();
    rename("Tfile.txt","Pfile.txt");
}