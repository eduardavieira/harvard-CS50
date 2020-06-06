#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    string key = argv[1];

    // validating if an argument was passed

    if (argc < 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }


    for (int i = 0, len = strlen(key); i < len; i ++)
    {

        // validating if all characters are letters
        if ((key[i] >= 'a' && key[i] <= 'z') || (key[i] >= 'A' && key[i] <= 'Z'))
        {
            // validating if key has 26 letters
            if (strlen(key) <= 25)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }

            for (int j = i + 1; j < len; j ++)
            {
                if (key[i] == key[j])
                {
                    printf("Key must not contain repeated characters. \n");
                    return 1;
                }
            }
        }

        else
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }


    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    //ciphering the plaintext

    for (int i = 0, len = strlen(plaintext); i < len; i ++)
    {
        // considering lower case letter
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            int index_key = plaintext[i] - 97;
            char ciphertext_char = key[index_key];
            printf("%c", tolower(ciphertext_char));
        }

        // considering upper case letter
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            int index_key = plaintext[i] - 65;
            char ciphertext_char = key[index_key];
            printf("%c", toupper(ciphertext_char));
        }

        //other characters
        else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");
    return 0;


}