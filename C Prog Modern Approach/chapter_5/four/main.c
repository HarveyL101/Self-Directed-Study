/*
 * ************************************************************************************************************************
 * Name: Wind force calculator
 * Purpose: Using a simplifed Beaufort scale, converts an integer input of knots to a general description of the windspeed.
 * Author: Harvey Lopez
 * ************************************************************************************************************************
*/

#include <stdio.h>

int main(void) {
	int knots;

	printf("What is the windspeed in knots?: ");
	scanf("%d", &knots);

	if (knots < 1) {
		printf("\nWindspeed: Calm");
	}
	else if (knots >= 1 && knots < 3) {
		printf("\nWindspeed: Light air");
	}
	else if (knots >= 4 && knots < 27) {
		printf("\nWindspeed: Breeze");
	}
	else if (knots >= 28 && knots < 47) {
		printf("\nWindspeed: Gale");
	}
	else if (knots >= 48 && knots < 63) {
		printf("\nWindspeed: Storm");
	}
	else if (knots > 63) {
		printf("\nWindspeed: Hurricane");
	}

	return 0;
}
