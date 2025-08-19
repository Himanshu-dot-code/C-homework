#include<iostream>
using namespace std;
// function to calculate sum of n numbers

void sumN(int n){
    int sum = 0;

    for(int i = 1; i<=n; i++){

        sum+=i;
    }
    cout<<"sum of "<<n<< "numbers is : "<<sum<<endl; 
}


int main(){
    int a;
    cout<<"enter the value of n: "<<endl;
    cin>>a;
    sumN(a);
    return 0;
}