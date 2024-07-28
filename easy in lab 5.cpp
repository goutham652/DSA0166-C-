#include <iostream>

class TrianglePattern {
private:
    int numRows;

    // Function to print the pattern
    void printPattern() const {
        for (int i = 1; i <= numRows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        }
    }

public:
    TrianglePattern() : numRows(5) {
        std::cout << "TrianglePattern object created with default number of rows: " << numRows << std::endl;
        printPattern();
    }
    TrianglePattern(int rows) : numRows(rows) {
        std::cout << "TrianglePattern object created for number of rows: " << numRows << std::endl;
        printPattern();
    }
};

int main() {
    int n;
    std::cout << "Enter the number of rows for the triangle pattern (or -1 to use default): ";
    std::cin >> n;
    
    if (n == -1) {
        
        TrianglePattern pattern;
    } else {
       
        TrianglePattern pattern(n);
    }
    
    return 0;
}

