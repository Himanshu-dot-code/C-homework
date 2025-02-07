#include<stdio.h>

int main(){
    int i = 2;
    int* a = &i;
   printf("the a is %u\n", a);
   a++;
   printf("the a after increment is %u\n", a);
    // increment of 4 happened.

  

   char j = 'A';
   char *b = &j;
   printf("the b is %u\n", b);
   b++;
   printf("the b after increment is %u\n", b);
    // increment of 1 happened.
    
   int k = 8;
   int *c = &k;
   printf("the c is %u\n", c);
   c++;
   printf("the c after increment is %u\n", c);

   int ptr = a - c;

   printf("ptr is %d", ptr);

   return 0;
}