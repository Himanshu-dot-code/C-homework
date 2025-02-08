#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abacadae"; // Given string
    char c = 'b';            // Character to search
    int found = 0;           // Flag to track presence

    int length = strlen(str); // Store the length to avoid redundant calculations

    for (int i = 0; i < length; i++)
    {
        if (str[i] == c)
        {
            found = 1; // Mark as found
            break;     // Exit the loop once found
        }
    }

    // Print the result after checking all characters
    if (found)
    {
        printf("Yes, it is present.\n");
    }
    else
    {
        printf("No, it is not present.\n");
    }

    return 0;
}
