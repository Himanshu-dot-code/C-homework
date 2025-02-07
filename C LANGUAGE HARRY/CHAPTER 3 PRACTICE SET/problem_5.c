/*Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>
int main()
{

    char ch;
    printf("Enter character\n");
    scanf("%c", &ch);
    printf("The character is %c \n", ch);
    printf("The value of character is %d \n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase\n");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("It is not a lowercase character\n");
    }
    else
    {
        printf("It is not a alphabet ");
    }

    return 0;
}