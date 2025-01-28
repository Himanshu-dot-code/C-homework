/*
Write a program to calculate the factorial of a given number using a for loop*/

#include <stdio.h>
int main()
{
    int n;
    int product = 1;
    printf("enter number \n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        product *= i;
    }

    printf("The factorial of the no. is %d", product);

    return 0;
}