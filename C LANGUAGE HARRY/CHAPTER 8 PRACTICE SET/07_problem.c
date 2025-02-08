/*Write a program to decrypt the string encrypted using encrypt function in
problem 6*/

#include<stdio.h>

int main(){

    char str[] = "d!mbohvbhf!jt!cflbbs";

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s \n", str); // now this decrypt the code..and gives the output (c language is bekaar)

    return 0;
}