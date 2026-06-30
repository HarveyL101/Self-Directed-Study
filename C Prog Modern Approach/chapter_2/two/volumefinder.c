/*
* Name: Sphere Volume Finder
* Purpose: Calculates the volume of a sphere 
* Author: Harvey Lopez
*/
#include <stdio.h>

#define PI 3.1415

int main(void) 
{
    // formula = 4/3 * PI * r^3
    float radius;
    
    printf("What is the radius of your sphere?");
    scanf("%f", &radius);

    float result = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("The volume of a sphere with radius 10 is: %.2f", result);

    return 0;
}
