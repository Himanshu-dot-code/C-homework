#include<iostream>
using namespace std;
int main(){

int sum = 0, n;
cout<<"n is : ";
cin>>n;

for(int i = 1; i <=n; i++)
{
    if(i%2 != 0){
        sum += i;
    }
}

cout<<"sum is " <<sum;

    return 0;
}