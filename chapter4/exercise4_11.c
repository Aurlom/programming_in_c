// Chapter 4, Exercise 11 (p. 64)

#include <stdio.h>

int main (void)
{
    // declare variables, initializing digit_sum to 0
    long long number;
    int digit_sum = 0;
    
    // prompt for an integer
    printf ("Enter an integer: ");
    scanf ("%lli", &number);

    // loop through the provided number, adding the last digit to the sum with % 10, and then dividing number by 10 to remove the last digit.
    while ( number != 0 ) {
        digit_sum += number % 10;
        number /= 10;
    }

    // print the resultant sum of digits
    printf ("The sum of the digits is %i\n", digit_sum);

    return 0;
}