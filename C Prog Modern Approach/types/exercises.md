<h1 align="center">C Data Types Exercises</h1>

A series of exercise questions from Chapter 7.


### Question 1: Give the decimal value of each of the following integer constants.
1. 077

$$
\begin{aligned}
077 &== 7 + (7 * 8) \\
    &== 64
\end{aligned}
$$

2. 0x78

$$
\begin{aligned}
0x77 &== 7 + (7 * 16) \\
     &== 7 + 112 \\
     &== 119
\end{aligned}
$$

3. 0XABC

$$
\begin{aligned}
0XABC &== 12 + (11 * 16) + (10 * 32) \\
      &== 12 + 176 + 320 \\
      &== 508
\end{aligned}
$$

### Question 2: Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point.
1. 010E2
> Floating-point, the exponent operator causes the number to resolve to '01000' or '1000' in decimal.

2. 32.1E+5
> Floating-point, once again the number can be represented as 3,210,000 in standard notation.

3. 0790
> Integer, this number is just 790 with a leading 0.

4. 100_000
> Integer, the underscore serves only as an improvement to readability, however the compiler will remove these and produce an output of '10000' if the raw value is printf'd.

* E. 3.978e-2
> Floating-point, this number evaluates to 0.03978 in standard notation.

### Question 3: Which of the following are not legal types in C?
1. short unsigned int
> Legal, the ordering of short/ unsigned is irrelevant during declaration.

2. short float
> Illegal, short's only apply to integer data types, with float being the smallest of its kind (float -> double -> long double).

3. long double
> Legal, a long double is the largest of the floating-point types.

4. unsigned long
Illegal, this does not specify the type of number to be stored (e.g. unsigned long *int* would be valid).

### Question 4: If `c` is a variable of type `char`, which one of the following statements are illegal?
1. `i += c;`
> Legal, `i` would be incremented by the integer value of `c`'s ASCII character (E.g. if `c == 'a'` then it would be `i += 97`).

2. `c = 2 * c - 1;`
> Legal, again the character would just be altered to now equal the ASCII char equivalent to `2 * c - 1`.

3. `putchar(c);`
> Legal, this simply prints the value stored in `c` to stdout.

4. `printf(c);`
> Illegal, this statement causes a compiler error due to `c` not being called as an argument in the valid format for `printf()` (E.g. `printf("%c", c);` would be valid)

### Question 5: Which one of the following is not a legal way to write the number 65? (Assume that the character set is ASCII.)
1. 'A'
> Legal, the ASCII code for `'A'` is 65.

2. 0b1000001
> Legal, 1000001 in binary can be represented as:

$$
64 + 1 == 65
$$

3. 0101
> Illegal, the octal 0101 can be represented as:

$$
\begin{aligned}
    0101 &== 1 + (0 * 8) + (1 * 16) \\
         &== 1 + 0 + 16 \\
         &== 17
\end{aligned}
$$

> Which is not equal to 65.

4. 0x41
> Legal, the hexadecimal 0x41 can be represented as:

$$
\begin{aligned}
    0x41 &== 1 + (4 * 16) \\
         &== 1 + 64 \\
         &== 65
\end{aligned}
$$

### Question 6: For each of the following items of data, specify which one of the types `char`, `short`, `int` or `long` is the smallest one guaranteed to be large enough to store the item.
1. Days in a month.
> `short int`

2. Days in a year.
> `short int`

3. Minutes in a day.
> `short int`

4. Seconds in a day.
> `int`

### Question 7: For each of the following character escapes, give the equivalent octal escape. (Assume that the character set is ASCII.)
1. `\b` (backspace)
> `010` is backspace in octal. 

2. `\n` (new line)
> `012` is new line feed in octal.

3. `\r` (carriage return)
> `015` is carriage return in octal.

4. `\t` (horizontal tab)
> `011` is horizontal tab in octal.

### Question 8: Repeat Exercise 7 but in hexadecimal instead.
1. hex backspace
> `8`

2. hex new line
> `A`

3. hex carriage return
> `D`

4. hex horizontal tab
> `9`

### Question 9: Suppose that `i` and `j` are variables of type `int`. What is the type of the expression `i / j + 'a'`?
> `int`, since adding chars does not change the numeric type of the variable, the expression would resolve to:

$$
    i / j + 97
$$

### Question 10: Suppose that `i` is a variable of type `int`, `j` is a variable of type `long`, and `k` is a variable of type `unsigned int`. What i sthe type of the expression `i + (int) j * k`? 
> `int`, by casting the `long` as `int` all components are integers. However this could cause integer overflow if the product exceeds the storage limits of an integer data type. Precision could also be lost on `j` if the number sits outside of `int`'s bounds during casting.

### Question 11: Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. What is the type of the expression i * f / d?
> `double`, both the `int` and `float` are type-promoted to allow greater precision of the expression's result.

### Question 12: Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. Explain what conversions take place during the execution of the following statement:

$$
    d = i + f;
$$

> 1. `i` is converted to the type `float`.
> 2. The sum of `i + f` is computed.
> 3. This result is converted to a `double` to be suitable for storage within `d`.

### Question 13: Assume that a program contains the following declarations:
```
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;
```
Give the value and type of each expression listed:
1. `c * i`
> `c` is promoted to an integer, resulting in a type of `int` and value of:

$$
\begin{align}
    c * i &== 1 * (-3) \\
          &== -3
\end{align}
$$

2. `s + m`
> `s` is promoted to a `long`, resulting in a type of `long` and value of: 

$$
    s + m == 2 + 5 == 7
$$

3. `f / c`
> `c` is promoted to a `float`, resulting in a type of `float` and a value of:

$$
    f / c == 6.5f / 1.0f == 6.5f
$$

4. `d / s`
> `s` is promoted to a double for greater precision, resulting in a type of `long` and a value of: 

$$
    d / s == 7.5 / 2.0 == 3.7f
$$

5. `f - d`
> `f` is promoted to a double for greater precision, resulting in a type of `double` and a value of:

$$
    f - d == 6.5f - 7.5 == -1
$$
6. (int) f
> Since the float `f` is being cast as an integer, for the duration of the equation it is used in, its type will be `int` and value will be `6`. Once the equation is over however, the value of `f` will return to its previous `6.5f`.

### Question 14: Does the following statement always compute the fractional part of `f` correctly (assuming that `f` and `frac_part` are `float` variables)?

`frac_part = f - (int) f;

If not, what's the problem?

> The statement does compute the fractional part correctly, as casting `f` to an integer removes the possibility of altering any values after the decimal. However issues would definitely arise if `frac_part` was not declared as a float.

### Question 15: Use `typedef` to create types named `Int8`, `Int16` and `Int32`. Define the types so that they represent 8-bit, 16-bit and 32-bit integers on your machine.

```
// ...nested within a 'int main(void)' function

    typedef char  Int8;
    typedef short Int16;
    typedef int   Int32;
```
