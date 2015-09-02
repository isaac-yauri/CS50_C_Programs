/*
 * vigenere.c
 *
 * Program to encrypt using Vigenere cipher
 *
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Verifying arguments
    if (argc != 2)
    {
        printf("Need enter the key to Cipher\n");
        return 1;
    }
    else 
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must be only text\n");
                return 1;
            }
        }
    }
    
    // Input of some text to encrypt
    string phrase = GetString();
    int k_len = strlen(argv[1]);
    int k_value = 0;
    int k = 0;
    
    // Encrypting text    
    for (int i = 0, n = strlen(phrase); i < n; i++)
    {
        k_value = toupper(argv[1][k]) - 'A';
        if (phrase[i] >= 'a' && phrase[i] <= 'z')
        {
            printf("%c", ((phrase[i] + k_value - 'a') % 26) + 'a');
        }
        else if (phrase[i] >= 'A' && phrase[i] <= 'Z')
        {
            printf("%c", ((phrase[i] + k_value - 'A') % 26) + 'A');
        }
        else
        {
            k -= 1;
            printf("%c", phrase[i]);
        }
        k = (k + 1) % k_len;
    }
    printf("\n");  
    return 0; 
} 
