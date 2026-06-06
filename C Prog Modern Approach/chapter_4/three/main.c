/*
 * *************************************************************
 * Name: Refactored Number Reversal
 * Purpose: Takes in a three digit integer, then returns 
 * 	    the reversal of that input without using arithmetic.
 * Author: Harvey Lopez
 * *************************************************************
*/

#include <stdio.h>

int main(void)
{
	// int number is made redundant during Q3's rewrite
	int firstDigit, secondDigit, thirdDigit;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

	printf("\nThe reversal is: %d%d%d", thirdDigit, secondDigit, firstDigit);

	return 0;
}
