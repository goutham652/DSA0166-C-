#include <iostream>
class Number {
private:
    int value;
public:
    Number(int val = 0) : value(val) {}
    Number& operator+=(const Number& other) {
        value += other.value;
        return *this;
    }
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};
int main() {
    Number num1(5);
    Number num2(3);
    num1 += num2;
    std::cout << "After += operation:" << std::endl;
    num1.display();
    return 0;
}

