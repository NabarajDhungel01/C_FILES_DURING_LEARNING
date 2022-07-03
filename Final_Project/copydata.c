#include <stdio.h>

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

FILE *fp1;
FILE *fp2;
fp1 = fopen("text.dat","r+");
fp2 = fopen("ProductDetails.dat","w+");


while(fscanf(fp1,"%i %s %s %i %i",&pdt.product_code,pdt.product_name,pdt.product_company,&pdt.product_price,&pdt.product_quantity)!= EOF)
        {
            printf("%d\n",pdt.product_code);
            fprintf(fp2, "%i %s %s %i %i\n",pdt.product_code, pdt.product_name, pdt.product_company, pdt.product_price, pdt.product_quantity);
        }
fclose(fp1);
fclose(fp2);
    return 0;
}