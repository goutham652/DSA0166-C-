#include <iostream>

class NumberReverser {
private:
    int number;
    int reverseNumber() const {
        int reversed = 0;
        int n = number;
        while (n != 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        return reversed;
    }

public:
    NumberReverser() : number(12345) {
        std::cout << "NumberReverser object created with default number: " << number << std::endl;
        displayReversedNumber();
    }
    NumberReverser(int num) : number(num) {
        std::cout << "NumberReverser object created for number: " << number << std::endl;
        displayReversedNumber();
    }
    void displayReversedNumber() const {
        std::cout << "The reverse of " << number << " is: " << reverseNumber() << std::endl;
    }
};

int main() {
    int n;
    std::cout << "Enter a number (or -1 to use default): ";
    std::cin >> n;
    
    if (n == -1) {
        
        NumberReverser reverser;
    } else {
        
        NumberReverser reverser(n);
    }
    
    return 0;
}

