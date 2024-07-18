// Chapter 5, Exercise 1 (p. 92)

/* Program to evaluate simple expressions of the form
               number  operator  number                */

// 5.8A added catches for divide by zero and un-recognized operator conditions

#include <stdio.h>

int main (void)
{
     float  value1, value2;
     char   operator;

     printf ("Type in your expression.\n");
     scanf ("%f %c %f", &value1, &operator, &value2);

     if ( operator == '+' )
          printf ("%.2f\n", value1 + value2);
     else if ( operator == '-' )
          printf ("%.2f\n", value1 - value2);
     else if ( operator == '*' )
          printf ("%.2f\n", value1 * value2);
     else if ( operator == '/' )
          if ( value2 == 0 )                        // 5.8A
               printf ("Division by zero.\n");      // 5.8A
          else                                      // 5.8A
               printf ("%.2f\n", value1 / value2);
     else                                           // 5.8A
          printf ("Unknown operator.\n");           // 5.8A
    
     return 0;
}