// Chapter 4, Exercise 9 (p. 64)

// change for loop to while loop

/* Program to calculate the 200th triangular number
   Introduction of the for statement                */

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    n = 1;
    while ( n <= 200 ) {
         triangularNumber = triangularNumber + n;
         ++n;
    }
    
    printf ("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}