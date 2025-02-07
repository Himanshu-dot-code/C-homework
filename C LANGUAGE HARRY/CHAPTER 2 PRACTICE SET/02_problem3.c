#include <stdio.h>
int main()
{

    int NUMBER;
    printf("ENTER NUMBER\n");
    scanf("%d", &NUMBER);

    int remainder = NUMBER % 97;
    printf("The value of NUMBER %% 97 is %d\n", remainder);
    printf(" if the remainder is 0, the number is divisible by 97.\n");
    return 0;
}

// A program to check whether a no. is divisible by 97 or not.
