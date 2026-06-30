/*
* Name: Bill Counter(?)
* Purpose: Takes in an amount of cash, and deduces how to pay in the fewest number of notes
* Author: Harvey Lopez
*/
#include <stdio.h>

int main(void)
{
    int amount, twenties, tenners, fivers, ones;

    printf("Enter an amount of cash in dollars: ");
    scanf("%d", &amount);

    twenties = amount / 20;
    amount   = amount - 20 * twenties;

    tenners = amount / 10;
    amount  = amount - 10 * tenners;

    fivers = amount / 5;
    amount = amount - 5 * fivers;

    ones   = amount / 1;
    amount = amount - 1 * ones;

    printf("\n$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tenners);
    printf(" $5 bills: %d\n", fivers);
    printf(" $1 bills: %d\n", ones);
}
