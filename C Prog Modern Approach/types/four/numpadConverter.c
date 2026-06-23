/*
 * *************************************************************************************************
 * Name: Numpad Converter
 * Purpose: Converts a piece of text into a numberpad style integer format (E.g. CALLATT = 2255288).
 * Author: Harvey Lopez
 * *************************************************************************************************
*/

#include <stdio.h>

int main(void) 
{
	printf("Enter phone number: ");
	char c = getchar();

	while (c != '\n')
	{
		switch(c)
		{
			// switch case using fall through cases to avoid repetitive if statements
			case 'A':
			case 'B':
			case 'C': printf("%d", 2); c = getchar(); break;
			
			case 'D':
			case 'E':
			case 'F': printf("%d", 3); c = getchar(); break;

			case 'G':
			case 'H':
			case 'I': printf("%d", 4); c = getchar(); break;
			
			case 'J':
			case 'K':
			case 'L': printf("%d", 5); c = getchar(); break;

			case 'M':
			case 'N':
			case 'O': printf("%d", 6); c = getchar(); break;

			case 'P':
			case 'R':
			case 'S': printf("%d", 7); c = getchar(); break;

			case 'T':
			case 'U':
			case 'V': printf("%d", 8); c = getchar(); break;

			case 'W':
			case 'X':
			case 'Y': printf("%d", 9); c = getchar(); break;

			default: printf("%c", c); c = getchar(); break;
			
		}
	}	

	return 0;
}
