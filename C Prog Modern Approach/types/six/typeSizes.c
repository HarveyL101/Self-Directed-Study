/*
 * ***********************************************************************************
 * Name: Type Sizes in C
 * Purpose: A small program printing the size of some commonly used number data types.
 * Author: Harvey Lopez
 * ***********************************************************************************
*/

#include <stdio.h>

int main(void)
{
	printf("Below shows the amount of memory used to store common data types (Bytes):\n");
	printf("Int: %ld\n", sizeof(int));
	printf("Short: %ld\n", sizeof(short));
	printf("Long: %ld\n", sizeof(long));
	printf("Float: %ld\n", sizeof(float));
	printf("Double: %ld\n", sizeof(double));
	printf("Long Double: %ld\n", sizeof(long double));
}


