#include <iostream>
using namespace std;
int main()
{
    
    int n;
    long fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial of negative number is not defined.";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " is: " << fact;
    }
   
    return 0;
}