#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

#define ALPHABET_SIZE 26

bool validate_key(string key);
void encrypt_message(string plaintext, string key);

int main(int argc, string argv[])
{
    // Check if the number of command-line arguments is valid
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    // Validate the key
    if (!validate_key(key))
    {
        printf("Key must contain 26 alphabetic characters.\n");
        return 1;
    }

    // Get the plaintext from the user
    string plaintext = get_string("plaintext: ");

    // Encrypt the message
    encrypt_message(plaintext, key);

    return 0;
}

bool validate_key(string key)
{
    // Check if the key has the correct length
    if (strlen(key) != ALPHABET_SIZE)
    {
        return false;
    }

    // Check if each character in the key is alphabetic
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
    }

    // Check if each character in the key is unique
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (key[i] == key[j])
            {
                return false;
            }
        }
    }

    return true;
}

void encrypt_message(string plaintext, string key)
{
    // Convert the plaintext to ciphertext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        // Encrypt alphabetic characters
        if (isalpha(c))
        {
            int index = isupper(c) ? c - 'A' : c - 'a';
            char encrypted_char = isupper(c) ? toupper(key[index]) : tolower(key[index]);
            plaintext[i] = encrypted_char;
        }
    }

    // Print the ciphertext
    printf("ciphertext: %s\n", plaintext);
}