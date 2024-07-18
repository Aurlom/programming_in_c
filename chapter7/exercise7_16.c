// Chapter 7, Exercise 14 (p. 162)
// further modify Program 7.15 to allow for multiple integers to be converted,
// quitting when zero is entered (the book incorrectly says Program 7.14)

// Program to convert a positive integer to another base

#include <stdio.h>

int       convertedNumber[64];
long int  numberToConvert;
int       base;
int       digit;

void  getNumberAndBase (void)
{  
    void  convertNumber (void), displayConvertedNumber (void);
    int quit;
    
    do {
        printf ("Base? ");
        scanf ("%i", &base);

        if ( base < 2  ||  base > 16 )
            printf ("Bad base - must be between 2 and 16 inclusive.\n");
    }
    while ( base < 2  ||  base > 16 );

    /* required moving the other function calls to this function
       quit variable used as numberToConvert becomes zero in the 
       conversion process                                         */
    do {
        printf ("Number to be converted? (enter \"0\" to quit)");
        scanf ("%li", &numberToConvert);
        quit = numberToConvert;
        
        if ( quit != 0 ) {
            convertNumber ();
            displayConvertedNumber ();
        }
    }
    while ( quit != 0 );   
}

void  convertNumber (void)
{
    // because convertNumber can now be called multiple times, digit needs to be reset
    digit = 0;
    
    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    }
    while  ( numberToConvert != 0 );
}

void  displayConvertedNumber (void)
{
    const char  baseDigits[16] =
           { '0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int   nextDigit;

    printf ("Converted number = ");

    for (--digit;  digit >= 0; --digit ) {
        nextDigit = convertedNumber[digit];
        printf ("%c", baseDigits[nextDigit]);
    }

    printf ("\n");
}

int main (void)
{
    void  getNumberAndBase (void);
    
    // main just kicks it to the function with the prompting
    getNumberAndBase ();

    return 0;
}