// Chapter 5, Exercise 4 (p. 92)

#include <stdio.h>

int main (void)
{
    // Declare and initialize the input tracking variables and the accumulator
    float number;
    float accumulator = 0.0;
    char operator;

    printf ("Begin Calculations\n");

    // Loop until the user ends with 'E'
    do {
        // Read in the value and operation to be executed next
        scanf ("%f %c", &number, &operator);

        // Check the operator and execute the appropriate expression
        switch (operator)
        {
            case 'S':
                accumulator = number;
                break;
            case '+':
                accumulator += number;
                break;
            case '-':
                accumulator -= number;
                break;
            case '*':
                accumulator *= number;
                break;
            case '/':
                if (number == 0)
                    printf ("Division by zero.\n");
                else
                    accumulator /= number;
                break;
            case 'E':
                break;
            default:
                printf ("Invalid operator.\n");
                break;
        }

        // Print the current value
        printf ("= %f\n", accumulator);
    } 
    while (operator != 'E');

    printf ("End of Calculations.\n");

    return 0;
}