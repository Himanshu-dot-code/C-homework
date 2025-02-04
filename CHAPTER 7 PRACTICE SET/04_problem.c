/*Repeat problem 3 for a general input provided by the user using scanf.*/

#include<stdio.h>


    int main()
    {

        int arr[10];
        int n;
        printf("Enter the number for table\n");
        scanf("%d", &n);

        for (int i = 0; i < 10; i++)
        {
            arr[i] = n*(i + 1); // i + 1 is used so that 0 ki jagah 1 aaye
            //  and 9 ki jagah 10
        }
        for (int i = 0; i < 10; i++)
        {
            printf("The value of %d X %d is %d\n ", &n, i + 1, arr[i]);
        }

        return 0;
    }