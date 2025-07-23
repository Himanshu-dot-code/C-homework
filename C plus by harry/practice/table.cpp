#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num ;
    cout << "The multiplication table  of " << num << " : "<<endl ;

    for(int i=1; i<=10; i++){
       
        cout<<num<<" x "<<i<<" = "<<num*i;
        cout<<endl ;
    }
    return 0;
}