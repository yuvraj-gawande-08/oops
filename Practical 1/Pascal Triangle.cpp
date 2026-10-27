#include <iostream>  // Header file for input and output
using namespace std; // To use cout and cin without std::

 // Function to calculate the binomial coefficient
int BinoCoef(int n, int k)
{
    int res = 1;  // Initialize result to 1

    // Calculate the binomial coefficient
    for(int i = 0; i < k; i++)
    {
        res *= (n - i); // Multiply result by (n - i)
        res /= (i + 1); // Divide result by (i + 1)
    }

    return res; // Return the calculated coefficient
}

// Function to print Pascal's Triangle
void printPascal(int n)
{
    // Outer loop controls the number of rows
    for(int l = 0; l < n; l++)
    {
        // Inner loop prints numbers in each row
        for(int m = 0; m <= l; m++)
        {
            cout << BinoCoef(l, m) << "\t"; // Print each number
        }

        cout << endl; // Move to the next line
    }
}

int main()
{
    int rows; // Variable to store the number of rows

    cout << "Enter number of rows: "; // Ask the user for input
    cin >> rows; // Read the number of rows

    printPascal(rows); // Call the function to print Pascal's Triangle

    return 0; // End the program successfully
}
