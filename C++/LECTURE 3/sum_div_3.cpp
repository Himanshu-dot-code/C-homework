#include<iostream>
using namespace std;

int main(){
// sum of numbers from 1 to n which are divisible by 3.
    int sum = 0, n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i = 1; i<= n; i++){

        if(i%3==0){
            sum += i;
        }
    }

    cout<<"sum is : "<<sum ;


    return 0;
}