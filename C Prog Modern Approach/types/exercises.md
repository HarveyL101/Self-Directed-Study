<p align="center">
# C Data Types Exercises
</p>
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

### Question 5: Which one of the following is not a legal way to write the number 65? (Assume that the character set is ASCII.)
* A. 'A'
> Legal, the ASCII code for `'A'` is 65.

* B. 0b1000001
> Legal, 1000001 in binary can be represented as:

$$
64 + 1 == 65
$$

* C. 0101
> Illegal, the octal 0101 can be represented as:

$$
\begin{aligned}
    0101 &== 1 + (0 * 8) + (1 * 16) \\
         &== 1 + 0 + 16 \\
         &== 17
\end{aligned}
$$

> Which is not equal to 65.

* D. 0x41
> Legal, the hexadecimal 0x41 can be represented as:

$$
\begin{aligned}
    0x41 &== 1 + (4 * 16) \\
         &== 1 + 64 \\
         &== 65
\end{aligned}
$$

### Question 6: For each of the following items of data, specify which one of the types `char`, `short`, `int` or `long` is the smallest one guaranteed to be large enough to store the item.
* A. Days in a month.
> `short int`

* B. Days in a year.
> `short int`

* C. Minutes in a day.
> `short int`

* D. Seconds in a day.
> `int`

### Question 7: For each of the following character escapes, give the equivalent octal escape. (Assume that the character set is ASCII.)
* A. `\b` (backspace)
> `010` is backspace in octal. 

* B. `\n` (new line)
> `012` is new line feed in octal.

* C. `\r` (carriage return)
> `015` is carriage return in octal.

* D. `\t` (horizontal tab)
> `011` is horizontal tab in octal.

### Question 8: Repeat Exercise 7 but in hexadecimal instead.
* A. hex backspace
> `8`

* B. hex new line
> `A`

* C. hex carriage return
> `D`

* D. hex horizontal tab
> `9`

### Question 9: Suppose that `i` and `j` are variables of type `int`. What is the type of the expression `i / j + 'a'`?
> 
