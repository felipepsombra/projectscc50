# Substitution Cipher

This program implements a substitution cipher, which encrypts a plaintext message using a provided key.

## Usage

To run the program, compile and execute the code using a C compiler. The program expects a single command-line argument, which is the key for encryption.

```bash
gcc -o substitution substitution.c
./substitution key
```
Replace key in the command with a 26-character string that contains each letter of the alphabet exactly once. The program will then prompt you to enter the plaintext message. After entering the plaintext, the program will encrypt it using the provided key and print the ciphertext.

## Example
Example: Encrypting a plaintext message using a substitution cipher
plaintext: HELLO
ciphertext: ROVVY

The program asks for the plaintext message and encrypts it using the substitution cipher. In this example, the plaintext "HELLO" is encrypted using the provided key, resulting in the ciphertext "ROVVY".

## Implementation Details
The program is implemented in C and follows these steps:

Check if the number of command-line arguments is valid.
Get the key from the command-line argument.
Validate the key:
Check if the key has a length of 26.
Check if each character in the key is alphabetic.
Check if each character in the key is unique.
Prompt the user to enter the plaintext message.
Encrypt the message using the substitution cipher:
Iterate through each character in the plaintext.
Encrypt alphabetic characters by replacing them with the corresponding character from the key.
Preserve the case of the characters.
Print the ciphertext.
Exit the program.
## Notes
The substitution cipher is a method of encryption that replaces each letter in the plaintext with another letter based on the provided key. It allows for the creation of a one-to-one mapping between letters of the alphabet, providing a simple form of encryption.
## License
This project is released under the MIT License.
