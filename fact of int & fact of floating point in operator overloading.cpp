#include <iostream>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}
double factorial(double n) {
    if (n == 0.0 || n == 1.0) {
        return 1.0;
    } else {
        double result = 1.0;
        for (double i = 2.0; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}
int main() {
    int intNum = 5;
    double doubleNum = 5.5;

    std::cout << "Factorial of " << intNum << " (integer): " << factorial(intNum) << std::endl;
    std::cout << "Factorial of " << doubleNum << " (floating-point): " << factorial(doubleNum) << std::endl;

    return 0;
}

