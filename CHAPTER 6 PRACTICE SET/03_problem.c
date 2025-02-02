// Write a program to change the value of a variable to ten times of its current
// value.

#include<stdio.h>

    void ten_times(int*);
    void ten_times(int* a){
        *a = *a * 10;
    }

    int main(){
    int x;

    printf("enter the value of x\n");
    scanf("%d", &x);
    
    ten_times(&x);
    printf("the value of x becomes %d\n", x);

    return 0;
}