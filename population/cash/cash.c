#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool is_valid_checksum(const char *card_number);
string get_card_brand(const char *card_number);

int main(void)
{
    string card_number = get_string("Number: ");

    if (is_valid_checksum(card_number))
    {
        string card_brand = get_card_brand(card_number);
        printf("%s\n", card_brand);
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

// Check if the checksum of the card number is valid
bool is_valid_checksum(const char *card_number)
{
    int length = strlen(card_number);
    int sum = 0;
    bool multiply = false;

    // Iterate through the card number digits from right to left
    for (int i = length - 1; i >= 0; i--)
    {
        int digit = card_number[i] - '0';

        if (multiply)
        {
            digit *= 2;

            // If the doubled digit is greater than 9, add its digits separately
            if (digit > 9)
            {
                digit = digit % 10 + digit / 10;
            }
        }

        sum += digit;
        multiply = !multiply;
    }

    // The card number is valid if the sum is divisible by 10
    return sum % 10 == 0;
}

// Determine the brand of the card based on the card number format
string get_card_brand(const char *card_number)
{
    int length = strlen(card_number);

    if ((length == 13 || length == 16) && card_number[0] == '4')
    {
        return "VISA";
    }
    else if (length == 16)
    {
        int prefix = (card_number[0] - '0') * 10 + (card_number[1] - '0');
        if (prefix >= 51 && prefix <= 55)
        {
            return "MASTERCARD";
        }
    }
    else if (length == 15)
    {
        int prefix = (card_number[0] - '0') * 10 + (card_number[1] - '0');
        if (prefix == 34 || prefix == 37)
        {
            return "AMEX";
        }
    }

    // If none of the conditions match, the card number is invalid
    return "INVALID";
}
