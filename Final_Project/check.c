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
                    char name[40];
                    // gets(name);
                    int temp_price;
                    temp_price = 10;
                    int qt;
                    qt = 20;
                    int temp_total_price;
                    temp_total_price = 23;
                    

                    // This will shorten the name of the product to print on the bill

                    // 
                    

                    // This will shorten the name of the product to print on the bill


                            // printf("\t\tCustomer's Bill");
                            // printf("\tMr.Navy Cyber Store");
                            // printf("\tLos Angeles, USA");
                            // printf("\n");

                            // printf("Particulars   Rate   Qty.   Amount\n");
                            // printf("%s                                        ", shorten_name);
                            // printf("              %d",temp_price);
                            // printf("                      %d",qt);
                            // printf("                                 %d",temp_total_price);

                // FILE *ptr;
                // ptr = fopen("name.txt","w+");

                // for (int i = 0; i < 10; i++)
                // {
                //     fprintf(ptr,"%c",name[i]);
                // }

                // fclose(ptr);


                
    // char fname[128];
    // printf("Enter .txt file name \n");
    // scanf("%123s", fname); // for buffer of 124 bytes
    // strcat(fname, ".txt"); // this will add the .txt and file name together
    // FILE *inputf;
    // getch();
    // inputf = fopen(fname, "w");

    // // To PRINT THE NAME IN THE FILE

    FILE *fp1;
fp1 = fopen("ProductDetails.dat","r");



    fscanf(fp1, "%i %s %s %i %i\n", &pdt.product_code, pdt.product_name, pdt.product_company, &pdt.product_price, &pdt.product_quantity);

    printf("***Found***      || Name || :- \"%s\"  || Rate || :- \"%d\"  ||Total Qty.|| :- \"%d\" ", pdt.product_name, pdt.product_price, pdt.product_quantity);



fclose(fp1);

}
