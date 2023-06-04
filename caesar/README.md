# Caesar Cipher Program

This program encrypts messages using the Caesar cipher. The Caesar cipher is a simple substitution cipher where each letter in the plaintext is shifted a certain number of positions down the alphabet.

## Usage

To run the program, execute the following command: ./caesar key

- Replace `key` with a non-negative integer representing the encryption key.

The program will prompt you to enter the plaintext message. After entering the message, the program will output the corresponding ciphertext, where each alphabetic character is shifted according to the encryption key.

## Examples

Example 1: Encrypting "HELLO" with a key of 13

$ ./caesar 13
plaintext: HELLO
ciphertext: URYYB

Example 2: Encrypting "hello, world" with a key of 13

$ ./caesar 13
plaintext: hello, world
ciphertext: uryyb, jbeyq

Example 3: Encrypting "be sure to drink your Ovaltine" with a key of 13

$ ./caesar 13
plaintext: be sure to drink your Ovaltine
ciphertext: or fher gb qevax lbhe Binygvar


Please note that only alphabetic characters are rotated by the cipher. Non-alphabetic characters remain unchanged.

## Implementation Details

The program is implemented in C and follows these steps:

1. Check if the program was executed with a command-line argument. If not, display a usage message and exit.
2. Check if the provided argument contains only digits. If not, display a usage message and exit.
3. Convert the command-line argument to an integer to obtain the encryption key.
4. Prompt the user to enter the plaintext message.
5. Iterate over each character in the plaintext:
   - If it is an uppercase letter, rotate it while preserving capitalization.
   - If it is a lowercase letter, rotate it while preserving capitalization.
   - If it is not an alphabetic character, leave it unchanged.
6. Print the resulting ciphertext.
7. Exit the program.

## License

This program is released under the [MIT License](LICENSE).










