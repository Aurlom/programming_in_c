// Chapter 7, Exercise 12a (p. 162)

#include <stdio.h>

void  transposeMatrix (int array[4][5], int transpose[5][4])
{
    int  i, j;

    // go through Nij and transpose to Mji
    for ( i = 0;  i < 4;  ++i )
        for ( j = 0;  j < 5;  ++j )
            transpose[j][i] = array[i][j];
    
    return;
}

int main (void)
{
    void transposeMatrix (int array[4][5], int transpose[5][4]);
    int  nums[4][5], transposedNums[5][4];
    int  i, j;

    // assign some values to the array and print them
    for ( i = 0;  i < 4;  ++i )
        for ( j = 0;  j < 5;  ++j )
            nums[i][j] = i + j + i * 4;
    
    printf ("Original 4 x 5 array:\n");
    
    for ( i = 0;  i < 4;  ++i ) {
        for ( j = 0;  j < 5;  ++j )
            printf ("%4i", nums[i][j]);
        printf ("\n");
    }

    // call the transpose function
    transposeMatrix (nums, transposedNums);

    // print the transposed array
    printf ("\nTransposed 5 x 4 array:\n");

    for ( i = 0;  i < 5;  ++i ) {
        for ( j = 0;  j < 4;  ++j )
            printf ("%4i", transposedNums[i][j]);
        printf ("\n");
    }
}