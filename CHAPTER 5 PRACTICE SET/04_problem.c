// Write a program using recursion to calculate nth element of Fibonacci series.

/*

The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones. 
It starts with:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

FORMULA = f(n)= f(n-1)+ f(n-2)
and f(1)=1 and f(0)= 0
*/

#include<stdio.h>

int fibonacci(int);
int fibonacci(int n)
{
    if (n==1){
        return 0;
    }
else if (n==2)
{
    return 1;
}
else {

    return  fibonacci(n-1)+ fibonacci(n-2);
}
}
int main(){
    int n = 6;
    printf("the value of n is %d ", n);
    printf(" the fibonacci term is %d", fibonacci(n));
    return 0;
} 
