/*Repeat problem 7 for a custom input given by the user*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("enter the numbers \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int mul[] = {n1, n2, n3}; // TOUGH ONE ********************************
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d is %d \n", mul[i], j + 1, arr[i][j]);
        }
    }

    return 0;
}