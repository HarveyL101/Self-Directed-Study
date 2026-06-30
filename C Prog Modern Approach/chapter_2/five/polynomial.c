/*
* Name: Polynomial Resolver
* Purpose: Takes in an X value and displays the value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
* Author: Harvey Lopez
*/

#include <stdio.h>

int main(void) 
{
    float x;
    
    printf("Consider the following formula: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value for X: ");
    scanf("%f", &x);

    float result = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6); 

    printf("The result of the polynomial with value (%.2f) is %.2f", x, result);

    return 0;
}
