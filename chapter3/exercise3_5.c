// Chapter 3, Exercise 5 (p. 40)

// expected output: d = d

#include <stdio.h>

int main (void)
{
    char c, d;
    
    c = 'd';
    d = c;
    printf ("d = %c\n", d);

    return 0;
}