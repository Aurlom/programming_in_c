// Chapter 5, Exercise 6 (p. 93)

#include <stdbool.h>
#include <stdio.h>

int main (void)
{
    // Divisor initialized to 10 as it's the lowest value necessary for the algorithm.
    int number, digit;
    int divisor = 10;

    printf ("Enter an integer: ");
    scanf ("%i", &number);

    // If the entry is negative, convert to a positive integer, and print "negative."
    if (number < 0) {
        number = -number;
        printf ("negative ");
    }

    /* Create a power of 10 divisor that will be one power higher than the chosen number 
       (needs to be one higher in case the number is a power of 10). If the equality case 
       were ignored, the divisor would be correct for 100 (divisor = 100), but incorrect 
       for 101-999 (divisor = 1000). With the equality case, 100 will also result in a 
       divisor of 1000. The result is that the divisor must then be cut back one power 
       immediately. */
    while (divisor <= number)
        divisor *= 10;
    divisor /= 10;

    // Loop while divisor is not 0.
    while (divisor) {
        
        /* Divide the number by the divisor to get the next digit to the right side of 
           the number, and modulo 10 to extract the digit. Then, divide divisor by 10 for
           the next loop. If this is the final digit to be extracted, divisor will be 
           zero after this operation, and the loop will end after this cycle. */
        digit = number / divisor % 10;
        divisor /= 10;

        // Pick the next word to write based on the digit extracted
        switch (digit) {
            case 0:
                printf ("zero ");
                break;
            case 1:
                printf ("one ");
                break;
            case 2:
                printf ("two ");
                break;
            case 3:
                printf ("three ");
                break;
            case 4:
                printf ("four ");
                break;
            case 5:
                printf ("five ");
                break;
            case 6:
                printf ("six ");
                break;
            case 7:
                printf ("seven ");
                break;
            case 8:
                printf ("eight ");
                break;
            default:
                printf ("nine ");
                break;
        }
    } 

    printf ("\n");

    return 0;
}