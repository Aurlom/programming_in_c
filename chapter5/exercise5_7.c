// Chapter 5, Exercise 7 (p. 93)

//  Program to generate a table of prime numbers
//  5.10A includes the stdbool library and replaces the _Bool 0 and 1 operations to bool true and false

/*  Exercise 7 further adds efficiency by removing consideration of even numbers greater than 2, and 
    quitting the prime check as soon as a modulo check results in a 0. Prints 2 first to avoid the issue 
    of 2 being prime but not meeting the condition that no other prime numbers are even. 
    
    Additionally, as I now know in chapter 6 will be covered later, there is no reason to test all odd integers 
    from 3 to p, as any integer greater than the square root of p will not evenly divide into it without a value less
    than ore equal to the square root of p having already evenly divided into it. As root functions are not yet 
    defined by this point in the text, I will not implement this efficiency. */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
     int    p, d;
     bool   isPrime;

     printf ("2 ");

     for ( p = 3;  p <= 50;  p += 2 ) {
         isPrime = true;
         d = 3;

         while ( isPrime && d <= p ) {
              if ( p % d == 0 )
                   isPrime = false;
              d += 2;
         }

         if ( isPrime )
             printf ("%i ", p);
     }

     printf ("\n");
     return 0;
}