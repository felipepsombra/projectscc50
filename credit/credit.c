#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Request credit card number
    long card_number = get_long("Número: ");

    // Check the length of the card number
    int length = 0;
    long temp = card_number;
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }

    // Check leading digits to determine card type
    int first_two_digits = (int) (card_number / 1e12);
    int first_digit = (int) (card_number / 1e13);

    // Check leading digits to determine card type
    int sum = 0;
    int digit_count = 1;
    while (card_number != 0)
    {
        int digit = card_number % 10;

        if (digit_count % 2 == 0)
        {
            int product = digit * 2;
            sum += product % 10 + product / 10;
        }
        else
        {
            sum += digit;
        }

        card_number /= 10;
        digit_count++;
    }

    // Check the card type and print the result
    if (sum % 10 == 0)
    {
        if ((length == 15 && (first_two_digits == 34 || first_two_digits == 37)))
        {
            printf("AMEX\n");
        }
        else if (length == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((length == 13 || length == 16) && first_digit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
