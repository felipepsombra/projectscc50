# Pyramid Builder

This program builds a pyramid of a given height using the '#' character.

## Usage

To run the program, compile and execute the code using a C compiler. The program will prompt you to enter the height of the pyramid. The height should be an integer between 1 and 8 (inclusive). After entering the height, the program will build and print the pyramid accordingly.

```bash
gcc -o pyramid_builder pyramid_builder.c
./pyramid_builder
```
## Example
Example: Building a pyramid of height 5

Height: 5
    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####

The program asks for the height of the pyramid and then builds and prints the pyramid according to the entered height.

## Implementation Details
The program is implemented in C and follows these steps:

Prompt the user to enter the height of the pyramid.
Read the height entered by the user.
Validate the entered height to ensure it is between 1 and 8 (inclusive).
Build the pyramid using nested loops and print each row of the pyramid.
The left pyramid spaces are printed first, followed by the left pyramid bricks.
A gap is printed between the pyramids.
Finally, the right pyramid bricks are printed.
Repeat step 4 for each row of the pyramid until the desired height is reached.
Exit the program.
## License
This program is released under the MIT License.
