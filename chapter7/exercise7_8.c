// Chapter 7, Exercise 8 (p. 161)

// Function to calculate the absolute value of a number

#include <stdio.h>

double  absoluteValue (double x)
{
     if ( x < 0)
         x = -x;
     return (x);
}


// Function to compute the square root of a number

double  squareRoot (double x)
{
     const double  epsilon = .00000001;
     double        guess   = 1.0;

     while ( absoluteValue (guess * guess / x - 1) >= epsilon )
         guess = ( x / guess + guess ) / 2.0;

     return guess;
}

int main (void)
{
    double  a, b, c;
    double  rootPos, rootNeg, discriminant;
    
    // prompt for a, b, and c
    printf ("Quadratic Root Finder\nEnter your values for a, b, and c:\n");
    printf ("a: ");
    scanf ("%lf", &a);
    printf ("b: ");
    scanf ("%lf", &b);
    printf ("c: ");
    scanf ("%lf", &c);

    // store the discriminant as it's used multiple times
    discriminant = (b * b) - (4 * a * c);

    // check if the discriminant will result in imaginary roots
    if ( discriminant < 0 ) {
        printf ("The roots are imaginary.\n");
        return 1;
    }

    // otherwise calculate the roots
    else {
        rootNeg = (-b - squareRoot (discriminant)) / (2 * a);
        rootPos = (-b + squareRoot (discriminant)) / (2 * a);
    }

    // print the results
    printf ("\nThe roots are x = %lf and %lf\n", rootNeg, rootPos);

    return 0;
}