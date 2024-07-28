#include <iostream>

class DivisibleByNineFinder {
private:
    int lowerBound;
    int upperBound;
    int sum;
    void findAndSumDivisibleByNine() {
        sum = 0;
        std::cout << "Numbers between " << lowerBound << " and " << upperBound << " divisible by 9 are: ";
        for (int i = lowerBound; i <= upperBound; ++i) {
            if (i % 9 == 0) {
                std::cout << i << " ";
                sum += i;
            }
        }
        std::cout << std::endl;
    }

public:
    DivisibleByNineFinder(int lower, int upper) : lowerBound(lower), upperBound(upper), sum(0) {
        std::cout << "DivisibleByNineFinder object created with range: " << lowerBound << " to " << upperBound << std::endl;
    }
    ~DivisibleByNineFinder() {
        findAndSumDivisibleByNine();
        std::cout << "Sum of numbers divisible by 9 is: " << sum << std::endl;
        std::cout << "DivisibleByNineFinder object destroyed." << std::endl;
    }
};

int main() {
    DivisibleByNineFinder finder(100, 200);
    return 0;
}

