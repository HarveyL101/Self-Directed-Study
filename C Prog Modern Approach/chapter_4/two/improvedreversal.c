/*
 * *********************************************************************************
 * Name: Improved Number Reversal
 * Purpose: Takes in a three digit integer, then returns the reversal of that input.
 * Author: Harvey Lopez
 * *********************************************************************************
*/

#include <stdio.h>

int main(void)
{
	int number, firstDigit, secondDigit, thirdDigit;

	printf("Enter a three-digit number: ");
	scanf("%d", &number);

	firstDigit = number / 100;                                           // Extract hundreds
	secondDigit = (number - (firstDigit * 100)) / 10;                    // Extract tens
	thirdDigit = (number - (firstDigit * 100) - (secondDigit * 10)) / 1; // Extract units

	printf("\nThe reversal is: %d%d%d", thirdDigit, secondDigit, firstDigit);

	return 0;
}
