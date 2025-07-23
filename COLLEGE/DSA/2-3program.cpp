#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, pos;;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    cout << "Enter the values :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        cout<<"enter the position : ";
        cin>>pos;
    for (int i = pos; i < n; i++)
    {
        arr[i-1]=arr[i];
    }
    n = n-1;
    cout<<"The new array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}