#include <iostream>
using namespace std;

// Function to accept array elements from the user
void acceptArray(int arr[], int n)
{
    cout << "Enter elements: "<< endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Function to display array elements
void displayArray(int arr[], int n)
{
    cout << "Array elements are:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

// Function to sort the array using Bubble Sort
void sorting(int arr[], int n)
{
    // Compare adjacent elements and swap if needed
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to swap two numbers
void swap(int &m, int &n)
{
    int temp = m;
    m = n;
    n = temp;
}

int main()
{
    int n;

    // Take the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    // Accept array elements
    acceptArray(arr, n);

    cout << "Before sorting\n";

    // Display original array
    displayArray(arr, n);

    // Sort the array
    sorting(arr, n);

    cout << "\nAfter sorting elements\n";

    // Display sorted array
    displayArray(arr, n);

    return 0;  
}
