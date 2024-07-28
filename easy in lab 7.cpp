#include <iostream>
#include <cmath>

class PrimeSumChecker {
private:
    int number;
    bool isPrime(int n) const {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    void canBeExpressedAsSumOfTwoPrimes() const {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                std::cout << number << " can be expressed as the sum of " << i << " and " << number - i << std::endl;
                found = true;
            }
        }
        if (!found) {
            std::cout << number << " cannot be expressed as the sum of two prime numbers." << std::endl;
        }
    }

public:
    PrimeSumChecker(int num) : number(num) {
        std::cout << "PrimeSumChecker object created for number: " << number << std::endl;
    }
    ~PrimeSumChecker() {
        canBeExpressedAsSumOfTwoPrimes();
        std::cout << "PrimeSumChecker object destroyed." << std::endl;
    }
};

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    PrimeSumChecker checker(n);
    return 0;
}

