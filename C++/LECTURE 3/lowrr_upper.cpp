#include<iostream>
using namespace std;

int main(){
    char A;
cout<<"Enter the character :";
cin>>A;

if(A>= 65 && A <= 90){
    cout<<"Its a uppercase alphabet";
}
else if(A>=97 && A<=122){
    cout<<"Its a lowercase letter";
}
else{
    cout<<"Its not a alphabet";
}

    return 0;
}