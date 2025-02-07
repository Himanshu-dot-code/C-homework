/*Write a program to print multiplication table of a given number n.*/

#include <stdio.h>
int main()
{

    int i = 1;
    int n;
    printf("enter value of n \n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf(" %d x %d = %d \n", n, i, n * i);
    }

    return 0;
}