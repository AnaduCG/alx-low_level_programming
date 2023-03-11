#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cents, quarters, totalCoins, dimes, nickels = 0, twopences, pennies;
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    printf("%d\n", totalCoins);

    return 0;
}
