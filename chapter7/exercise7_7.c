// Chapter 7, Exercise 7 (p. 161)

#include <stdio.h>

long int  x_to_the_n (long int  x, int  n)
{
    int  i;
    int  origX = x;

    for ( i = 0;  i < n - 1;  ++i )
    {
        x *= origX;
    }

    if ( n == 0 )
        return 1;
    else
        return x;
}


int main (void)
{
    long int  x_to_the_n (long int  x, int  n);
    long int  x;
    int  n;

    printf ("Enter two integers (number, power): ");
    scanf ("%li%i", &x, &n);

    printf ("%li to the power of %i = %li\n", x, n, x_to_the_n(x, n));

    return 0;
}