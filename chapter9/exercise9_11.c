// Chapter 9, Exercise 11 (p. 231)

// Extend strToInt() from Program 9.11 to recognize negative integers

// Function to convert a string to an integer

#include <stdio.h>
#include <stdbool.h>

int  strToInt (const char  string[])
{
    int  i, intValue, result = 0;
    bool negative = false;

    // check for negative sign or digit
    for ( i = 0; string[i] == '-' || (string[i] >= '0' && string[i] <= '9'); ++i )
    {
        // flag negative if the minus sign is detected
        if (string[i] == '-')
            negative = true;
        // otherwise convert to integer by subtracting the numeric value of the '0' character
        else {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
        }
    }

    // ternary expression, if negative, return -result, otherwise return result
    return (negative) ? -result : result;
}

int main (void)
{
    int  strToInt (const char  string[]);

    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));
    printf ("%i\n", strToInt("-21"));

    return 0;
}