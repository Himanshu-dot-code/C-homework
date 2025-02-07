// Write a program to accept marks of five students in an array and print them
// on the screen.
#include <stdio.h>

int main()
{
    int marks[5];
     printf("ENTER THE MARKS OF 5 STUDENTS\n");
     /*scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);

    printf("the marks are %d,%d,%d,%d,%d,", marks[0], marks[1], marks[2], marks[3], marks[4]);
*/

     for (int i = 0; i < 5; i++)
     {
         scanf("%d", &marks[i]); 
}
     for (int i = 0; i < 5; i++)
     {
         printf("The marks at index %d is %d\n",i, marks[i]); 
}

    return 0;
}