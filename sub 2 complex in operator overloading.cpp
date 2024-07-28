#include <iostream>
class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    void display() const {
        std::cout << "(" << real << " + " << imaginary << "i)";
    }
};
int main() {
    Complex c1(5.0, 3.0);
    Complex c2(2.0, 1.0);
    Complex result = c1 - c2;
    std::cout << "Result of subtraction: ";
    result.display();
    std::cout << std::endl;
    return 0;
}

