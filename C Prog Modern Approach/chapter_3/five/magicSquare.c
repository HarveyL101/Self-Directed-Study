/*
 * Name: Magic Square Program
 * Purpose: Prompts the user to enter the numbers from 1-16 in any order. If these numbers are arranged in a 4x4 matrix and their rows, columns and diagonal sums are all the same, the square is said to be 'magical'. (Proposed in a 1514 engraving by Albrecht Durer
 * Author: Harvey Lopez
*/

#include <stdio.h>

int main(void) {
	int n = 16; // 16 numbers
	int array[n];

	for(int i = 0; i < n; i++) {
		printf("\n(%d) Please enter a number: ", i + 1);
		scanf("%d", &array[i]);
	}
	
	int rowSumSize = 4;
	int rowSum[rowSumSize];
	
	int columnSumSize = 4;
	int columnSum[columnSumSize];
	
	int diagSumSize = 2;
	int diagSum[diagSumSize];

	// Runs through the array summing rows
	for(int i = 0; i < rowSumSize; i++) {
		rowSum[i] = array[0 + (4 * i)] + array[1 + (4 * i)] + array[2 + (4 * i)] + array[3 + (4 * i)];
	} 

	// Runs through the array summing columns
	for(int i = 0; i < columnSumSize; i++) {
		columnSum[i] = array[i] + array[i + 4] + array[i + 8] + array[i + 12];
	}

	// Counts the diagonal sums of the array
	diagSum[0] = array[0] + array[5] + array[10] + array[15];
	diagSum[1] = array[3] + array[6] + array[9] + array[12];

	printf("\nRow sums: %d %d %d %d\n", rowSum[0], rowSum[1], rowSum[2], rowSum[3]);
	printf("Column sums: %d %d %d %d\n", columnSum[0], columnSum[1], columnSum[2], columnSum[3]);
	printf("Diagonal sums: %d %d\n", diagSum[0], diagSum[1]);
}
