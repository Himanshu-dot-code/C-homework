#include <iostream>
using namespace std;
int main()
{
    
    int a[100], n, sum = 0;
    cout<< "Enter the number of elements: ";
    cin>> n;
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum of the numbers is: " << sum;
    return 0;
}
