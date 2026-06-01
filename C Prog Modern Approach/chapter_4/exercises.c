/*
 * *************************************************************************
 * Name: Chapter 4 Exercises
 * Purpose: A series of exercises relating to mathematical expressions in C.
 * Author: Harvey Lopez
 * *************************************************************************
*/

#include <stdio.h>

int main(void) {
	// 1. Show the output produced by each of the following program fragments.
	int i, j, k;
	// a.
	i = 5;
	j = 3;
	printf("Question A:\n");
	printf("%d %d\n\n", i / j, i % j);

	// b.
	i = 2;
	j = 3;
	printf("Question B:\n");
	printf("%d\n\n", (i + 10) % j);

	// c. 
	i = 7;
	j = 8;
	k = 9;
	printf("Question C:\n");
	printf("%d\n\n", (i + 10) % k / j);

	// d.
	i = 1;
	j = 2;
	k = 3;
	printf("Question D:\n");
	printf("%d\n\n", (i + 5) % (j + 2) / k);

	// 2. If i and j are positive integers, does (-i)/j always have the same value as -(i/j)?
	printf("Question 2:\n");

	for (int i = 10; i < 100; i++) {
		j = i - 5;
		printf("(-i)/j result when i=%d and j=%d: %d\n", i, j, (-i) / j);
		printf("-(i/j) result when i=%d and j=%d: %d\n\n", i, j, -(i / j));
	}
	// Answer:
	// Yes, both equations resolve to produce a negative result, which always holds 
	// the same value since the only difference between the two is the position of the '-'.

	return 0;
}
