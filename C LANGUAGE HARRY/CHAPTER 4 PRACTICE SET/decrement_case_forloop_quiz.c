/*Write a program to print ‘n’ natural numbers in reverse order.*/

#include <stdio.h>
int main()
{
    int n = 15;
    int i;
    for (i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}