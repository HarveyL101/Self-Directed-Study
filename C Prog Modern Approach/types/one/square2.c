/*
 * *************************************************************
 * Name: Square2 improved
 * Purpose: An improved function that prints a table of squares.
 * Author: Harvey Lopez
 * *************************************************************
*/

#include <stdio.h>

// Run the program and determine the smallest n value that causes failure. Then try again changing the types of i to see how many bits are used to store integer types.
int main(void) 
{
	// int   = anything below 1 broke the program, not producing any outputs to the terminal.
	// short = again, anything below one caused the program to not print a response.
	// long  = Same result again?
	
	// Conclusion: Unsure if theres been a typo? The result is the same due to all types being integers and 
	// 	       non-floating point, so anything < 1 will cause nothing to be printed out. If anything the 
	// 	       bits stored by the machine would be visible after breaking the program with large numbers? 
	// 	       I thought i made have misunderstood and tried negative numbers but these had no effect either.
	int  i, n;
	// short i;
	// long i;

	// Question 2: Modify the program so that "Press Enter to continue..." is output after every 24 squares.
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++)
	{
		printf("%10d%10d\n", i, i * i);
		if (i % 24 == 0)
		{
			printf("Press Enter to continue...");
			getchar();

			while (getchar() != '\n')
				;
		}
	}

	return 0;
}
