/*
Write a program to find greatest of four numbers entered by the user
*/

#include <stdio.h>

int main()
{

    int a, b, c, d;
    printf("Enter first number\n");
    scanf("%d", &a);

    printf("Enter second number\n");
    scanf("%d", &b);

    printf("Enter third number\n");
    scanf("%d", &c);

    printf("Enter fourth number\n");
    scanf("%d", &d);

    printf("The numbers are %d %d %d and %d \n", a, b, c, d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d", a);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest of all is %d", c);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d", b);
    }
    else if (d > a && d > c && d > b)
    {
        printf("The greatest of all is %d", d);
    }

    return 0;
}