// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2.

#include<stdio.h>
// function prototype
float force(float x);
// fuction definition
float force(float x)
{
    float g = 9.8;
  return x*g;
}

int main(){

float m, f;
printf("Enter mass in KG\t");
scanf("%f", &m);

f = force(m);

printf("Force of attraction on mass %.2f kg is %.2f Newton", m, f);

    return 0;
}