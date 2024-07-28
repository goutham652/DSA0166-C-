#include <iostream>
class CubeCalculator {
private:
    int num;   
public:
    CubeCalculator(int n) : num(n) {
        std::cout << "CubeCalculator object created for number: " << num << std::endl;
    }
    ~CubeCalculator() {
        std::cout << "Calculating cubes up to: " << num << std::endl;
        for (int i = 1; i <= num; ++i) {
            std::cout << "Cube of " << i << " is " << (i * i * i) << std::endl;
        }
        std::cout << "CubeCalculator object destroyed." << std::endl;
    }
};
int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    {
        CubeCalculator calculator(n);
    }
    
    return 0;
}

