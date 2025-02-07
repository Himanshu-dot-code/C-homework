/* Write a program using function to print the following pattern (first n lines)
 *
 * * *
 * * * * *  */

#include <stdio.h>

int main()
{

    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // this loop runs from i = 0 to 2
        // for i = 0 ---> print 1 star
        // for i = 1 ---> print 3 star
        // for i = 2 ---> print 5 star
        // no. of stars = (2*i)+1

        for (int j = 0; j < (2 * i + 1); j++)
        {
            // this for loop prints 2*i + 1 stars.

            printf("*");
        }
        printf("\n");
        // this printf prints new line.
    }
    return 0;
}