#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int> > mat; 
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, std::vector<int>(cols, 0));
    }
    Matrix operator*(const Matrix& other) const {
        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }

        return result;
    }
    void setValue(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            mat[r][c] = value;
        } else {
            std::cerr << "Index out of bounds." << std::endl;
        }
    }
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix mat1(2, 3);
    Matrix mat2(3, 2);
    mat1.setValue(0, 0, 1);
    mat1.setValue(0, 1, 2);
    mat1.setValue(0, 2, 3);
    mat1.setValue(1, 0, 4);
    mat1.setValue(1, 1, 5);
    mat1.setValue(1, 2, 6);

    mat2.setValue(0, 0, 7);
    mat2.setValue(0, 1, 8);
    mat2.setValue(1, 0, 9);
    mat2.setValue(1, 1, 10);
    mat2.setValue(2, 0, 11);
    mat2.setValue(2, 1, 12);
    std::cout << "Matrix 1:" << std::endl;
    mat1.display();

    std::cout << "Matrix 2:" << std::endl;
    mat2.display();
    Matrix result = mat1 * mat2;

    std::cout << "Result of multiplication:" << std::endl;
    result.display();

    return 0;
}

