// Chapter 3, Exercise 8 and 9 (p. 41)

// Exercise 8 provided the Next_multiple equation for integers: i + j - i % j
// i is the current value, j is the multiple you're looking the next even multiple for

// Exercise 9 is to write code to find the next multiple for several i, j pairs

#include <stdio.h>

int main (void)
{
    int i = 365;
    int j = 7;

    int Next_multiple = i + j - i % j;

    printf("Next multiple is %i\n", Next_multiple);

    i = 12258;
    j = 23;

    Next_multiple = i + j - i % j;

    printf("Next multiple is %i\n", Next_multiple);

    i = 996;
    j = 4;

    Next_multiple = i + j - i % j;

    printf("Next multiple is %i\n", Next_multiple);
}