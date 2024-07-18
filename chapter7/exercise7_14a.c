// Chapter 7, Exercise 14 (p. 162)
// Rewrite prime () to use global variables

#include <stdio.h>

int gP;

int  prime (void)
{
    int  i;

    // check for integers less than 2 or even integers
    if ( gP < 2  ||  (gP > 2  &&  gP % 2 == 0) )
        return 0;
    else
        // check odd number divisors until i passes the number's square root
        for ( i = 3;  gP / i >= i;  i += 2 )
            if ( gP % i == 0 )
                return 0;
    
    // if this return is reached, previous conditions have determined that the number is prime.
    return 1;
}

int main (void)
{
    int  prime (void);
    int  isPrime;

    printf ("Enter an integer to check if it's prime: ");
    scanf ("%i", &gP);

    // checkPrime returns 0 if not prime, so the if will evaluate false if not a prime number
    isPrime = prime ();
    
    if ( isPrime )
        printf ("%i is a Prime Number.\n", gP);
    else
        printf ("%i is NOT a Prime Number\n", gP);

    return 0;
}