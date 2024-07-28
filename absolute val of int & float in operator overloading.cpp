#include <iostream>
#include <cmath> 
int absolute(int num) {
    return std::abs(num);
}
double absolute(double num) {
    return std::abs(num);
}
int main() {
    int intNum = -5;
    double doubleNum = -3.5;

    std::cout << "Absolute value of " << intNum << " (integer): " << absolute(intNum) << std::endl;
    std::cout << "Absolute value of " << doubleNum << " (floating-point): " << absolute(doubleNum) << std::endl;

    return 0;
}

