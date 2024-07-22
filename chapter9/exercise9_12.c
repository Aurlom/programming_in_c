// Chapter 9, Exercise 12 (p. 231)

// Write a function strToFloat() to convert strings to float, recognizing negative

#include <stdio.h>
#include <stdbool.h>

float  strToFloat (const char  string[])
{
    int  i, decimalCount = 0;
    float digitValue, result = 0.0;
    bool negative = false, decimal = false;

    // check for negative sign, decimal, or digit
    for ( i = 0; string[i] == '-' || string[i] == '.' || (string[i] >= '0' && string[i] <= '9'); ++i )
    {
        // switch based on symbol
        switch (string[i])
        {
            case '-':
                // flag negative if minus sign encountered
                negative = true;
                break;
            case '.':
                // flag decimal once the decimal point is found
                decimal = true;
                break;
            default:
                // if the decimal point has been found, increment the decimal counter
                if (decimal)
                    ++decimalCount;
                // proceed as if it were an integer
                digitValue = string[i] - '0';
                result = result * 10 + digitValue;
                break;
        }
    }

    // divide by 10 a number of times equal to the number of digits found after the decimal
    for ( i = 0; i < decimalCount; ++i )
        result /= 10;

    // ternary expression, if negative, return -result, otherwise return result
    return (negative) ? -result : result;
}

int main (void)
{
    float  strToFloat (const char  string[]);

    printf ("%.4f\n", strToFloat("-867.6921"));
    printf ("%.1f\n", strToFloat("100") + 25.3);
    printf ("%.1f\n", strToFloat("13.0x5"));
    printf ("%.0f\n", strToFloat("-21"));

    return 0;
}