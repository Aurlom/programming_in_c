// Chapter 7, Exercise 11 (p. 162)

#include <stdio.h>

int  arraySum (int  array[], int  n)
{
    int  i, sum = 0;

    for ( i = 0;  i < n;  ++i )
        sum += array[i];
    
    return sum;
}

int main (void)
{
    int  i;
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };
    
    printf ("Array values: ");
    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);
    
    printf ("\nSum of array elements = %i\n", arraySum (array, 16));
    
    return 0;
}