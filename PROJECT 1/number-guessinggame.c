
// PROJECT 1: NUMBER GUESSING GAME
// We will write a program that generates a random number and asks the player to guess
// it. If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.
// When the user guesses the correct number, the program displays the number of
// guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.

#include <stdio.h>  // This line includes the standard input/output library to print messages on the screen
#include <stdlib.h> // This line includes the standard library, which contains the rand() function
#include <time.h>   // This line includes the time library, which is used to get the current time

int main()
{
    srand(time(0)); // This line sets the random number generator with the current time

    int randomNumber = rand() % 100 + 1; // This generates a random number between 1 and 100
    int guessed_no;
    int number_of_guesses = 0;

    do
    {
        printf("ENTER THE NUMBER \n");
        scanf("%d", &guessed_no);

        if (guessed_no > randomNumber)
        {
            printf("GUESS A LOWER VALUE \n");
        }
        else if (guessed_no < randomNumber)
        {
            printf("GUESS A HIGHER  VALUE \n");
        }
        else
        {
            printf("CONGRATS \n");
        }
        number_of_guesses++;

    } while (guessed_no != randomNumber);

    printf(" YOU WON THE GAME IN %d guesses ", number_of_guesses);

    return 0;
}
