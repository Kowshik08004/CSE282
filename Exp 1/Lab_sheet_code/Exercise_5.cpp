//Write a C++ program to subtract two complex numbers.

#include <iostream>

using namespace std;

// Structure to represent a complex number
struct Complex {
   float real;
   float imag;
};

// Function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2) {
   Complex result;
   result.real = c1.real - c2.real;
   result.imag = c1.imag - c2.imag;
   return result;
}

int main() {
   Complex num1, num2, difference;

   cout << "Enter the real and imaginary parts of first complex number: ";
   cin >> num1.real >> num1.imag;

   cout << "Enter the real and imaginary parts of second complex number: ";
   cin >> num2.real >> num2.imag;

   difference = subtractComplex(num1, num2);

   cout << "Difference of complex numbers: " << difference.real << " + " << difference.imag << "i" << endl;

   return 0;
}
