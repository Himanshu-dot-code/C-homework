/*Write a program to create an array of 10 integers and store
 multiplication table of
5 in it.*/
#include<stdio.h>

int main(){
    
int arr[10];

for (int i = 0; i < 10; i++)
{
    arr[i] = 5*(i + 1); //i + 1 is used so that 0 ki jagah 1 aaye
    //  and 9 ki jagah 10
}
for (int i = 0; i < 10; i++)
{
    printf("The value of 5 X %d is %d\n ", i+1, arr[i]);
}





    return 0;
}