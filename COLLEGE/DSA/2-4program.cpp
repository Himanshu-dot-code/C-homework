#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, value, pos = -1;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value to delete: ";
    cin >> value;

    // Search for the value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            pos = i;
            break;
        }
    }

    // If value not found
    if (pos == -1)
    {
        cout << "Value not found!" << endl;
        return 0;
    }

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--; // Reduce size

    cout << "The new array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
