/*Write a program containing functions which counts the number of positive
integers in an array.*/
#include<stdio.h>
int count(int arr[], int n);
int count(int arr[], int n)
{
    int positive_number = 0;
    for (int i = 0; i < n; i++)
    {
       
        if (arr[i]>0)       
    
        {
            positive_number++;
                
        }
        
    }
    return positive_number;
}
int main(){
    
int arr[] = {-1,2,3,4,5,6};

 

printf("Number of positive integers are %d \n", count(arr , 6));


    return 0;
}