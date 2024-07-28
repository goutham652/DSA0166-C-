
#include <iostream>
#include <cmath>
long long power(int base, int exponent) {
    return static_cast<long long>(std::pow(base, exponent));
}
double power(double base, double exponent) {
    return std::pow(base, exponent);
}
int main() {
    int intBase = 2, intExponent = 5;
    double doubleBase = 2.5, doubleExponent = 3.0;
    std::cout << "Power of " << intBase << " raised to " << intExponent << " (integer): " << power(intBase, intExponent) << std::endl;
    std::cout << "Power of " << doubleBase << " raised to " << doubleExponent << " (floating-point): " << power(doubleBase, doubleExponent) << std::endl;
    return 0;
}

