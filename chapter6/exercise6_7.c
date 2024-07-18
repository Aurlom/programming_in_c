// Chapter 6, Exercise 7 (p. 118)

#include <stdio.h>

int main (void)
{
    const int n = 150;
    int i, j, P[n+1];
    
    // Initialize an array P[n] to 0 
    for (i = 0; i <= n; ++i)
        P[i] = 0;

    // Set i to 2, end if i > n, increment i after loop executes
    for (i = 2; i <= n; ++i) {
        
        // if the P[i] is 0, i is prime, print it
        if (P[i] == 0)
            printf ("%i ", i);
        
        // increment through positive integers until j * i > n, set the P[i*j] element to 1
        for (j = 1; i * j <= n; ++j) {
            P[i*j] = 1;
        }
    }

    printf ("\n");

    return 0;
}