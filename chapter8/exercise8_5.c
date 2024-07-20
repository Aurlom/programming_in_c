// Chapter 8, Exercise 5 (p. 190)

/* Write a function called clockKeeper() that uses a dateAndTime struct, calls timeUpdate() 
   (Program 8.5) to add a second to the clock and dateUpdate() (Program 8.4) if time reaches 
   midnight  */

#include <stdbool.h>
#include <stdio.h>

// define structs for date, time, and date + time
struct date
{
    int month;
    int day;    
    int year;
};
struct time
{
    int hour;
    int minutes;
    int seconds;
};
struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

int main (void)
{
    // prototype the clockKeeper()
    struct dateAndTime clockKeeper (struct dateAndTime dat);
    struct dateAndTime clock;

    // prompt for a date and store it in the dateAndTime struct
    // (%d forces input to decimal so leading zeroes dont make it octal)
    printf ("Enter a date (mm/dd/yyyy): ");
    scanf ("%d/%d/%d", &clock.sdate.month, &clock.sdate.day, &clock.sdate.year);

    // prompt for a time and store it in the dateAndTime struct 
    printf ("Enter a 24h time (hh:mm:ss): ");
    scanf("%d:%d:%d", &clock.stime.hour, &clock.stime.minutes, &clock.stime.seconds);

    // update the clock by 1 second
    clock = clockKeeper(clock);

    // print the new date and time
    printf ("New Date: %.2i/%.2i/%i\nNew Time: %.2i:%.2i:%.2i\n",
        clock.sdate.month, clock.sdate.day, clock.sdate.year,
        clock.stime.hour, clock.stime.minutes, clock.stime.seconds);

    return 0;
}

// New function to control calls to date and time update functions
struct dateAndTime clockKeeper (struct dateAndTime dat)
{
    struct time  timeUpdate (struct time  now);
    struct date  dateUpdate (struct date  today);
    
    dat.stime = timeUpdate(dat.stime);
    if (dat.stime.hour == 0 && dat.stime.minutes == 0 && dat.stime.seconds == 0)
        dat.sdate = dateUpdate(dat.sdate);
    
    return dat;
}

// Function to update the time by one second

struct time  timeUpdate (struct time  now)
{
    ++now.seconds;

    if ( now.seconds == 60 )  {     // next minute
        now.seconds = 0;
        ++now.minutes;

        if ( now.minutes == 60 ) {  // next hour
            now.minutes = 0;
            ++now.hour;

            if ( now.hour == 24 ) // midnight
               now.hour = 0;
        }
    }

    return now;
}

// Function to calculate tomorrow's date

struct date  dateUpdate (struct date  today)
{
    struct date  tomorrow;
    int  numberOfDays (struct date  d);

    if ( today.day != numberOfDays (today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) {     // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {                              // end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

// Function to find the number of days in a month

int numberOfDays  (struct date  d)
{
    int   days;
    bool  isLeapYear (struct date  d);
    const int   daysPerMonth[12] =
        { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ( isLeapYear (d) == true &&  d.month == 2 )
         days = 29;
    else
         days = daysPerMonth[d.month - 1];
        
    return days;
}

// Function to determine if it's a leap year

bool  isLeapYear (struct date  d)
{
    bool  leapYearFlag;

    if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  ||
                 d.year % 400 == 0)
        leapYearFlag = true;   // It's a leap year
    else
        leapYearFlag = false;  // Not a leap year

    return leapYearFlag;
}