// Chapter 7, Exercise 14 (p. 162)
// Rewrite sort () to use global variables

// Program to sort an array of integers

#include <stdio.h>

_Bool gDesc;
int  gSize = 16;
int  gArray[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11 };

void  sort (void)
{
    int  i, j, temp;

    // branch based on whether dsc is true or false (1 or 0)
    for ( i = 0;  i < gSize - 1;  ++i )
        for ( j = i + 1;  j < gSize;  ++j ) {
            // swaps if the element to the right is smaller then the element being checked
            if ( !gDesc && gArray[i] > gArray[j] ) {
                temp = gArray[i];
                gArray[i] = gArray[j];
                gArray[j] = temp;
            }
            // swaps if the element to the right is larger then the element being checked
            else if ( gDesc && gArray[i] < gArray[j] ) {
                temp = gArray[i];
                gArray[i] = gArray[j];
                gArray[j] = temp;
            }
        }
}

int main (void)
{
    int  i;
    char order;
    
    void sort (void);

    printf ("The array before the sort:\n");

    for ( i = 0;  i < gSize;  ++i )
        printf ("%i ", gArray[i]);

    // prompt the user for a character indicating an ascending or descending sort
    printf ("\n\nAscending (a) or descending (d) sort? ");
    scanf ("%c", &order);
    
    // check the input, flagging the desc bool if a 'd' is found. Defaults to unflagged
    if ( order == 'd' )
        gDesc = 1;
    else if ( order == 'a' )
        gDesc = 0;
    else {
        printf ("Unrecognized character, sorting in ascending order.\n");
        gDesc = 0;
    }

    sort ();

    printf ("\nThe array after the sort:\n");

    for ( i = 0;  i < gSize;  ++i )
        printf ("%i ", gArray[i]);
    
    printf ("\n");

    return 0;
}