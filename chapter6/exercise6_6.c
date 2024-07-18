// Chapter 6, Exercise 6 (p. 118)
// Modify program 6.3 to display the first 15 Fibonacci numbers without an array

#include <stdio.h>

int main (void)
{
     // removed array, made 3 tracking vars instead
     int neg2Fib, neg1Fib, currFib, i;

     neg2Fib = 0;    // by definition
     neg1Fib = 1;    // ditto

     // each trip through the loop gets current Fibonnaci number by adding neg2Fib 
     // and neg1Fib, then advances both trackers up one place in the sequence
     for ( i = 2;  i < 15;  ++i ) {
          currFib = neg2Fib + neg1Fib;
          neg2Fib = neg1Fib;
          neg1Fib = currFib;
          printf ("%i\n", currFib);
     }
    
     return 0;
}