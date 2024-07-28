#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend Complex addComplex(const Complex&, const Complex&);
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};
Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, -1.5);
    std::cout << "Complex number 1: ";
    c1.display();
    std::cout << "Complex number 2: ";
    c2.display();
    Complex sum = addComplex(c1, c2);
    std::cout << "Sum of complex numbers: ";
    sum.display();
    return 0;
}
