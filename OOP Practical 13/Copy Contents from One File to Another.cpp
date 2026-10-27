#include <iostream>  // Header file for input and output
#include <fstream>   // Header file for file handling
using namespace std;

int main()
{
    // Open input.txt for reading
    ifstream fin("input.txt");

    // Open output.txt for writing
    ofstream fout("output.txt");

    char ch; // Variable to store one character at a time

    // Check whether the input file opened successfully
    if (!fin)
    {
        cout << "Unable to open input file.";
        return 1; // Exit if the input file cannot be opened
    }

    // Read characters until the end of the input fi
