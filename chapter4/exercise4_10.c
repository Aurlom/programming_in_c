// Chapter 4, Exercise 10 (p. 64)

// Problem: What would happen if a negative number were offered?
// Hypothesis: I think it would add a negative sign to the begining of every digit while still reversing the order.
// Conclusion: Hypothesis was correct.

// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
     int  number, right_digit;

     printf ("Enter your number.\n");
     scanf ("%i", &number);

     while ( number != 0 ) {
          right_digit = number %10;
          printf ("%i", right_digit);
          number = number / 10;
     }

     printf ("\n");

     return 0;
}