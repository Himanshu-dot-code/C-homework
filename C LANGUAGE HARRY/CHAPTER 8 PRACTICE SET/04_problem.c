/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/

#include<stdio.h>
char *slice(char str[], int m, int n);
char *slice(char str[], int m, int n)
{
    int i = 0, count;
    char *ptr1 = &str[m]; //////tough....
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    
   char str[] = "negi";
   printf("%s \n", slice(str, 2, 3));



    return 0;
}