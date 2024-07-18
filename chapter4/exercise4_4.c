// Chapter 4, Exercise 4 (p. 63)

#include <stdio.h>

int main (void)
{
    // declare variables
    int n, factorial;

    // print table header
    printf ("\n  Table of Factorials\n\n");
    printf (" n             Factorial\n");
    printf ("---           -----------\n");

    // repeat factorial algorithm for n = 1 to n = 10
    for ( n = 1; n <= 10; ++n ) {
        
        // reset factorial to 1
        factorial = 1;

        // multiply together all integer values between 1 and n inclusive
        for ( int i = 1; i <= n; ++i ) {
            factorial *= i;
        }

        // print the row
        printf ("%2i!             %i\n", n, factorial);
    }

    return 0;
}