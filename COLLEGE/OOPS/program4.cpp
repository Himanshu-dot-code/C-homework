#include <iostream>
using namespace std;

class abc{
    int x;
    public :
    int func1(int a){
        x = a;
    }
    void func2() const 
    {
        ++x;
        cout<<"value of x : "<<x<<endl;
    }
};

int main(){
    abc d;
    d.func1(15);
    d.func2();
    return 0;
}