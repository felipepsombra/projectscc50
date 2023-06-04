# Population Growth Simulator

This program simulates the growth of a population over time until it reaches a specified size.

## Usage

To run the program, compile and execute the code using a C compiler. The program will prompt you to enter the initial and final population sizes. The initial population size should be a positive integer greater than or equal to 9, and the final population size should be a positive integer greater than or equal to the initial population size. After entering the population sizes, the program will simulate the growth and print the number of years required to reach the final population size.

```bash
gcc -o population_growth population_growth.c
./population_growth
```
## Example
Example: Simulating population growth from an initial size of 10 to a final size of 100

Start size: 10
End size: 100
Years: 15

The program asks for the initial and final population sizes and then simulates the population growth until the final size is reached. In this example, it takes 15 years for the population to grow from 10 to 100.

## Implementation Details
The program is implemented in C and follows these steps:

Prompt the user to enter the initial population size.
Read the initial population size entered by the user.
Validate the entered initial population size to ensure it is a positive integer greater than or equal to 9.
Prompt the user to enter the final population size.
Read the final population size entered by the user.
Validate the entered final population size to ensure it is a positive integer greater than or equal to the initial population size.
Initialize a counter for the number of years.
Simulate the population growth using a loop until the initial population size reaches the final population size.
Calculate the number of births and deaths based on the current population size.
Update the population size by adding the births and subtracting the deaths.
Increment the year counter.
Print the number of years required to reach the final population size.
Exit the program.
## License
This program is released under the MIT License.
