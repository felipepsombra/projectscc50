#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float change;
    int cents, coins = 0;

    // Prompts the user for the amount owed until it is numeric and not negative
    do
    {
        printf("Troca devida: ");
        if (scanf("%f", &change) != 1)
        {
            printf("Valor inválido. Tente novamente.\n");
            while (getchar() != '\n');  // Limpa o buffer de entrada
        }
        else if (change < 0)
        {
            printf("Valor não pode ser negativo. Tente novamente.\n");
        }
        else
        {
            break;
        }
    }
    while (1);

    // Converts exchange value from dollars to cents
    cents = round(change * 100);

    // Calculates the minimum number of coins needed
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    // prints the result
    printf("%d\n", coins);

    return 0;
}
