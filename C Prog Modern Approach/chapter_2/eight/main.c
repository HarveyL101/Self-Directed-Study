/*
* Name: Loan Calculator
* Purpose: Takes in a loan amount, interest rate and monthly payment and calculates the balance remaining after the first, second and third months of payments.
* Author: Harvey Lopez
*/

#include <stdio.h>

int main(void)
{
    float loan, rate, payment;

    printf("Enter the amount of loan left to pay ($XXXX.XX): ");
    scanf("%f", &loan);

    printf("Enter the interest rate of your loan (X.X): ");
    scanf("%f", &rate);

    printf("Enter the monthly payment you will be making (XXX.XX): ");
    scanf("%f", &payment);

    // convert to percentage, then split by month
    float monthlyInterest = (rate / 100) / 12;
    
    float firstMonthBalance  = (loan - payment) + (loan * monthlyInterest);
    float secondMonthBalance = (firstMonthBalance - payment) + (firstMonthBalance * monthlyInterest);
    float thirdMonthBalance  = (secondMonthBalance - payment) + (secondMonthBalance * monthlyInterest);

    printf("\nBalance remaining after first payment: $%.2f\n", firstMonthBalance);
    printf("Balance remaining after second payment: $%.2f\n", secondMonthBalance);
    printf("Balance remaining after third payment: $%.2f\n", thirdMonthBalance);

    return 0;
}
