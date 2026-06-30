/*
 * ******************************************************************************************************************************
 * Name: Fraction Calculator 
 * Purpose: Improves upon the previous 'addfrac.c' program to allow all four basic operations on fraction arithmetic (+, -, *, /)
 * Author: Harvey Lopez
 * ******************************************************************************************************************************
*/

#include <stdio.h>
#include "../include/fraction_math.h"

int main(void)
{
	char operator;

	Fraction f1;
	Fraction f2;
	Fraction answer;
	
	printf("Please enter a fractional equation you want to compute.\n");
	printf("Use the format 'A/B <operator> C/D\n");
	scanf("%d/%d %c %d/%d", &f1.numerator, &f1.denominator, &operator, &f2.numerator, &f2.denominator); 

	switch (operator)
	{
		case '+':
			answer = addition(&f1, &f2);
			break;
		case '-':
			answer = subtraction(&f1, &f2);
			break;
		case '*':
			answer = multiplication(&f1, &f2);
			break;
		case '/':
			answer = division(&f1, &f2);
			break;
		default: 
			printf("Invalid Operator, please try again using (+, -, *, /)");
			break;
	}

	if (!answer.numerator || !answer.denominator)
	{
		printf("Sorry, your inputs were invalid for the operation you attempted, please try again...)\n");
	} else {
		printf("The result of your equation: (%d/%d %c %d/%d) is...\n", f1.numerator, f1.denominator, operator, f2.numerator, f2.denominator);
		printf("%d/%d\n", answer.numerator, answer.denominator);
	}

	return 0;
}
