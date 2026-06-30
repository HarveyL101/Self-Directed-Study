/* 
 * ****************************************************************************************************
 * Name: 24hr to 12hr 
 * Purpose: Takes in a 24 hour time format input (HH:MM) and displays it in 12 hour form (HH:MM AM/PM).
 * Author: Harvey Lopez
 * ****************************************************************************************************
*/

#include <stdio.h>

int main(void) {
	int hours, minutes;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	if (hours < 12) {
		printf("\nEquivalent 12-hour time: %d:%d AM", hours, minutes);
	} else {
		printf("\nEquivalent 12-hour time: %d:%d PM", hours - 12, minutes);
	}

	return 0;
}
