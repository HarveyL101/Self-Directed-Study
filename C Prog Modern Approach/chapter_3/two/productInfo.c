/*
******************************************************************************
 * Name: Product Info
 * Purpose: Takes in product information parameters and displays them uniformly
 * Author: Harvey Lopez
*******************************************************************************
*/

#include <stdio.h>

int main(void) {
	int itemNum, day, month, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &itemNum);

	printf("\nEnter unit price: ");
	scanf("%f", &price);

	printf("\nEnter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\tUnit Price\tPurchase Date\n%-d\t$%4.2f\t\t%-d/%d/%d\n", itemNum, price, month, day, year);

	return 0;
}
