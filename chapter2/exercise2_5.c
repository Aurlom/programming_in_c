// Chapter 2, Exercise 5 (p. 20)

/* Bugged Code:
#include <stdio.h>

int main (Void)                         - void should be all lowercase
{
    INT sum;                            - int should be lower case
    /* COMPUTE RESULT                   - comment should be // not /* or at least should be closed
    sum = 25 + 37 - 19                  - missing semicolon
    /* DISPLAY RESULTS //               - comment not properly closed
    printf ("The answer is %i\n" sum);  - arguments not seperated by a comma
    return 0;
}
*/

#include <stdio.h>

int main (void)
{
    int sum;
    // COMPUTE RESULT
    sum = 25 + 37 - 19;
    // DISPLAY RESULTS
    printf ("The answer is %i\n", sum);
    return 0;
}