#ifndef FRACTION_MATH
#define FRACTION_MATH

typedef struct {
	int numerator;
	int denominator;
} Fraction;

Fraction addition(Fraction *f1, Fraction *f2);

Fraction subtraction(Fraction *f1, Fraction *f2);

Fraction multiplication(Fraction *f1, Fraction *f2);

Fraction division(Fraction *f1, Fraction *f2);

#endif
