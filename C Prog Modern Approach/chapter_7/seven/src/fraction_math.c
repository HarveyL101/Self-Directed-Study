/*
 * ******************************************************************************************************
 * Name: Fraction Maths 
 * Purpose: A hold-all file for the maths logic of fraction addition/subtraction/multiplication/division.
 * Author: Harvey Lopez
 * ******************************************************************************************************
*/

#include "../include/fraction_math.h"
#include <stdio.h>

// GCD helper function for simplifying fraction results.
int gcd(int n1, int n2)
{
	if (n1 == 0) return n2;
	return gcd(n2 % n1, n1);
}

Fraction addition(Fraction *f1, Fraction *f2)
{
	Fraction result = { 0, 0 };

	// Simple fraction addition.
	if (f1->denominator == f2->denominator)
	{
		result.numerator = f1->numerator + f2->numerator;
		result.denominator = f1->denominator;
	} else {
		// Formula = (num1*denom2 + num2*denom1) / (denom1*denom2)
		// Cross multiplies to find the resulting numerator.
		result.numerator = (f1->numerator * f2->denominator) + 
				   (f2->numerator * f1->denominator);

		// Multiply both denominators to find the LCM.
		result.denominator = f1->denominator * f2->denominator;

		// Simplification of the resulting fraction.
		int divisor = gcd(result.numerator, result.denominator);

		result.numerator   /= divisor;
		result.denominator /= divisor;
	}

	return result;
}

Fraction subtraction(Fraction *f1, Fraction *f2)
{
	Fraction result = { 0, 0 };

	if (f1->numerator * f2->denominator < 
	    f2->numerator * f1->denominator)
	{
		printf("This program does not handle negative fractions\n");
		return result;
	}
	
	// Formula = (num1*denom2 - num2*denom1) / (denom1*denom2)
	result.numerator = f1->numerator * f2->denominator - 
	    		   f2->numerator * f1->denominator;

	result.denominator = f1->denominator * f2->denominator;
	
	// Simplification of the resulting fraction.
	int divisor = gcd(result.numerator, result.denominator);

	result.numerator   /= divisor;
	result.denominator /= divisor;

	return result;
}

Fraction multiplication(Fraction *f1, Fraction *f2)
{
	Fraction result = { 0, 0 };

	result.numerator = f1->numerator * f2->numerator;
	result.denominator = f1->denominator * f2->denominator;

	int divisor = gcd(result.numerator, result.denominator);

	result.numerator   /= divisor;
	result.denominator /= divisor;

	return result;
}

Fraction division(Fraction *f1, Fraction *f2)
{
	// Uses the Keep, Change, Flip method.
	// E.g. 2/3 / 3/7 = 2/3 * 7/3
	
	Fraction result = { 0, 0 };

	result.numerator = f1->numerator * f2->denominator;
	result.denominator = f1->denominator * f2->numerator;
	
	int divisor = gcd(result.numerator, result.denominator);

	result.numerator   /= divisor;
	result.denominator /= divisor;

	return result;
}
