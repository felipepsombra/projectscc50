# Minimum Coins Program

This program calculates the minimum number of coins needed to make change for a given amount in dollars.

## Usage

To run the program, compile and execute the code using a C compiler. The program will prompt you to enter the amount owed in dollars. After entering the amount, the program will output the minimum number of coins needed to make the change.

```bash
gcc -o coins coins.c
./coins 
```
Example: Calculating the minimum number of coins needed for $4.97

Exchange due: 4.97
19

The program calculates that it takes 19 coins to make change for $4.97.

Implementation Details
The program is implemented in C and follows these steps:

Prompt the user for the amount owed until it is a numeric value and not negative.
Convert the amount owed from dollars to cents.
Calculate the minimum number of coins needed by subtracting the largest possible coin value (quarters) repeatedly until the remaining amount is less than the coin value. Repeat this process for each coin denomination (quarters, dimes, nickels, and pennies) in decreasing order.
Print the minimum number of coins needed.
Exit the program.
License
This program is released under the MIT License.

You can copy and paste this code into your project's README file to see the preview.
