// Chapter 6, Exercise 3 (p. 117)
// Modify program 6.2 to take a user specified number of values, and exit when "999" is keyed into the data

#include <stdio.h>

int main (void)
{
     int  ratingCounters[11], i, response, numResponses;

     for ( i = 1;  i <= 10;  ++i )
          ratingCounters[i] = 0;
     
     // added prompt and storage for user specified number of responses
     printf ("Enter the number of responses to be recorded: ");
     scanf ("%i", &numResponses);
     printf ("Enter your responses\n");
     
     // changed loop condition to i <= numResponses to loop number of times user requested
     for ( i = 1;  i <= numResponses;  ++i ) {
          scanf ("%i", &response);
          
          // first if checks the quit condition
          if ( response == 999 )
               break;
          else if ( response < 1 || response > 10 )
               printf ("Bad response: %i\n", response);
          else
               ++ratingCounters[response];
     }

     printf ("\n\nRating   Number of Responses\n");
     printf ("------ -------------------\n");

     for ( i = 1;  i <= 10;  ++i )
          printf ("%4i%14i\n", i, ratingCounters[i]);

     return 0;
}