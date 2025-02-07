/*Write your own version of strlen function from <string.h>*/

#include<stdio.h>


int strlen(char str[]){

    int i = 0;
    int count;
    char c = str[i];

    while (c!='\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
int main(){
    char st[] = "negi";
    
    printf("length of string is %d", strlen(st));




    return 0;
}