#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers : ";
    cin>>a>>b>>c ;
    if(a>b&&b>c){
        cout<<"a is the greatest";
    }

else if (b>a && a>c)
{
    cout<<"b is the greatest"; 
}

else 
    cout<<"c is the greatest";
    return 0;
}