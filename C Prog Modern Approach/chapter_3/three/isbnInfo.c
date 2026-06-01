/*
*************************************************************************
 * Name: ISBN Info
 * Purpose: Takes in an International Standard Book Number (ISBN) code,
 * 	    and extracts the information encoded into its 13 digit string
 * Author: Harvey Lopez
*************************************************************************
*/

#include <stdio.h>

int main(void) {
	// Example ISBN Code: 978-0-393-97950-3
	int prefix, groupIdentifier, publisher, itemNumber, checkDigit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix, &groupIdentifier, &publisher, &itemNumber, &checkDigit);

	printf("\nGS1 Prefix:\t\t%-d \nGroup Identifier:\t%-d \nPublisher Code:\t\t%-d \nItem Number:\t\t%-d \nCheck Digit:\t\t%-d\n", prefix, groupIdentifier, publisher, itemNumber, checkDigit);

	return 0;
}
