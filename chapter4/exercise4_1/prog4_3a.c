// Chapter 4, Exercise 1 (p. 63)

// Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNumber = 0;
    for ( n = 1;  n <= 10;  ++n ) {
         triangularNumber +=  n;
         // for Program 4.3A, added "2" to the "%i" format and removed a space to indicate each number should take 2 spaces, which aligns the table better at n = 10
         printf ("%2i           %i\n", n, triangularNumber); 
    }

    return 0;
}