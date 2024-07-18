// Chapter 6, Exercise 5 (p. 118)

/* Expected output: 
    The nested loops appear to add all previous elements
    to the next element which after the first 2 elements
    will become powers of 2 so I expect 1 1 2 4 8 16 32
    64 128 256 */

#include <stdio.h>

int main (void)
{
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i, j;

    for ( j = 0;  j < 10;  ++j )
        for ( i = 0;  i < j;  ++i )
            numbers[j] += numbers[i];

    for ( j = 0;  j < 10;  ++j )
        printf ("%i ", numbers[j]);
    
    printf ("\n");

    return 0;
}