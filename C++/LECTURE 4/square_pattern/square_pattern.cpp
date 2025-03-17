#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Value of n : ";
    cin>>n;

    for(int i = 1; i <= n; i++){ //{outer}

        for(int j = 1; j <= n; j++){//{inner}

            // cout<<j;
            cout<<"*";
        }

    cout<<"\n";
    }




    return 0;
}