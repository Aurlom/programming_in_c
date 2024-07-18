// Chapter 7, Exercise 10 (p. 162)

#include <stdio.h>

int  prime (int n)
{
    int  i;

    // check for integers less than 2 or even integers
    if ( n < 2  ||  (n > 2  &&  n % 2 == 0) )
        return 0;
    else
        // check odd number divisors until i passes the number's square root
        for ( i = 3;  n / i >= i;  i += 2 )
            if ( n % i == 0 )
                return 0;
    
    // if this return is reached, previous conditions have determined that the number is prime.
    return 1;
}

int main (void)
{
    int  prime (int n);
    int  p, isPrime;

    printf ("Enter an integer to check if it's prime: ");
    scanf ("%i", &p);

    // checkPrime returns 0 if not prime, so the if will evaluate false if not a prime number
    isPrime = prime (p);
    
    if ( isPrime )
        printf ("%i is a Prime Number.\n", p);
    else
        printf ("%i is NOT a Prime Number\n", p);

    return 0;
}