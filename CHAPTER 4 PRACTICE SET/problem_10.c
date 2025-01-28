//  Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
int main()
{
    int n;
    int not_prime = 0;
    printf("ENTER n \n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }

    else
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not a prime no. \n", n);
    }

    else
    {
        printf("%d is a prime no. \n", n);
    }

    return 0;
}