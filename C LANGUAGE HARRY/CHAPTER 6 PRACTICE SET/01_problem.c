/* Write a program to print the address of a variable. Use this address to get the
value of the variable.*/

#include<stdio.h>

int main(){
    int i=2;
    int* ptr = &i;
    printf("the address of i is %p\n", &i); //format specifer for pointers-->prints addresses.
    printf("the address of i is %u\n", &i);  //format specifier for (unsigned integer)positive integers

    printf("the value of i is %d", *ptr);

    return 0;
}