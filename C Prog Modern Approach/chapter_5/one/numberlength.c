/*
 * ********************************************************************************
 * Name: Number Length
 * Purpose: Takes in an integer and returns the number of digits within that input.
 * Author: Harvey Lopez
 * ********************************************************************************
*/

#include <stdio.h>

int main(void) {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0) {
		printf("Number is negative and therefore invalid");
	}
	else if (number <= 9) {
		printf("The number %d has 1 digit.", number);
	}
	else if (number <= 99) {
		printf("The number %d has 2 digits.", number);	
	}
	else if (number <= 999) {
		printf("The number %d has 3 digits.", number);
	}
	else if (number >= 1000) {
		printf("The number %d has 4 digits.", number);
	}
	else {
		printf("Invalid number");
	}

	return 0;
}

