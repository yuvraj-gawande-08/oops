#include <iostream>
using namespace std;

int main()
{
   int sume = 0;  // Stores the sum of even numbers

   // Loop from 1 to 50
   for(int i = 1; i <= 50; i++)
   {
       // Check if the number is even
       if(i % 2 == 0)
           sume = sume + i;  // Add even number to sume
   }

   // Display the sum of even numbers
   cout << "Sum of even numbers is " << sume << endl;

   return 0;  
}
