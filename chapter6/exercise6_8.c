// Chapter 6, Exercise 8 (p. 118)

#include <stdio.h>

int main (void)
{
    int i, elements;

    printf ("How many array elements do you want? ");
    scanf ("%i", &elements);

    // testing variable length arrays
    int array[elements];

    for (i = 0; i < elements; ++i) {
        array[i] = i + 1;
        printf ("%i ", array[i]);
    }

    printf ("\n");

    return 0;
}