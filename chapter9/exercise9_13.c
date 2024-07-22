// Chapter 9, Exercise 13 (p. 231)

// Write a function uppercase() that converts lower case characters to upper case in a given string

#include <stdio.h>

// loop until the null character, every lower case letter encountered, change to uppercase by subtracting 'a' then adding 'A'
void uppercase (char text[])
{
    int i = 0;
    while (text[i]) {
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 'a' + 'A';
        ++i;
    }
    return;
}

int main (void)
{
    char text[] = "The Swift Brown Fox Jumped Over The Lazy Dog... like 23 times!";

    uppercase(text);
    printf ("%s\n", text);
}