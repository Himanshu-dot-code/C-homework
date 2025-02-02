/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?*/

#include<stdio.h>

int return_type(int*);
int return_type(int* ptr){
    printf("The value of ptr is %d\n", ptr);
   


return 5;
}

int main(){
    int i = 2;
    int* ptr = &i;
    printf("the address of i is %u\n", &i); // format specifer for pointers-->prints addresses.
    return_type(ptr);

        return 0;
}

// output.
// the address of i is 6422296
// The value of ptr is 6422296


/*he addresses are the same because we are passing the address of i directly to the function using a pointer.
 This means the function does not create a copy of i but rather operates on the original memory location.*/