#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    // asking for user input
    string text = get_string("Text: ");

    // calculating the grade

    float L = 0, S = 0, W = 1;

    for (int i = 0, len = strlen(text); i < len; i ++)
    {
        // Counting each letter in the text

        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            L = L + 1;
        }

        // Counting each word (32 is the space Ascii representation)

        else if (text[i] == 32)
        {
            W = W + 1;
            //words=spaces+1
        }

        // Counting sentences ('!' and '.' and '?')
        else if ((text[i] == 33) || (text[i] == 46) || (text[i] == 63))
        {
            S = S + 1;
        }

    }

    L = (100 * L) / W;
    S = (100 * S) / W;

    // Coleman-Liau index
    // L - average number of letters per 100 words in the text
    // S - average number of sentences per 100 words in the text
    float grade = 0.0588 * L - 0.296 * S - 15.8;


    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %0.0f\n", grade);
    }
}

