#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"enter the number : ";
    cin>>number;
for(int i = 1; i> number -1; i++ ){

    if(number%i != 0){
        cout<<"Prime number";
    break;
    }
    else {
        cout<<"Non prime number";
        break;
    }
}

    return 0;
}