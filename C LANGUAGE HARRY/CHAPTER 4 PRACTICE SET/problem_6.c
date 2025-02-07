/*
Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.*/
#include <stdio.h>
int main()
{
    int sum = 0;
    /*for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural numbers is %d", sum);*/

    // DO WHILE LOOP
    int i = 1;
    do
    {
        sum += i;
        i++;

    } while (i <= 10);

    printf("The sum of 10 natural numbers is %d", sum);

    return 0;
}