#include<iostream>
using namespace std;
class Demo{
    private:
    static int x;
    public:
    static void func(){
        cout<<"Value of X :"<<x<<endl;
    }
};
int Demo::x = 10;

int main(){

    Demo x;
    x.func();
    return 0;
}