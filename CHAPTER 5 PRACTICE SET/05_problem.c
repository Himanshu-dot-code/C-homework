#include <stdio.h>
int main(){
int a = 4;
printf("%d %d %d \n", a, ++a, a++); 
// here the output should be 4 5 5 but the compiler shows 6 6 4 
/* this is because in c , it is not defined whether to evaluate from left to right or right to left so
differnet compilers can give different results...*/
 return 0;
}