/**
 * greedy.c
 *
 * Calculates coins for change
 * 
 */
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Initializing variables
    float change;
    int money;
    int count = 0, coins = 0;
    int coin_value[4] = {25, 10, 5, 1};

    // Input from user
    do
    {
        printf("O hai! How much change is owned?\n");
        change = GetFloat();
    }
    while (change < 0.0);
    
    money = change * 1000;
    money = money / 10;
    
    // Calc amount of coins
    for (int i = 0; i < 4; i++)
    {
        if (money >= coin_value[i])
        {
            count = money / coin_value[i];
            money -= count * coin_value[i];
            coins += count;
        }
    }
    printf("%i\n", coins);
}
