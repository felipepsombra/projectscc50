#include <stdio.h>

int main(void)
{
    char nome[100];//Variable declaration to store the username
    
    printf("What's your name? ");//Ask for the username
    scanf("%s", nome);//Reads the name entered by the user and stores it in 'name'
    
    printf("Hello, %s!\n", nome);//Prints personalized greeting with name
    
    return 0;//Returns 0 to indicate that the program ran successfully
}