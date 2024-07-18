// Chapter 4, Exercise 8 (p. 64)

// Modify program 4.5 to accept user input for the number of times to repeat

#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber, counter;

    // prompt for a number of times to repeat
    printf ("How many numbers do you want to check? ");
    scanf ("%i", &counter);

    // alter the for loop to remove counter initialization, and make it count down from the users input
    for ( ;  counter >= 1;  --counter ) {
         printf ("What triangular number do you want? ");
         scanf ("%i", &number);

         triangularNumber = 0;
         
         for ( n = 1;  n <= number;  ++n )
              triangularNumber += n;
         
         printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}