// Chapter 8, Exercise 2 (p. 190)

/* Create a program that finds the elapsed days between two dates given the function
   N = 1461*f(year, month)/4  +  153*g(month)/5  +  day4, Elapsed = N(2) - N(1)
   where: f(year,month)+ = year - 1 (month <=2), year (otherwise)
          g(month) = month + 13 (month <= 2), month + 1 (otherwise) */ 

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
    // prototype calculateN() and declare variables
    int calculateN (struct date d);
    struct date startDate, endDate;
    int n1, n2;
    
    // prompt for start and end dates and store them in struct dates 
    // (%d forces input to decimal so leading zeroes dont make it octal)
    printf ("Enter a start date (mm dd yyyy): ");
    scanf ("%d%d%d", &startDate.month, &startDate.day, &startDate.year);
    printf ("Enter an end date (mm dd yyyy): ");
    scanf ("%d%d%d", &endDate.month, &endDate.day, &endDate.year);

    // get an N value for each date
    n1 = calculateN(startDate);
    n2 = calculateN(endDate);

    // print out the difference in N2 and N1 between the provided dates
    printf ("%i days elapsed between %i/%i/%i and %i/%i/%i.\n", n2 - n1, 
        startDate.month, startDate.day, startDate.year,
        endDate.month, endDate.day, endDate.year);

    return 0;
}

// Implement the N algorithm given
int calculateN (struct date d)
{
    int n;

    if (d.month <= 2)
        n = 1461 * (d.year - 1) / 4  +  153 * (d.month + 13) / 5  +  d.day;
    else
        n = 1461 * d.year / 4  +  153 * (d.month + 1) / 5  +  d.day;

    return n;
}