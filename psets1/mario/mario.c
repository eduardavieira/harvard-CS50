#include <stdio.h>
#include <cs50.h>

void printing_hashtag(int height);

int main(void)
{
    int height;

    // Getting user's input and validating it
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);

    // Printing pyramids
    printing_hashtag(height);

}



void printing_hashtag(int height)
{
    // each line
    for (int i = 0; i < height; i++)
    {

        //first pyramid
        for (int a = 0; a < height - i - 1; a++)
        {
            printf(" ");

        }
        for (int b = 0; b <= i; b++)
        {
            printf("#");
        }

        //space between pyramids
        printf("  ");

        //second pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // new line
        printf("\n");
    }
}