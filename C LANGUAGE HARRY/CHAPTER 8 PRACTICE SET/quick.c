/*create a string using double quotes and print its content using a loop*/
#include<stdio.h>

int main(){
     char s[] = "negi";
    // char s[] = {'n', 'e', 'g', 'i', '\0'}; same as above.

    for (int i = 0; i < 4; i++)
    {
        // printf("character is %c \n", s[i]);
        printf("%c", s[i]);
    }
    



    return 0;
}