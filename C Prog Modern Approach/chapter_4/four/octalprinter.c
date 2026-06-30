/*
 * **************************************************************************
 * Name: Octal Converter
 * Purpose: Takes in a user's integer and converts it to octal form (base 8).
 * Author: Harvey Lopez
 * **************************************************************************
*/

#include <stdio.h>

int main(void)
{
	int number, d1, d2, d3, d4, d5, octal;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &number);

	d5 = number % 8;
	number /= 8;
	d4 = number % 8;
	number /= 8;
	d3 = number % 8;
	number /= 8;
	d2 = number % 8;
	number /= 8;
	d1 = number % 8;
	number /= 8;
	
	octal = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d4 + d5;

	printf("In octal your number is: %.5d\n", octal);

	return 0;
}
