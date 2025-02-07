// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int nsum(int);
int nsum(int n){
    if(n==1){
        return 1;
    }

    return nsum(n-1)+ n; 
}


int main(){

int n = 5;
printf("the sum of %d natural numbers is %d ", n, nsum(n));

    return 0;
}