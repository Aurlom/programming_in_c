// Chapter 5, Exercise 5 (p. 93)

// Program 4.8 modified to track a negative value, negate the value if it's negative, and append a '-' to the end

#include <stdbool.h>
#include <stdio.h>

int main (void)
{
     int  number, right_digit;
     bool neg = false;

     printf ("Enter your number.\n");
     scanf ("%i", &number);

     if ( number < 0 ) {
          neg = true;
          number = -number;
     }


     do {
         right_digit = number % 10;
         printf ("%i", right_digit);
         number = number / 10;
     }
     while ( number != 0 );

     if ( neg )
          printf ("-");

     printf ("\n");

     return 0;
}
