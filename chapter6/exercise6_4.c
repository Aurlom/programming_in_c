// Chapter 6, Exercise 4 (p. 118)

#include <stdio.h>

int main (void)
{
    // initialize an array of 10 floats, and a sum container
    float array[] = {10.2, 4.5, 6.5, 7.8, 445.2, 62.3, 12.2, 4.0, 0.5, 87.2};
    float sum = 0;
    int i;

    // add all the elements of the array
    for (i = 0; i < 10; ++i)
        sum += array[i];
    
    // print the average (sum / 10)
    printf("Average = %f\n", sum / 10);

    return 0;
}