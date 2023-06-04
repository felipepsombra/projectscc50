#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Prompt the user for the height of the pyramid
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Build the pyramids
    for (int i = 0; i < height; i++)
    {
        // Print the left pyramid spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print the left pyramid bricks
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print the gap between the pyramids
        printf("  ");

        // Print the right pyramid bricks
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print a new line
        printf("\n");
    }

    return 0;
}
