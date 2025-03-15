#include<iostream>
using namespace std;

int main(){

int sum = 0, n;

cout<<"enter the value of n: ";
cin>>n;

for(int i=0; i<=n; i++){

    sum = sum + i;
}
cout<<"sum of 1 to "<<n<<" is: "<<sum;



    return 0;
}