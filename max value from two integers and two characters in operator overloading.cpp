#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}
double max(double a, double b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int maxInt = max(5, 3);
    std::cout << "Max of integers: " << maxInt << std::endl;
    double maxDouble = max(2.5, 1.5);
    std::cout << "Max of floating-point numbers: " << maxDouble << std::endl;
    char maxChar = max('a', 'b');
    std::cout << "Max of characters: " << maxChar << std::endl;

    return 0;
}

