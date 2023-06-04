#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start_size, end_size;

    // Prompt the user for the initial population size
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // Prompt the user for the final population size
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    int years = 0;

    // Simulate population growth
    while (start_size < end_size)
    {
        int births = start_size / 3;
        int deaths = start_size / 4;

        start_size = start_size + births - deaths;
        years++;
    }

    // Print the number of years required
    printf("Years: %i\n", years);

    return 0;
}