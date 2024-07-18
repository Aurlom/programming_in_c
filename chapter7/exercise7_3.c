// Chapter 7, Exercise 3 (p. 161)

/* Modify Program 7.8 to take epsilon as an argument
   Observations: The smaller epsilon is, the closer to the actual value
   it reaches, however, it gets pretty close without needing epsilon to
   be too precise. If you needed just the integer, or only a couple decimal
   places, you could reduce the number of guesses with a higher epsilon */

// Function to calculate the absolute value of a number

#include <stdio.h>

float  absoluteValue (float x)
{
     if ( x < 0)
         x = -x;
     return (x);
}


// Function to compute the square root of a number

float  squareRoot (float x, float epsilon)
{
     float  guess   = 1.0;

     while ( absoluteValue (guess * guess - x) >= epsilon )
         guess = ( x / guess + guess ) / 2.0;

     return guess;
}


int main (void)
{
     printf ("squareRoot (49, e = 10.0000) = %f\n", squareRoot (49, 10.0));
     printf ("squareRoot (49, e = 0.10000) = %f\n", squareRoot (49, 0.1));
     printf ("squareRoot (49, e = 0.00001) = %f\n", squareRoot (49, 0.00001));

     return 0;
}