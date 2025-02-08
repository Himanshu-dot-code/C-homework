/*Write your own version of strcpy function from <string.h>*/

#include <stdio.h>

// mystrcpy function that copies one string to another
char *mystrcpy(char original[], char copied[])
{
    int i = 0; // Initialize an index variable to track positions in the arrays

    // Loop through the original string until we encounter the null terminator
    while (original[i] != '\0')
    {
        copied[i] = original[i]; // Copy character from original to copied
        i++;                     // Move to the next character in both strings
    }

    copied[i] = '\0'; // Null-terminate the copied string to make it a valid string

    return copied; // Return the destination string (copied)
}

int main()
{
    char source[] = "negi"; // Declare a source string
    char target[10];        // Declare a target string with enough space to hold the copied string

    mystrcpy(source, target); // Copy the content of 'source' into 'target'

    // Print both the original and copied strings
    printf("Source: %s\nTarget: %s\n", source, target);

    return 0; // Indicate successful execution
}
