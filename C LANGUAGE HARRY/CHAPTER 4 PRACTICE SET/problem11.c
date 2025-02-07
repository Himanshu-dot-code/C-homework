//  Implement 10 using other types of loops.

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

        // int i = 2;
        // while (i < n)
        // {
        //     if (n % i == 0)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // }

        int i = 2;
        do
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
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