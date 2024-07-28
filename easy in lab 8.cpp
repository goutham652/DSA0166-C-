#include <iostream>
#include <string>
#include <cmath>
#include <sstream> 

class BinaryToOctalConverter {
private:
    std::string binaryNumber;
    int binaryToDecimal() const {
        int decimal = 0;
        int length = binaryNumber.length();
        for (int i = 0; i < length; ++i) {
            if (binaryNumber[length - 1 - i] == '1') {
                decimal += std::pow(2, i);
            }
        }
        return decimal;
    }
    std::string intToString(int num) const {
        std::ostringstream oss;
        oss << num;
        return oss.str();
    }
    std::string decimalToOctal(int decimal) const {
        std::string octal = "";
        while (decimal > 0) {
            octal = intToString(decimal % 8) + octal;
            decimal /= 8;
        }
        return octal.empty() ? "0" : octal;
    }

public:
    BinaryToOctalConverter(const std::string &binary) : binaryNumber(binary) {
        std::cout << "BinaryToOctalConverter object created for binary number: " << binaryNumber << std::endl;
    }

    void binaryToOctal() const {
        int decimal = binaryToDecimal();
        std::string octal = decimalToOctal(decimal);
        std::cout << "The octal equivalent of binary number " << binaryNumber << " is: " << octal << std::endl;
    }
};

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;
    BinaryToOctalConverter converter(binary);
    converter.binaryToOctal();

    return 0;
}

