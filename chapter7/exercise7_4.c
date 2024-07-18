// Chapter 7, Exercise 4 (p. 161)

/* Modify program 7.8 to print the guesses as it runs
   Observations: The algorithm jumps from 1 to half way between 1 and the value then it
   approaches the actual square root by approximate half steps until it settles on it */

// Function to calculate the absolute value of a number

#include <stdio.h>

float  absoluteValue (float x)
{
     if ( x < 0)
         x = -x;
     return (x);
}


// Function to compute the square root of a number

float  squareRoot (float x)
{
     const float  epsilon = .00001;
     float        guess   = 1.0;

     while ( absoluteValue (guess * guess - x) >= epsilon ) {
         printf ("Guess is %f\n", guess);
         guess = ( x / guess + guess ) / 2.0;
     }

     return guess;
}


int main (void)
{
     printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
     printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
     printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));

     return 0;
}