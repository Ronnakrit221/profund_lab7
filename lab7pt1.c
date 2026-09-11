#include <stdio.h>
#include <string.h>
#include <conio.h>
#define SIZE 10

int main()
{
    int sell_index, sell_amount;
    char choice;
    //struct product
    struct Product
    {
        char name[50];
        int price, remain;
    }product[SIZE];

    //for loop
    printf("----Enter Product Info----------------------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Product Name[%d] : ",i+1);scanf("%s",product[i].name);
        printf("Price : ");scanf("%d",&product[i].price);
        printf("Remaining : ");scanf("%d",&product[i].remain);
        printf("--------------------------------------------\n");
    }
    printf("\n");


    printf("----Product List----------------------------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d. Product Name : %s\n Price: : %d\n Remain : %d\n",i+1,product[i].name,product[i].price,product[i].remain);
        printf("--------------------------------------------\n");
    }
    
    do
    {
        printf("----Sell Product-------------------------\n");
        printf("Number of Product [1-10] : ");scanf("%d", &sell_index);

        if(sell_index >= 1 && sell_index <= 10)
        {
            printf("Selling '%s'Enter quantity to sell: ",product[sell_index-1].name);scanf("%d",&sell_amount);

            if(sell_amount <= product[sell_index-1].remain)
            {
                product[sell_index-1].remain -= sell_amount;
                printf("Sold %d Item of %s \n",sell_amount,product[sell_index-1].name);
                printf("remain : %d",product[sell_index-1].remain);
            }else{
                printf("Error Not enough");
            }
        }else{
            printf("Error Invalid number");
        }
        printf("\nDo you want to sell again? (y/n): ");
        choice = getch();
        printf("%c\n", choice);

    }while (choice == 'y' || choice == 'Y');
}