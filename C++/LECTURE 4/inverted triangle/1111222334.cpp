// Floyd reverse triangle pattern
#include <iostream>
using namespace std;

int main()
{

    int n;
    int num = 1;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = n; j > 0; j--)
        {

            cout << num ;
        }
        cout << endl;
        num++;
        }

    return 0;
}