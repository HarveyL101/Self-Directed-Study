/*
 * **********************************************************************************************************
 * Name: Income Tax Calculator
 * Purpose: Takes in the users taxable income, and displays the amount necessary to pay for their income tax.
 * Author: Harvey Lopez
 * **********************************************************************************************************
*/

#include <stdio.h>

int main(void) {
	float income, tax;

	printf("Enter your taxable income in dollars ($XX.XX): ");
	scanf("$%f", &income);

	if (income < 750) {
		tax = income * 0.01;
	}
	else if (income >= 750 && income < 2250) {
		tax = 7.50 + ((income - 750) * 0.02);
	}
	else if (income >= 2250 && income < 3750) {
		tax = 37.50 + ((income - 2250) * 0.03);
	}
	else if (income >= 3750 && income < 5250) {
		tax = 82.50 + ((income - 3750) * 0.04);
	}
	else if (income >= 5250 && income < 7000) {
		tax = 142.50 + ((income - 5250) * 0.05);
	}
	else if (income >= 7000) {
		tax = 230.00 + ((income - 7000) * 0.06);
	}

	printf("Based on your income of: $%.2f \nYour income tax is: $%.2f", income, tax);

	return 0;
}
