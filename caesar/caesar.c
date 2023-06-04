#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // Check if the program was executed with a command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Check if the provided argument contains only digits
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the command-line argument to an integer
    int key = atoi(argv[1]);

    // Request the plaintext from the user
    char plaintext[100];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // Encrypt the plaintext
    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        char c = plaintext[i];

        // Check if it's an uppercase letter
        if (isupper(c))
        {
            char encrypted = ((c - 'A') + key) % 26 + 'A';
            printf("%c", encrypted);
        }
        // Check if it's a lowercase letter
        else if (islower(c))
        {
            char encrypted = ((c - 'a') + key) % 26 + 'a';
            printf("%c", encrypted);
        }
        // Other characters remain unchanged
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");

    return 0;
}