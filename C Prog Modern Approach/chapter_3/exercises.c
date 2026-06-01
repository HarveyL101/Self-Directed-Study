/***********************
 * Name: Chapter 3 Exercises
 * Purpose: A set of exercises relating to the printf & scanf functionality
 * Author: Harvey Lopez
************************/

#include <stdio.h> 

int main(void) {
	// 1. What output do the following calls of 'printf' produce?
	printf("Question 1:\n");
	// a.
	printf("Question A:\n");
	printf("%6d, %4d\n\n", 86, 1040);
	// output: "    86, 1040"
	
	// b. 
	printf("Question B:\n");
	printf("%12.5e\n\n", 30.253);
	// output: " 3.02530e+01"
	
	// c.
	printf("Question C:\n");
	printf("%.4f\n\n", 83.162);
	// output: "83.1620"
	
	// d.
	printf("Question D:\n");
	printf("%-6.2g\n\n", .0000009979);
	// output: "83.16201e-06"
	
	
	// 2. Write calls of 'printf' that display a float variable x in the following formats
	float x = 1337.118118;
	printf("Question 2:\n");
	// a. Exponential notation; left-justified in a field size 8; one digit after the decimal point.
	printf("Question A:\n");
	printf("%-8.1e\n\n", x);

	// b. Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
	printf("Question B:\n");
	printf("%10.6e\n\n", x);

	// c. Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
	printf("Question C:\n");
	printf("%-8.3f\n\n", x);

	// d. Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
	printf("Question D:\n");
	printf("%6.0f\n\n", x);

	// 3. For each of the following pairs of 'scanf' format strings, indicate where or not the two strings are equivalent.
	//    If they're not, show how they can be distinguished.
	
	// a. "%d" versus " %d"
	
	// Output: 
	// Equivalent, leading whitespaces are skipped when reading the integer.
	
	// b. "%d-%d-%d" versus "%d -%d -%d"

	// Output:
	// Not equivalent, the second string expects a whitespace before its second & third parameter,
	// failing in cases like {input}<Enter>.
	
	// c. "%f" versus "%f "
	// Output:
	// Not equivalent, trailing whitespaces may cause unwanted waiting for 'correct' inputs.
	
	// d. "%f,%f" versus "%f, %f"
	// Output:
	// Equivalent, %f skips leading whitespaces after the comma.
	
	return 0;
}
