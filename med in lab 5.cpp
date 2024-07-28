#include <iostream>
#include <sstream> 

class DecimalToBinary {
public:
    DecimalToBinary(int decimal) {
        std::string binary = convertToBinary(decimal);
        std::cout << "Binary representation of " << decimal << " is: " << binary << std::endl;
    }

private:
    std::string convertToBinary(int decimal) {
        std::string binary = "";
        while (decimal > 0) {
            std::stringstream ss;
            ss << (decimal % 2);
            binary = ss.str() + binary;
            decimal /= 2;
        }
        if (binary.empty()) {
            binary = "0";
        }
        return binary;
    }
};

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    DecimalToBinary dtb(decimal);

    return 0;
}

