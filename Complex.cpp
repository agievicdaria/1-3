#include "Complex.h"
#include <sstream> 
using namespace std;

void Complex::Init(double x, double y) {
    real = x;
    imaginary = y;
}

void Complex::Read() {
    double x, y;
    cout << "Input complex value:" << endl;
    cout << " Real = "; cin >> x;
    cout << " Imaginary = "; cin >> y;

    Init(x, y);
}

void Complex::Display() {
    cout << "(" << real << ", " << imaginary << ")";
}

const string Complex::toString() const {
    stringstream sout;
    sout << "(" << real << ", " << imaginary << ")" << endl; 
    return sout.str();
}

Complex Complex::Add(const Complex& secondNumber) const {
    Complex result;
    result.real =  this->real + secondNumber.real;
    result.imaginary =  this->imaginary + secondNumber.imaginary;
    return result;
}

Complex Complex::Multiply(const Complex& secondNumber) const {
    Complex result;
    result.real = this->real * secondNumber.real - this->imaginary * secondNumber.imaginary;
    result.imaginary = this->real * secondNumber.imaginary + this->imaginary * secondNumber.real;
    return result;
}

bool Complex::IsEqual(const Complex& secondNumber) const {
    return (real == secondNumber.real) && (imaginary == secondNumber.imaginary);
}
