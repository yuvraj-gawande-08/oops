#include <iostream>  // Header file for input and output
using namespace std;

// Function template for addition
template <typename T>
T add(T a, T b)
{
    return a + b; // Return the sum of two values
}

// Function template for subtraction
template <typename T>
T subtract(T a, T b)
{
    return a - b; // Return the difference
}

// Function template for multiplication
template <typename T>
T multiply(T a, T b)
{
    return a * b; // Return the product
}

// Function template for division
template <typename T>
T division(T a, T b)
{
    return a / b; // Return the division result
}

// Class template for Calculator
template <typename T>
class Calculator
{
    T num1, num2; // Variables to store two numbers

public:
    // Constructor to initialize the numbers
    Calculator(T n1, T n2)
    {
        num1 = n1; // Store the first number
        num2 = n2; // Store the second number
    }

    // Function to display all arithmetic results
    void dispRes()
    {
        cout << "Addition = " << add(num1, num2) << endl;
        cout << "Subtraction = " << subtract(num1, num2) << endl;
        cout << "Multiplication = " << multiply(num1, num2) << endl;

        // Check whether the second number is zero
        if (num2 != 0)
            cout << "Division = " << division(num1, num2) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main()
{
    cout << "--- Function and Class Template Demonstration ---" << endl;
    
    // Demonstrate with integer types
    cout << "\nInteger Operations (10 and 5):" << endl;
    Calculator<int> intCalc(10, 5);
    intCalc.dispRes();

    // Demonstrate with float types
    cout << "\nFloat Operations (12.5 and 2.5):" << endl;
    Calculator<float> floatCalc(12.5f, 2.5f);
    floatCalc.dispRes();

    return 0;
}
