/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>
int main(){

    int marks1 , marks2, marks3;
    printf("ENTER MARKS1\n");
    scanf("%d", &marks1);

    printf("ENTER MARKS2\n");
    scanf("%d", &marks2);

    printf("ENTER MARKS3\n");
    scanf("%d", &marks3);
 
 printf("THE MARKS ARE : %d %d and %d\n", marks1,marks2,marks3);

 if (marks1<33||marks2<33||marks3<33){
    printf("YOU ARE FAIL IN INDIVIUAL SUBJECT(S)");
 }

 else if ((marks1+marks2+marks3)/3 <40){
    printf("you are fail ");
 }
else {
    printf("BALLE BALLE");
}




    return 0;
}