#include<iostream>
using namespace std ;

int main(){

    int m;

    cout<<"enter the marks : ";
cin>>m ;

if(m>=90){
    cout<<"Grade is : A";
}
else if(m>=80){
    cout<<"Grade is : B";
}
else if(m>=70){
    cout<<"Grade is : C";
}
else if(m>=60){
    cout<<"Grade is : D";
}
else if(m>=50){
    cout<<"Grade is : E";
}
else{
    cout<<"Grade is : F -- Fail";
}
return 0;
}