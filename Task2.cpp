#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor (optional)
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overload the stream insertion operator (<<)
    friend ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << "+" << c.imaginary << "i";
        return os;
    }

    friend istream& operator>>(std::istream& is, Complex& c) {
        cout << "Please enter real part of complex number: ";
        is >> c.real;
        cout << "Please enter imaginary part of complex number: ";
        is >> c.imaginary;
        return is;
    }
};

int main() {
    Complex com1;
    cin >> com1;
    cout << "The complex object is: " << com1 << std::endl;

    system("pause");
    return 0;
}

