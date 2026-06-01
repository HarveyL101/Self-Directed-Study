/*************************************************
 * Name: Date Display
 * Purpose: Takes in a date of format 'mm/dd/yyyy' 
 * 	    and displays it in the form 'yyyymmdd'
 * Author: Harvey Lopez
 * ***********************************************
*/

#include <stdio.h>

int main(void) {
	int day, month, year;

	printf("Please enter a date in the format of 'mm/dd/yyyy': ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\nYou entered the date %d%d%d\n", year, month, day);

	return 0;
}
