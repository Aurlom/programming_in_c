// Chapter 7, Exercise 14 (p. 162)
// Rewrite transposeMatrix () (version a) to use global variables

#include <stdio.h>

int  gNums[4][5], gTransposedNums[5][4];

void  transposeMatrix (void)
{
    int  i, j;

    // go through Nij and transpose to Mji
    for ( i = 0;  i < 4;  ++i )
        for ( j = 0;  j < 5;  ++j )
            gTransposedNums[j][i] = gNums[i][j];
    
    return;
}

int main (void)
{
    void transposeMatrix (void);
    int  i, j;

    // assign some values to the array and print them
    for ( i = 0;  i < 4;  ++i )
        for ( j = 0;  j < 5;  ++j )
            gNums[i][j] = i + j + i * 4;
    
    printf ("Original 4 x 5 array:\n");
    
    for ( i = 0;  i < 4;  ++i ) {
        for ( j = 0;  j < 5;  ++j )
            printf ("%4i", gNums[i][j]);
        printf ("\n");
    }

    // call the transpose function
    transposeMatrix ();

    // print the transposed array
    printf ("\nTransposed 5 x 4 array:\n");

    for ( i = 0;  i < 5;  ++i ) {
        for ( j = 0;  j < 4;  ++j )
            printf ("%4i", gTransposedNums[i][j]);
        printf ("\n");
    }
}
