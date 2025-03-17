#include <iostream>
using namespace std;
int main()
{

    int num = 1, n;
    
    cout << "Value of n : ";
    cin >> n;
    // num is declared outside of loop because we want new value of num after loop and not the one we declared .

    for (int i = 0; i <= n-1; i++)
    { //{outer}

        for (int j = 0; j <= n-1; j++)
        { //{inner}

            // cout<<j;
            cout << num;
            num ++;
        }

        cout << "\n";
    }

    return 0;
}