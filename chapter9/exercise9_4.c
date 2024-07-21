// Chapter 9, Exercise 4 (p. 229)

// write a function to extract substrings substring (source, start, count, result)

#include <stdio.h>

// initialize the result array with the count + 1 additional space for the null character
void substring (const char source[], const int start, const int count, char result[])
{
    int i = 0;
    
    // cycle until the count is reached, or a null character is encountered
    for ( i = 0; source[start + i] != '\0' && i < count; ++i)
    {
        result[i] = source[start + i];
    }

    // append the null character to the end of the new string
    result[i + 1] = '\0';
}

int main (void)
{
    void substring (const char source[], const int start, const int count, char result[]);
    char sub[6];
    
    // expected: "act"
    substring ("character", 4, 3, sub);
    printf ("\"Character\" substring starting at position 4 and counting 3 is: \"%s\"\n", sub);
    
    // expected: "words"
    substring ("two words", 4, 20, sub);
    printf ("\"two words\" substring starting at position 4 and counting 20 is: \"%s\"\n", sub);

    return 0;
}