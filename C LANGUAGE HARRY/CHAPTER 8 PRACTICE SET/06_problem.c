/*Write a program to encrypt a string by adding 1 to the ascii value of its
characters.*/

#include<stdio.h>
#include<string.h>


int main(){
     char str[] = "c language is bekaar";

     for (int i = 0; i < strlen(str); i++)
     {
         str[i] = str[i] + 1;
     }

 printf("%s \n", str);
    // it gives this output -- (d!mbohvbhf!jt!cflbbs)
    // basically it encrypted the string..
   


    return 0;
}