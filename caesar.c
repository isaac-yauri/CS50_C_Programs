/*
 * caesar.c
 *
 * Program to encrypt a text
 *
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Verifying arguments
    if (argc != 2)
    {
        printf("Need enter the key to Cipher\n");
        return 1;
    }
    else if (atoi(argv[1]) <= 0)
    {
        printf("Need to enter a positive integer\n");
        return 1;
    }
    
    // Input of some text to encrypt
    int k = atoi(argv[1]);
    string phrase = GetString();
    
    // Encrypting text    
    for (int i = 0, n = strlen(phrase); i < n; i++)
    {
        if (phrase[i] >= 'a' && phrase[i] <= 'z')
        {
            printf("%c", ((phrase[i] + k - 'a') % 26) + 'a');
        }
        else if (phrase[i] >= 'A' && phrase[i] <= 'Z')
        {
            printf("%c", ((phrase[i] + k - 'A') % 26) + 'A');
        }
        else
        {
            printf("%c", phrase[i]);
        }
    }
    printf("\n");  
    return 0; 
} 
