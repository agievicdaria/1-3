#pragma once

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    double GetReal() const { return real; }
    double GetImaginary() const { return imaginary; }
    void SetReal(double value) { real = value; }
    void SetImaginary(double value) { imaginary = value; }

    void Init(double x, double y);
    void Read();
    void Display();
    const string toString() const;
    Complex Add(const Complex& secondNumber) const;
    Complex Multiply(const Complex& secondNumber) const;
    bool IsEqual(const Complex& secondNumber) const;
};
