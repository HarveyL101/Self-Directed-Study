/*
 * *********************************************************************************************************
 * Name: Add Fractions
 * Purpose: Takes in two fractions, allowing the format 'a/b+c/d' to be a valid input for fraction addition.
 * Author: Harvey Lopez
 * *********************************************************************************************************
*/

#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter your equation (a/b+c/d): ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("\nThe sum of your equation is %d/%d\n", result_num, result_denom);

	return 0;
}
