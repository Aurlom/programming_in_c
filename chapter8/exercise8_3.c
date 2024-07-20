// Chapter 8, Exercise 3 (p. 190)

/* write a function elapsed_time that takes two hour, minute, second time structs
   and calculates another time struct representing the time elapsed between the
   two times. */

#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

int main (void)
{
    // prototype elapsed_time() and declare an array for the struct times
    struct time elapsed_time (struct time start, struct time end);
    struct time times[3];

    // prompt for start and end times and store them in struct times 
    // (%d forces input to decimal so leading zeroes dont make it octal)
    printf ("Enter a 24h start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &times[0].hour, &times[0].minute, &times[0].second);
    printf ("Enter a 24h start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &times[1].hour, &times[1].minute, &times[1].second);

    // get the time elapsed
    times[2] = elapsed_time(times[0], times[1]);

    // print the time elapsed between the given times
    printf ("%i hours, %i minutes, and %i seconds elapsed between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i.\n", 
        times[2].hour, times[2].minute, times[2].second, 
        times[0].hour, times[0].minute, times[0].second, 
        times[1].hour, times[1].minute, times[1].second);

    return 0;
}

struct time elapsed_time (struct time start, struct time end)
{
    // array to store total number of seconds for both times and the struct time to return
    int seconds[2];
    struct time elapsed;

    // convert times to ints representing total seconds
    seconds[0] = start.hour * 3600 + start.minute * 60 + start.second;
    seconds[1] = end.hour * 3600 + end.minute * 60 + end.second;

    // if the difference is negative, it means midnight was crossed, so just add 24 hours 
    // (in seconds) to the end time
    if (seconds[1] - seconds[0] < 0)
        seconds[1] += 86400;
    
    // convert the seconds back to hours, minutes, and seconds and store them in the struct time
    // to be returned
    elapsed.hour = (seconds[1] - seconds[0]) / 3600;
    elapsed.minute = (seconds[1] - seconds[0]) % 3600 / 60;
    elapsed.second = (seconds[1] - seconds[0]) % 60;

    return elapsed;
}