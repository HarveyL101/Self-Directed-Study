/*
 * *******************************************************************************
 * Name: Number Reversal
 * Purpose: Takes in a two digit integer, then returns the reversal of that input.
 * Author: Harvey Lopez
 * *******************************************************************************
*/

#include <stdio.h>

int main(void)
{
	int number, firstD, secondD;

	printf("Enter a two-digit integer: ");
	scanf("%d", &number);

	firstD = number / 10;  // extract first digit
	secondD = number % 10; // extract second digit
	
	printf("The reversal is: %d%d", secondD, firstD);

	return 0;
}
