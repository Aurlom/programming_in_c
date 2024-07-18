// Chapter 7, Exercise 12b (p. 162)
// Alter 12a to accept variable length arrays

#include <stdio.h>

void  transposeMatrix (int rows, int cols, int array[rows][cols], int transpose[cols][rows])
{
    int  i, j;

    // go through Nij and transpose to Mji
    for ( i = 0;  i < rows;  ++i )
        for ( j = 0;  j < cols;  ++j )
            transpose[j][i] = array[i][j];
    
    return;
}

int main (void)
{
    const int  nRows = 5, nCols = 10;
    void transposeMatrix (int rows, int cols, int array[rows][cols], int transpose[cols][rows]);
    int  nums[nRows][nCols], transposedNums[nCols][nRows];
    int  i, j;

    // assign some values to the array and print them
    for ( i = 0;  i < nRows;  ++i )
        for ( j = 0;  j < nCols;  ++j )
            nums[i][j] = i + j + i * (nCols - 1);
    
    printf ("Original %i x %i array:\n", nRows, nCols);
    
    for ( i = 0;  i < nRows;  ++i ) {
        for ( j = 0;  j < nCols;  ++j )
            printf ("%4i", nums[i][j]);
        printf ("\n");
    }

    // call the transpose function
    transposeMatrix (nRows, nCols, nums, transposedNums);

    // print the transposed array
    printf ("\nTransposed %i x %i array:\n", nCols, nRows);

    for ( i = 0;  i < nCols;  ++i ) {
        for ( j = 0;  j < nRows;  ++j )
            printf ("%4i", transposedNums[i][j]);
        printf ("\n");
    }
}     