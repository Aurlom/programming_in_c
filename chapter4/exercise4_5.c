// Chapter 4, Exercise 5 (p. 63)

/*
Original code to be formatted for readability:

#include <stdio.h>
int main(void){
int n,two_to_the_n;
printf("TABLE OF POWERS OF TWO\n\n");
printf(" n     2 to the n\n");
printf("---    ---------------\n");
two_to_the_n=1;
for(n=0;n<=10;++n){
printf("2%i        %i\n",n,two_to_the_n);two_to_the_n*=2;}
return 0;}

*/

// Code formatted for readability:

#include <stdio.h>

int main (void)
{
    int n, two_to_the_n;

    printf ("TABLE OF POWERS OF TWO\n\n");
    printf (" n     2 to the n\n");
    printf ("---    ---------------\n");

    two_to_the_n = 1;
    
    for( n = 0; n <= 10; ++n ) {
        printf("%2i        %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
    }
    
    return 0;
}