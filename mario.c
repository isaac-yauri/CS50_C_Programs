/**
 * mario.c
 * 
 * create stairs with "#"
 * 
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initializating variables
    int n;
    
    // Input n = height
    do
    {
        printf("height: ");
        n = GetInt();
    }
    while (n < 0 || n > 23);
    
    // Printing Stairs
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n + 1; y++)
        {
            if (y < (n - x - 1))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }    
        }
        printf("\n");
    }
}
