// Chapter 9, Exercise 9 (p. 231)

// Improve the replaceString() function by having it return if it was successful or not. That way,
// a looping condition could replace all instances of s1 in s2, instead of only the first

#include <stdio.h>
#include <stdbool.h>

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

int findString (const char source[], const char sub[])
{
    int i, j;
    bool match = false;

    // cycle through the source string until null encountered
    for (i = 0; source[i]; ++i)
    {
        // if the first letter of the sub string matches a letter in the source, compare
        if (sub[0] == source[i])
        {
            // match is true until it isn't
            match = true;
            // check the next characters as long as sub has characters left to check and hasn't found a mismatch yet
            for (j = 1; sub[j] && match; ++j)
                if (sub[j] != source[i + j])
                    match = false;
        }

        // match can only be true if the substring reached the null character without switching match back to false
        if (match)
            return i;
    }

    // no matches found
    return -1;
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

bool replaceString (char source[], char s1[], char s2[])
{
    // prototypes
    int  stringLength (const char  string[]);
    int findString (const char source[], const char sub[]);
    void removeString (char text[], const int start, int num);
    void insertString (char text[], const char insert[], const int index);
    
    // find the index of the string in the source
    int index = findString(source, s1);
    
    // if the string was found, remove it, and insert s2
    if (index >= 0) {
        // remove string starting at index, removing a number of characters equal to s1's length
        removeString(source, index, stringLength(s1));
        // insert s2 at the index from which s1 was removed
        insertString(source, s2, index);
        return true;
    }
    else
        return false;
}

int main (void)
{
    bool replaceString (char source[], char s1[], char s2[]);
    bool stillFound;
    char text1[81] = "I had 6 apples.";

    do
        stillFound = replaceString (text1, " ", "");
    while (stillFound);
    
    printf ("\"I had 6 apples.\" becomes \"%s\"\n", text1);

    return 0;
}