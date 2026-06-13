# C Data Types Exercises 
A series of exercise questions from Chapter 7.


### Question 1: Give the decimal value of each of the following integer constants.
* A. 077

$$
\begin{aligned}
077 &== 7 + (7 * 8) \\
    &== 64
\end{aligned}
$$

* B. 0x78

$$
\begin{aligned}
0x77 &== 7 + (7 * 16) \\
     &== 7 + 112 \\
     &== 119
\end{aligned}
$$

* C. 0XABC

$$
\begin{aligned}
0XABC &== 12 + (11 * 16) + (10 * 32) \\
      &== 12 + 176 + 320 \\
      &== 508
\end{aligned}
$$

### Question 2: Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point.
* A. 010E2
> Floating-point, the exponent operator causes the number to resolve to '01000' or '1000' in decimal.

* B. 32.1E+5
> Floating-point, once again the number can be represented as 3,210,000 in standard notation.

* C. 0790
> Integer, this number is just 790 with a leading 0.

* D. 100_000
> Integer, the underscore serves only as an improvement to readability, however the compiler will remove these and produce an output of '10000' if the raw value is printf'd.

* E. 3.978e-2
> Floating-point, this number evaluates to 0.03978 in standard notation.

### Question 3: Which of the following are not legal types in C?
* A. short unsigned int
> Legal, the ordering of short/ unsigned is irrelevant during declaration.

* B. short float
> Illegal, short's only apply to integer data types, with float being the smallest of its kind (float -> double -> long double).

* C. long double
> Legal, a long double is the largest of the floating-point types.

* D. unsigned long
Illegal, this does not specify the type of number to be stored (e.g. unsigned long *int* would be valid).

### Question 4: If `c` is a variable of type `char`, which one of the following statements are illegal?
* A. `i += c;`
> Legal, `i` would be incremented by the integer value of `c`'s ASCII character (E.g. if `c == 'a'` then it would be `i += 97`).

* B. `c = 2 * c - 1;`
> Legal, again the character would just be altered to now equal the ASCII char equivalent to `2 * c - 1`.

* C. `putchar(c);`
> Legal, this simply prints the value stored in `c` to stdout.

* D. `printf(c);`
> Illegal, this statement causes a compiler error due to `c` not being called as an argument in the valid format for `printf()` (E.g. `printf("%c", c);` would be valid)

