/**
 * initials.c
 *
 * Prints initials from the words entered
 *
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Input Name
    string name = GetString();
    bool prev_space = false;
  
    // Uppercase for the first letter of each word
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (i == 0)
        {
            printf("%c", toupper(name[0]));
        }
        else if (prev_space == true)
        {
            printf("%c", toupper(name[i]));
            prev_space = false;
        }
        else if (name[i] == ' ')
        {
            prev_space = true;
        }    
    }
    printf("\n");
} 
