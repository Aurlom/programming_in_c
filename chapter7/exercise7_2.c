// Chapter 7, Exercise 2 (p. 161)

// Take the calculateTriangularNumber function from Program 7.4, modify it to return its 
// value instead of printing it, and change Program 4.5 to call the function.

#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int  i, triangularNumber = 0;

    for ( i = 0;  i <= n;  ++i )
        triangularNumber += i;

    return triangularNumber;
}


int main (void)
{
    int n, number, triangularNumber, counter;
    int calculateTriangularNumber (int n);

    for ( counter = 1;  counter <= 5;  ++counter ) {
         printf ("What triangular number do you want? ");
         scanf ("%i", &number);
         
         printf ("Triangular number %i is %i\n\n", number, calculateTriangularNumber (number));
    }

    return 0;
}