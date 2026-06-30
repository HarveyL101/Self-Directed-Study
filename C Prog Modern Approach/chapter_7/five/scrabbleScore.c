/*
 * *******************************************************************************************************************
 * Name: Scrabble Score Converter
 * Purpose: Takes in a series of characters and converts them to a numerical score similar to the board game Scrabble.
 * Author: Harvey Lopez
 * *******************************************************************************************************************
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int score = 0;
	char c;

	printf("Enter a word: ");
	
	while ((c = getchar()) != '\n')
	{
		c = toupper(c);

		switch(c)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'S':
			case 'T':
			case 'U': score = score + 1; break;

			case 'D':
			case 'G': score = score + 2; break;

			case 'B':
			case 'C':
			case 'M':
			case 'P': score = score + 3; break;

			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y': score = score + 4; break;

			case 'K': score = score + 5; break;

			case 'J':
			case 'X': score = score + 8; break;

			case 'Q':
			case 'Z': score = score + 10; break;

			default: break;

		}
	}

	printf("Your word's value in Scrabble is: %d\n", score);

	return 0;
}
