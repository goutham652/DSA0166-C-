#include <iostream>
#include <stdexcept> 

class Array {
private:
    int data[5]; 

public:
    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
};

int main() {
    Array arr;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
    try {
        arr[10] = 100; // This will throw std::out_of_range exception
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

