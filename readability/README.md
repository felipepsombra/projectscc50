# Readability Index Calculator

This project calculates the readability index of a given text using the Coleman-Liau index formula.

## Usage

To run the program, compile and execute the code using a C compiler. The program will prompt you to enter the text for analysis. After entering the text, the program will calculate the readability index and print the corresponding grade level.

```bash
gcc -o readability_index readability_index.c
./readability_index
```
## Example
Example: Calculating the readability index for a text

Text: This is a sample text. It contains multiple sentences and words.
Grade 8

## Implementation Details
The program is implemented in C and follows these steps:

Prompt the user to enter the text for analysis.
Read the text entered by the user.
Count the number of letters in the text.
Count the number of words in the text.
Count the number of sentences in the text.
Calculate the readability index using the Coleman-Liau index formula:
Calculate the average number of letters per 100 words (L).
Calculate the average number of sentences per 100 words (S).
Use the formula: index = 0.0588 * L - 0.296 * S - 15.8.
Round the calculated index to the nearest whole number.
Print the grade level based on the calculated index:
If the index is less than 1, print "Before Grade 1".
If the index is 16 or higher, print "Grade 16+".
Otherwise, print "Grade X" where X is the calculated index.
Exit the program.
## License
This project is released under the MIT License.
