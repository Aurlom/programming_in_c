// Chapter 5, Exercise 2 (p. 92)

#include <stdio.h>

int main (void)
{
    int a, b;

    printf ("Please type in two integers: ");
    scanf ("%i%i", &a, &b);

    if (a % b == 0)
        printf ("%i is evenly divisible by %i.\n", a, b);
    else    
        printf ("%i is not evenly divisible by %i.\n", a, b);

    return 0;
}