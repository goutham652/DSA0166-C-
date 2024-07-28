#include <iostream>

class FloydsTriangle {
private:
    int rows;

public:
    FloydsTriangle(int n) : rows(n) {
        int num = 1;
        std::cout << "Floyd's Triangle:\n";
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << num << " ";
                ++num;
            }
            std::cout << std::endl;
        }
    }
    ~FloydsTriangle() {
        std::cout << "Destructor called. Floyd's Triangle object destroyed.\n";
    }
};

int main() {
    int n;
    std::cout << "Enter the number of rows for Floyd's Triangle: ";
    std::cin >> n;
    FloydsTriangle triangle(n);

    return 0;
}

