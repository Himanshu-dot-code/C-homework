#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    { //{outer}
        char ch = 'A'; //declared here in outer loop so that A is dont get changed ..
        for (int j = 1; j <= n; j++)
        { //{inner}
            cout <<ch;
            ch = ch + 1; //To update the character. 

        }

        cout << "\n";
    }

    return 0;
}