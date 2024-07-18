// Chapter 4, Exercise 3 (p. 63)

#include <stdio.h>

int main (void)
{
    // declare variables
    int n, triangularNumber;

    // print table header
    printf ("\nTable of Triangular Numbers\n\n");
    printf (" n        Triangular Number\n");
    printf ("---      -------------------\n");

    // iterate in steps of 5, printing every 5th triangular number
    for ( n = 5; n <= 50; n += 5) {
        triangularNumber = n * (n + 1) / 2;
        printf ("%2i              %i\n", n, triangularNumber);
    }

    return 0;
}
