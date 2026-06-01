/*
 * ****************************************************************************************************
 * Name: Phone Formatter
 * Purpose: Takes in a phone number of format (xxx) xxx-xxxx and displays it in the format xxx.xxx.xxxx
 * Author: Harvey Lopez
 * ****************************************************************************************************
*/

#include <stdio.h> 

int main(void) {
	int countryCode, firstBlock, secondBlock;

	printf("Enter phone number {(xxx) xxx-xxxx}: ");
	scanf("(%d) %d-%d", &countryCode, &firstBlock, &secondBlock);

	printf("\nYou entered: %d.%d.%d", countryCode, firstBlock, secondBlock); 

	return 0;
}
