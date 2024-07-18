// Chapter 4, Exercise 2 (p. 63)

#include <stdio.h>

int main (void)
{
    // declare n
    int n;
    
    // print the table header
    printf ("Table of values for n and n^2 from n = 1 to n = 10\n\n");
    printf (" n               n^2\n");
    printf ("---             -----\n");

    // loop to print n and n^2 into the table
    for ( n = 1; n <= 10; ++n) {
        printf ("%2i               %i\n", n, n * n);
    }

    return 0;
}