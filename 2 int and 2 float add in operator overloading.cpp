#include <iostream>
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int main() {
    int intResult = add(5, 3);
    std::cout << "Integer addition result: " << intResult << std::endl;
    double doubleResult = add(2.5, 1.5);
    std::cout << "Floating-point addition result: " << doubleResult << std::endl;
    return 0;
}

