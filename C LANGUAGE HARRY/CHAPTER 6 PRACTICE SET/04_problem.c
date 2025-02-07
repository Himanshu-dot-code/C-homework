// Write a function and pass the value by reference.

#include<stdio.h>

int function(int*);
int function(int* a){  //here the function takes pointer as a input.
*a = *a + 10;
    return 0;
}

int main(){
    
int i = 3;

function(&i);
printf("%d", i);



    return 0;
}