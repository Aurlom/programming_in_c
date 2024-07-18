// Chapter 5, Exercise 3 (p. 92)

#include <stdio.h>

int main (void)
{
    int a, b;

    printf ("Please type in two integers: ");
    scanf ("%i%i", &a, &b);

    if (b == 0)
        printf ("Division by zero.\n");
    else
        printf ("%i / %i = %.3f\n", a, b, (float) a / b);
    
    return 0;
}