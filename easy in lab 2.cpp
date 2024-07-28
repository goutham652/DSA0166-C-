#include <iostream>

class CubeCalculator {
private:
    int num;
    
public:
    CubeCalculator() : num(10) {
        std::cout << "CubeCalculator object created with default number: " << num << std::endl;
        displayCubes();
    }
    CubeCalculator(int n) : num(n) {
        std::cout << "CubeCalculator object created for number: " << num << std::endl;
        displayCubes();
    }
    void displayCubes() const {
        std::cout << "Calculating cubes up to: " << num << std::endl;
        for (int i = 1; i <= num; ++i) {
            std::cout << "Cube of " << i << " is " << (i * i * i) << std::endl;
        }
    }
};

int main() {
    int n;
    std::cout << "Enter an integer (or -1 to use default): ";
    std::cin >> n;
    
    if (n == -1) {
        CubeCalculator calculator;
    } else {
        CubeCalculator calculator(n);
    }
    
    return 0;
}

