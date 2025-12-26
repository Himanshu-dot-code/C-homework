#include <iostream>

using namespace std;

void factN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "factorial of " << n << " is : " << fact;
}

int main()
{

    int a;
    cout << "enter the value of n" << endl;
    cin >> a;

    factN(a);

    return 0;
}