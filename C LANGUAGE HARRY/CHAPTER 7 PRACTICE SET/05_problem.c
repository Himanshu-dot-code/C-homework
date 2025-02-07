// Write a program containing a function which reverses the array passed to it.

#include<stdio.h>
void printarray(int a[], int n); //function to print array
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++) //loop is from i to n
    {
        printf("%d", a[i]);
    }
    printf("\n");

}
void reverse(int arr[], int n); //function to reverse the array
void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n/2; i++) /*loop is from i to n/2.
     swapping is done till midpoint
    if n is taken instead of n/2 then swapping will done again
     ..and same array will be there*/

    {
       temp = arr[i];
       arr[i] = arr[n - i - 1];
       arr[n - i - 1] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    printarray(arr, 6);
    reverse(arr, 6);
    printarray(arr, 6);





    return 0;
}