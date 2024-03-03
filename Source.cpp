#include "Complex.h"
using namespace std;

int main() {
    Complex num1, num2, sum, product;
    
    num1.Read();
    num2.Read();

    sum = num1.Add(num2);
    product = num1.Multiply(num2);

    cout << "num1: ";
    num1.Display();
    cout << endl;

    cout << "num2: ";
    cout << num2.toString() << endl;

    cout << "Sum: ";
    sum.Display();
    cout << endl;

    cout << "Product: ";
    cout << product.toString() << endl;

    if (num1.IsEqual(num2)) {
        cout << "num1 is equal to num2." << endl;
    } else {
        cout << "num1 is not equal to num2." << endl;
    }

    return 0;
}
