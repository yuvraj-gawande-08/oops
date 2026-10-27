#include <iostream>
using namespace std;

// Function to add two integer numbers
int add(int p, int q)
{
    int r = p + q;
    return r;
}

// Function to add three float numbers
float add(float a, float b, float c)
{
    float sum = a + b + c;
    return sum;
}

// Function to add three integer numbers
int add(int x, int y, int z)
{
    return (x + y + z);
}

int main()
{
    // Calling function to add two integers
    int r = add(10, 5);
    cout << "\nAddition of two numbers: " << r;

    // Calling function to add three float numbers
    float s = add(10.5f, 2.4f, 15.6f);
    cout << "\nAddition of three float numbers: " << s;

    // Calling function to add three integers
    int res = add(2, 11, 24);
    cout << "\nAddition of three numbers: " << res;

    return 0;  
}
