#include <iostream>
class Adder {
public:
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main() {
    Adder adder;
    int result = adder(5, 3);

    std::cout << "Result of addition: " << result << std::endl;

    return 0;
}

