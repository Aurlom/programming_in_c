// Chapter 9, Exercise 5 (p. 230)

// write a function to find a substring within a string, returning the index where the 
// substring starts, or -1 if not found

#include <stdio.h>
#include <stdbool.h>

int substring (const char source[], const char sub[])
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

int main (void)
{
    int substring (const char source[], const char sub[]);
    int index;
    
    index = substring("a chatterbox", "hat");
    printf ("substring \"hat\" inside \"a chatterbox\" at position (-1 = not found): %i\n", index);

    index = substring("a chatterbox", "oxen");
    printf ("substring \"oxen\" inside \"a chatterbox\" at position (-1 = not found): %i\n", index);

    index = substring("a chatterbox", "x");
    printf ("substring \"x\" inside \"a chatterbox\" at position (-1 = not found): %i\n", index);

    index = substring("a chatterbox", "a ");
    printf ("substring \"a \" inside \"a chatterbox\" at position (-1 = not found): %i\n", index);
}