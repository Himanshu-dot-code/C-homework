#include<iostream>
using namespace std;

int main(){
    int n, fact= 1;

    cout<<"Enter the value of n : ";
    cin>>n;



    for(int i = 2; i<= n; i++){

        if(n==0 || n==1){

            break;
        }
        fact = fact*i;

    }

cout<<"factorial of "<<  n  <<" is "<< fact;


    return 0;
}