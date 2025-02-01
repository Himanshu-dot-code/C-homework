// Write a function to convert Celsius temperature into Fahrenheit.

#include<stdio.h>

float c_to_f(float);

int main(){

float c, f;

printf("enter the temperatue in celsius\n");
scanf("%f", &c);

f = c_to_f(c);
printf("The temperature in farhenheit is: %.3f", f);

    return 0;
}

float c_to_f(float a){

    return (9.0/5.0)*a + 32;
}
