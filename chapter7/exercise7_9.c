// Chapter 7, Exercise 9 (p. 162)

/* Create a lowest common multiple function using the gcd
   function from Program 7.6 
   given: lcm (u, v) = uv / gcd (u, v); u, v >= 0           */

#include <stdio.h>

/* Function to find the greatest common diviser of two
     nonnegative integer values and to return the result    */

int  gcd (int u, int v)
{
     int  temp;

     while ( v != 0 ) {
         temp = u % v;
         u = v;
         v = temp;
     }

     return u;
}

/* Function to find the least common multiple of two
     nonnegative integer values and to return the result    */

int  lcm (int u, int v)
{
    // validate inputs
    if ( u <= 0  ||  v <= 0 ) {
        printf ("Integers must be positive and non-zero.\n");
        return 0;
    }

    return u * v / gcd (u, v);
}

int main (void)
{
    int u, v;
    int result;

    printf ("Enter two positive integers to find the least common multiple of: ");
    scanf ("%i%i", &u, &v);

    result = lcm (u, v);
    
    // quit with error if lcm call returns 0
    if (result == 0)
        return 1;

    printf ("The least common multiple of %i and %i is %i\n", u, v, result);
    
    return 0;
}