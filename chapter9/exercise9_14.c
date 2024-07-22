// Chapter 9, Exercise 14 (p. 232)

// Write a function intToStr() that does the reverse of strToInt()

#include <stdio.h>
#include <stdbool.h>

void intToStr (int number, char numString[])
{
    int  i, n = 0;
    char tmp;
    bool negative = false;

    // Negate a negative int and flag negative
    if (number < 0) {
        negative = true;
        number = -number;
    }

    /* Cycle as long as number is not 0. Modulo 10 to get the last decimal 
       digit, and add the character '0' to assign the character value of 
       that digit. Divide number by 10 to chop off the last digit. do while
       loop catches the case of integer 0. */
    do {        
        numString[n] = number % 10 + '0';
        number /= 10;
        ++n;
    } while (number);

    // If negative was flagged, tack a minus symbol to the end
    if (negative) {
        numString[n] = '-';
        ++n;
    }

    // The numbers and minus sign are in the string in reverse order
    // so swap digits until the middle
    for (i = 0; i < n / 2; ++i) {
        tmp = numString[i];
        numString[i] = numString[n - i - 1];
        numString[n - i - 1] = tmp;
    }

    // Terminate the string with the null character
    numString[n] = '\0';
    
    return;
}

int main (void)
{
    void intToStr (int number, char numString[]);
    int num = -21331;
    char numStr[81];

    intToStr(num, numStr);

    printf ("Integer %i to string \"%s\"\n", num, numStr);
}