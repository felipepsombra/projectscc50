# Credit Card Validator

This program validates credit card numbers and determines the brand of the card based on the number format.

## Usage

To run the program, compile and execute the code using a C compiler. The program will prompt you to enter a credit card number. After entering the number, the program will check if it is a valid card number and output the brand of the card.

```bash
gcc -o credit_card_validator credit_card_validator.c
./credit_card_validator
```
Example: Validating a credit card number

Number: 4111111111111111
VISA

The program determines that the card number "4111111111111111" is a valid VISA card.

Implementation Details:
The program is implemented in C and follows these steps:

Prompt the user to enter a credit card number:
Check if the checksum of the card number is valid using the Luhn algorithm.
Determine the brand of the card based on the number format.
Print the brand of the card if the card number is valid, otherwise print "INVALID".
Exit the program.
The is_valid_checksum function implements the Luhn algorithm to validate the card number's checksum. The get_card_brand function determines the brand of the card based on the number format.

License:
This program is released under the MIT License.
