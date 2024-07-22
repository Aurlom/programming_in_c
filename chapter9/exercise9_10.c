// Chapter 9, Exercise 10 (p. 231)

// write a function to sort a dictionary(dictionarySort()) alphabetically.
// See Programs 9.9 and 9.10 for dictionary reference

#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char   word[15];
    char   definition[50];
};

// Function to compare two character strings

int  compareStrings (const char  s1[], const char  s2[])
{
    int  i = 0, answer;

    while ( s1[i] == s2[i] && s1[i] != '\0'&& s2[i] != '\0' )
        ++i;
    
    if ( s1[i] < s2[i] )
        answer = -1;               /* s1 < s2*/
    else if ( s1[i] == s2[i] )
        answer = 0;                 /* s1 == s2 */
    else
        answer = 1;                 /* s1 > s2 */

    return answer;
}

void dictionarySort (struct entry dictionary[])
{
    int  compareStrings (const char  s1[], const char  s2[]);
    // temporary holder to for swapping
    struct entry tmp;
    int i, j, size = 0;

    // find how many entries there are
    while (compareStrings(dictionary[size].word, ""))
        ++size;
    
    // step through the array, checking the first member against each following member
    for (i = 0; i < size - 1; ++i)
        // continue this way, moving the smallest value to the front and advancing one space
        for (j = i + 1; j < size; j++)
            if (compareStrings(dictionary[i].word, dictionary[j].word) > 0) {
                tmp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = tmp;
            }
    return;
}

int main (void)
{
    void dictionarySort (struct entry dictionary[]);

    int i;
    struct entry  dictionary[100] = 
      { { "crocodile", " " },
        { "abacus",    " " },
        { "acumen",    " " },
        { "zebra",     " " },
        { "genie",     " " },
        { "clasp",     " " },
        { "clacker",   " " },
        { "flagrant",  " " },
        { "homage",    " " },
        { "zebrafish", " " } };
    
    printf ("\nDictionary original word order\n");
    printf ("------------------------------\n");
    for (i = 0; i < 10; ++i)
        printf ("%s\n", dictionary[i].word);

    dictionarySort(dictionary);

    printf ("\nSorted dictionary\n");
    printf ("-----------------\n");
    for (i = 0; i < 10; ++i)
        printf ("%s\n", dictionary[i].word);

}
