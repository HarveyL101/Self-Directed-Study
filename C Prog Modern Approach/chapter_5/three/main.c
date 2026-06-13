/*
 * **********************************************************************
 * Name: Broker
 * Purpose: Improves upon broker.c found in section 5.2 of this textbook.
 * Author: Harvey Lopez
 * **********************************************************************
*/

#include <stdio.h>

int main(void) {
	// TODO: Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
	// TODO: Add statements that compute the commission charged by a rival broker ($33 plus 3c per share for fewer 
	// 	 than 2000 shares; $33 plus 2c per share for 2000 shares or more). Display the rival’s commission as 
	// 	 well as the commission charged by the original broker.

	// INFO
	/*
	Transaction size | Commission rate 

	Under $2,500     |  $30 + 1.7%

	$2,500-$6,250    |  $56 + 0.66%

	$6,250-$20,000   |  $76 + 0.34%

	$20,000-$50,000  |  $100 + 0.22%

	$50.000-$500,000 |  $155 + 0.11%

	Over $500,000    |  $255 + 0.09%
	*/


	int shareNumber;
	float sharePrice, tradeValue, commission;

	printf("What is the number of shares and their unit price? (volume/price): ");
	scanf("%d/%f", &shareNumber, &sharePrice);

	tradeValue = shareNumber * sharePrice;

	if (tradeValue < 2500) {
		commission = 30 + (tradeValue * 0.017);
	}
	else if (tradeValue >= 2500 && tradeValue < 6250) {
		commission = 56 + (tradeValue * 0.0066);
	}
	else if (tradeValue >= 6250 && tradeValue < 20000) {
		commission = 76 + (tradeValue * 0.0034);
	}
	else if (tradeValue >= 20000 && tradeValue < 50000) {
		commission = 100 + (tradeValue * 0.0022);
	}
	else if (tradeValue >= 50000 && tradeValue < 500000) {
		commission = 155 + (tradeValue * 0.0011);
	}
	else if (tradeValue >= 500000) {
		commission = 255 + (tradeValue * 0.0009);
	}

	printf("\nCommission: $%.2f", commission);

	return 0;
}
