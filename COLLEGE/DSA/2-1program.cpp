#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, value;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    cout << "Enter the values :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value to add at end : " << endl;
    cin >> value;

    arr[n] = value;
    n = n + 1;

    cout<<"The new array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}