// Chapter 7, Exercise 13 (p. 162)
// modify Program 7.12 to take a third argument indicating 
// ascending or descending sort

// Program to sort an array of integers

#include <stdio.h>

void  sort (int  a[], int  n, _Bool dsc)
{
    int  i, j, temp;

    // branch based on whether dsc is true or false (1 or 0)
    for ( i = 0;  i < n - 1;  ++i )
        for ( j = i + 1;  j < n;  ++j ) {
            // swaps if the element to the right is smaller then the element being checked
            if ( !dsc && a[i] > a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            // swaps if the element to the right is larger then the element being checked
            else if ( dsc && a[i] < a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}

int main (void)
{
    int  i;
    char order;
    _Bool desc;
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };
    void sort (int  a[], int  n, _Bool dsc);

    printf ("The array before the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);

    // prompt the user for a character indicating an ascending or descending sort
    printf ("\n\nAscending (a) or descending (d) sort? ");
    scanf ("%c", &order);
    
    // check the input, flagging the desc bool if a 'd' is found. Defaults to unflagged
    if ( order == 'd' )
        desc = 1;
    else if ( order == 'a' )
        desc = 0;
    else {
        printf ("Unrecognized character, sorting in ascending order.\n");
        desc = 0;
    }

    sort (array, 16, desc);

    printf ("\nThe array after the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);
    
    printf ("\n");

    return 0;
}