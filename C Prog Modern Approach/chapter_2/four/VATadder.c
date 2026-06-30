/*
* Name: VAT Adder
* Purpose: Takes in a simple amount of money and adds a 5% VAT on it
* Author: Harvey Lopez
*/

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Please Enter A Dollars & Cents Amount Of Money (E.g. 99.99): \n $");
    scanf("%f", &amount);

    printf("With VAT Added: $%.2f", amount * 1.05f);

    return 0;
}
