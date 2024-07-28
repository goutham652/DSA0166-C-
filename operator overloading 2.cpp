#include <iostream>
class Counter {
public:
    int value;
    Counter(int v = 0) : value(v) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Counter counter(5);
    std::cout << "Initial ";
    counter.display();
    ++counter;
    std::cout << "After prefix ++ ";
    counter.display();
    counter++;
    std::cout << "After postfix ++ ";
    counter.display();
    return 0;
}

