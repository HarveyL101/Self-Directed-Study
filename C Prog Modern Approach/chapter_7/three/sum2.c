/*
 * *******************************************************************************
 * Name: Sum2 improved
 * Purpose: An improved summing program modified to include floating point values.
 * Author: Harvey Lopez
 * *******************************************************************************
*/

#include <stdio.h>

int main(void)
{
	// Modify the Sum2.c program to include double types.
	double  n, sum = 0;

	printf("This program sums a series of integers or doubles.\n");
	printf("Enter numbers (0.0 to terminate): ");

	scanf("%lf", &n);
	while (n != 0.0)
	{
		sum += n;
		scanf("%lf", &n);
	}

	printf("The sum is: %.2lf\n", sum);

	return 0;
}
