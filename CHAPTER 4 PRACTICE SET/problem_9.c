/*Write a program to calculate the factorial of a given number using a while loop*/

#include <stdio.h>
int main()
{

    int i = 1;
    int n;
    int product = 1;
    printf("enter n \n");
    scanf("%d", &n);
    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("and the factorial of %d is %d ", n, product);

    return 0;
}