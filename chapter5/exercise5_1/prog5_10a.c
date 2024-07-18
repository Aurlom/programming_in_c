// Chapter 5, Exercise 1 (p. 92)

//  Program to generate a table of prime numbers
//  5.10A includes the stdbool library and replaces the _Bool 0 and 1 operations to bool true and false

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
     int    p, d;
     bool   isPrime;

     for ( p = 2;  p <= 50;  ++p ) {
         isPrime = true;

         for ( d = 2;  d < p;  ++d )
              if ( p % d == 0 )
                   isPrime = false;

         if ( isPrime )
             printf ("%i ", p);
     }


     printf ("\n");
     return 0;
}