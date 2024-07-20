// Chapter 8, Exercise 4 (p. 190)

/* By subtracting 621,049 from the result of the N algorithm (see Exercise 2), and then taking modulo 7
   you get a number from 0 through 6 that corresponds to the day of the week. Write a program to print 
   the day out in word form.*/

#include <stdio.h>

// define a date struct to hold a 3 integer member date
struct date
{
    int month;
    int day;    
    int year;
};

int main (void)
{
    int calculateN (struct date d);
    struct date sDate;

    // prompt for a date and store them in a struct date 
    // (%d forces input to decimal so leading zeroes dont make it octal)
    printf ("Enter a date (mm dd yyyy): ");
    scanf ("%d%d%d", &sDate.month, &sDate.day, &sDate.year);

    // print the day based on the (N - 621049) % 7 algorithm
    printf ("The day was ");
    switch ((calculateN(sDate) - 621049) % 7) {
        case 0:
            printf ("Sunday.\n");
            break;
        case 1:
            printf ("Monday.\n");
            break;
        case 2:
            printf ("Tuesday.\n");
            break;
        case 3:
            printf ("Wednesday.\n");
            break;
        case 4:
            printf ("Thursday.\n");
            break;
        case 5:
            printf ("Friday.\n");
            break;
        default:
            printf ("Saturday.\n");
            break;
    }

    return 0;
}

// Implement the N algorithm
int calculateN (struct date d)
{
    int n;

    if (d.month <= 2)
        n = 1461 * (d.year - 1) / 4  +  153 * (d.month + 13) / 5  +  d.day;
    else
        n = 1461 * d.year / 4  +  153 * (d.month + 1) / 5  +  d.day;

    return n;
}