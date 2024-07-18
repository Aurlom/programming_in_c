// Chapter 3, Exercise 6 (p. 41)

#include <stdio.h>

int main (void)
{
    float x = 2.55;
    float poly;
    
    // without a power function, have to manually product cubes and squares. Formula is 3x^3 - 5x^2 + 6.
    poly = 3 * x * x * x - 5 * x * x + 6;

    printf("3x^3 - 5x^2 + 6 = %g when x = %f\n", poly, x);
}