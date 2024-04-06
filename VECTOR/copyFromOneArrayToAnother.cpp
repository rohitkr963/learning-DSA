#include<iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], i, n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements for the array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Copying elements to the second array in reverse order
    for(i = n-1; i >= 0; i--)
    {
        arr2[i] = arr1[n-i-1];
    }

    // Printing the contents of the second array
    cout << "Elements of array2: ";
    for(i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
