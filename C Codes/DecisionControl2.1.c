//This Code is Exclusively Written by Lucky :)
#include <stdio.h>

int main()
{
    int quantity, discount, Total, finalAmount;
    int price = 420;

    printf("Enter the Quantity for the Purchase :- ");
    scanf("%d", &quantity);

    printf("The Price of each Product :- %d\n", price);

    Total = quantity * price;

    printf("The total Bill without Discount :- %d\n", Total);

    printf("Checking if Discount is applicable or not Today...\n");

    if (quantity > 1000)
    {
        printf("The Discount is applicable for you :-\n");

        discount = Total * 10 / 100;
        finalAmount = Total - discount;

        printf("Discount Amount = %d\n", discount);
        printf("Final Bill after Discount = %d\n", finalAmount);
    }
    else
    {
        printf("The Discount is Non-Applicable for you :-\n");

        finalAmount = Total;

        printf("Final Bill = %d\n", finalAmount);
    }

    return 0;
}