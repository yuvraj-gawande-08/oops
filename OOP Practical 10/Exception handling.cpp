#include <iostream>  // Header file for input and output
using namespace std; // To use cout and cin without std::

int main()
{
    int a, b, c; // Variables to store two numbers and the result

    cout << "Enter 2 numbers: " << endl; // Ask the user to enter two numbers
    cin >> a >> b; // Accept two numbers from the user

    try // Block to check for exceptions
    {
        if(b == 0) // Check whether the second number is zero
        {
            throw b; // Throw an exception if b is zero
        }

        c = a / b; // Divide a by b and store the result
        cout << "Division is: " << c << endl; // Display the result
    }
    catch(int x) // Catch the integer exception
    {
        cout << "Arithmetic error\n"; // Display error message
        cout << "Divide by: " << x << endl; // Display the value causing the error
    }

    cout << "After Division operation"; // Execute after try-catch

    return 0; // End the program successfully
}
