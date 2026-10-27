#include <iostream>
using namespace std;

class complex
{
    int real, img;  // Real and imaginary parts

public:
    // Function to accept the complex number
    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    // Function to display the complex number
    void display()
    {
        cout << "The complex number is: ";

        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }

    // Function for addition of two complex numbers
    complex add(complex c)
    {
        complex result;

        result.real = real + c.real;
        result.img = img + c.img;

        return result;
    }

    // Function for subtraction of two complex numbers
    complex subtract(complex c)
    {
        complex result;

        result.real = real - c.real;
        result.img = img - c.img;

        return result;
    }

    // Function for multiplication of two complex numbers
    complex multiply(complex c)
    {
        complex result;

        result.real = (real * c.real) - (img * c.img);
        result.img = (real * c.img) + (img * c.real);

        return result;
    }

    // Function for division of two complex numbers
    complex division(complex c)
    {
        complex result;

        // Calculate denominator: c² + d²
        int denominator = (c.real * c.real) + (c.img * c.img);

        result.real = ((real * c.real) + (img * c.img)) / denominator;
        result.img = ((img * c.real) - (real * c.img)) / denominator;

        return result;
    }

    // Function to find the complex conjugate
    complex conjugate()
    {
        complex result;

        result.real = real;
        result.img = -img;  // Change sign of imaginary part

        return result;
    }
};

int main()
{
    complex c1, c2, c3;

    // Assign values to complex numbers
    c1.accept(5, 3);
    c2.accept(4, 6);

    c1.display();
    c2.display();

    // Addition
    c3 = c1.add(c2);
    cout << "\nAddition:\n";
    c3.display();

    // Subtraction
    c3 = c1.subtract(c2);
    cout << "\nSubtraction:\n";
    c3.display();

    // Multiplication
    c3 = c1.multiply(c2);
    cout << "\nMultiplication:\n";
    c3.display();

    // Division
    c3 = c1.division(c2);
    cout << "\nDivision:\n";
    c3.display();

    // Complex conjugate of c1
    c3 = c1.conjugate();
    cout << "\nComplex Conjugate of c1:\n";
    c3.display();

    return 0;  
}

