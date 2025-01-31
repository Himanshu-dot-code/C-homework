// Write a program using function to find average of three numbers.


#include<stdio.h>

float avg(int a, int b, int c);
float avg(int a, int b, int c)
{

    // return (a+b+c)/3; here , division is between int and int so value will be integer..
    // it can cause error during avg like avg of 1 3 and 3 should be 2.3333 but it will show 2.00..
    return (a+b+c)/(float)3; //so this is used to correct it...
}
int main(){

int x, y, z;
float average ;
printf("Enter the three numbers\n");
scanf("%d%d%d", &x, &y, &z);

average = avg(x,y,z);

printf("The average of the numbers is %f\n", average);

    return 0;
}