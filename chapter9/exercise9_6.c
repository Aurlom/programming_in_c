// Chapter 9, Exercise 6 (p. 230)

// write a function to remove a substring from a string removeString (text, start, numChars)

#include <stdio.h>

int  stringLength (const char  string[])
{
    int  count = 0;

    while (string[count])
        ++count;
    
    return count;
}

void  concat (char  result[], const char  str1[], const char  str2[])
{
    int  i, j;

    // copy str1 to result

    for ( i = 0;  str1[i] != '\0';  ++i )
        result[i] = str1[i];

    // copy str2 to result

    for ( j = 0;  str2[j] != '\0';  ++j )
        result[i + j] = str2[j];

    // Terminate the concatenated string with a null character

    result [i + j] = '\0';
} 

void removeString (char text[], const int start, int num)
{
    int  stringLength (const char  string[]);
    void  concat (char  result[], const char  str1[], const char  str2[]);
    int length = stringLength(text);
    int i;
    char a[81], b[81];
    
    // return if start is beyond the index of the last character 
    if (start >= length)
        return;
    
    // make sure num doesn't extend past the last character
    if (num > length - start)
        num = length - start;
    
    // copy everything before the start to substring a and append a null
    for (i = 0; i < start; ++i)
        a[i] = text[i];
    a[i] = '\0';

    // copy everything after start plus the number of characters to remove to substring b
    // and append a null
    for (i = start + num; i < length; ++i)
        b[i - (start + num)] = text[i];
    b[i - (start + num)] = '\0';

    // concatanate the substrings back into text
    concat(text, a, b);
}

int main (void)
{
    char text1[] = "the wrong son";

    removeString (text1, 0, 1);
    printf ("\"the wrong son\", start at 0, remove 1 = \"%s\"\n", text1);

    removeString (text1, 4, 6);
    printf ("\"he wrong son\", start at 4, remove 6 = \"%s\"\n", text1);

    removeString (text1, 5, 0);
    printf ("\"he won\", start at 5, remove 0 = \"%s\"\n", text1);

    removeString (text1, 5, 1);
    printf ("\"he won\", start at 5, remove 1 = \"%s\"\n", text1);

    return 0;
}