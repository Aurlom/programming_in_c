// Chapter 7, Exercise 14 (p. 162)
// Rewrite arraySum () to use global variables

#include <stdio.h>

const int gSize = 16;
int  gArray[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };

int  arraySum (void)
{
    int  i, sum = 0;

    for ( i = 0;  i < gSize;  ++i )
        sum += gArray[i];
    
    return sum;
}

int main (void)
{
    int  i;
    
    printf ("Array values: ");
    for ( i = 0;  i < gSize;  ++i )
        printf ("%i ", gArray[i]);
    
    printf ("\nSum of array elements = %i\n", arraySum ());
    
    return 0;
}