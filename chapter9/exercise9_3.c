// Chapter 9, Exercise 3 (p. 229)

// Update Program 9.7 and 9.8 countWord() function to allow apostrophes in words and to count strings of digits

#include <stdio.h>
#include <stdbool.h>

bool alphabetic (const char c)
{
    if ( (c >= 'a'  &&  c <= 'z') || (c >= 'A'  &&  c <= 'Z') )
        return true;
    else
        return false;
}

// added a numeric function to check for digits and numeric symbols (0-9 + - , .)
bool numeric (const char c)
{
    if ( (c >= '0'  &&  c <= '9') || c == '-' || c == '+' || c == ',' || c == '.' )
        return true;
    else
        return false;
}

void  readLine (char  buffer[])
{
    char  character;
    int   i = 0;

    do
    {
        character = getchar ();
        buffer[i] = character;
        ++i;
    } 
    while ( character != '\n' );
    
    buffer[i - 1] = '\0';
}

int  countWords (const char  string[])
{
    int   i, wordCount = 0;
    bool  lookingForWord = true, alphabetic (const char  c), numeric (const char  c);

    for ( i = 0;  string [i] != '\0';  ++i )
        // updated the character checker to include numerals and their associated symbols and apostrophes.
        if ( alphabetic(string[i])  ||  numeric(string[i])  ||  string[i] ==  '\'' )
        {
            if ( lookingForWord )
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;
        
    return wordCount;
}


int main (void)
{
    char  text[81];
    int   totalWords = 0;
    int   countWords (const char  string[]);
    void  readLine (char  buffer[]);
    bool  endOfText = false;

    printf ("Type in your text.\n");
    printf ("When you are done, press 'RETURN'.\n\n");

    while ( ! endOfText )
    {
        readLine (text);

        if ( text[0]  == '\0')
            endOfText = true;
        else
            totalWords += countWords (text);
    }

    printf ("\nThere are %i words in the above text.\n", totalWords);

    return 0;
}