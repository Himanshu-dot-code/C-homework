/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array*/

#include<stdio.h>

int main(){
    
    int arr[] = {0,1,2,3,4,5,6,7,8,9,};

    int* ptr = &arr[0];
    printf("ptr is pointing to %d\n", *ptr);
   
    *ptr+2;

    printf("(ptr+2) is pointing to %d", *ptr+2);

   


    return 0;
}