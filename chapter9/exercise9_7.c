// Chapter 9, Exercise 7 (p. 230)

// write a function to insert a string into another string insertString (text, insert, index)

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

void insertString (char text[], const char insert[], const int index)
{
    int  stringLength (const char  string[]);
    void  concat (char  result[], const char  str1[], const char  str2[]);

    // initialize length with the length of the string to be inserted into
    int i, length = stringLength(text);
    char a[81], b[81], aPlusIns[81];

    // check for invalid indexes
    if (index < 0 || index > length)
        return;

    // step through the text array, assigning everything before the index to a[]
    // and everything from the index to the end to b[]
    for (i = 0; text[i]; ++i)
        if (i < index)
            a[i] = text[i];
        else
            b[i - index] = text[i];
    // end a[] and b[] with null characters
    a[index] = '\0';
    b[length - index] = '\0';

    // concatanate twice. a + insert, then that result + b, written into text[]
    concat (aPlusIns, a, insert);
    concat (text, aPlusIns, b);
}

int main (void)
{
    char text1[81] = "the wrong son";
    char text2[] = "per";

    insertString (text1, text2, 10);
    printf ("\"the wrong son\", insert \"per\" at positon 10 = \"%s\"\n", text1);

    insertString (text1, text2, 16);
    printf ("\"the wrong son\", insert \"per\" at positon 16 = \"%s\"\n", text1);

    insertString (text1, text2, 0);
    printf ("\"the wrong son\", insert \"per\" at positon 0 = \"%s\"\n", text1);

    return 0;
}