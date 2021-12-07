/* countWords.c
count how many words in a text
and how many letters in the words
spaces and punctuations are excluded 
*/
#include <stdio.h>
#include <ctype.h>  // ispunct()
#include <stdbool.h>

int main(void)
{
    bool inWord = false;
    int ch;
    int n_chars, n_words;
    n_chars = n_words = 0;

    printf("Enter some text (^D to quit):\n");
    while ((ch = getchar()) != EOF)
    {
        // when ch is space or punctuations
        // resent the inWork to false 
        // and go to next char
        if (isspace(ch) || ispunct(ch))
        {
            inWord = false;
            continue;
        }
            
        n_chars++;      // if not space or punct, count as a char
        if (!inWord)    // if not inWord, then it's the first char in word
        {
            n_words++;
            inWord = true;
        }
    }
    printf("There are %4d words in the text.\n", n_words);
    printf("There are %4d chars in the text.\n", n_chars);
    printf("Average chars of a words is %4.2f chars\n", 
            (float) n_chars / n_words);
    
    return 0;    
}