#include <iostream>

const int ROWS = 2;
const int COLS = 2;
void addMatrix(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void addArray(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    // Test matrices
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int resultMatrix[ROWS][COLS];

    addMatrix(matrix1, matrix2, resultMatrix);

    std::cout << "Matrix 1:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix 2:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Sum of matrices:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << resultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    const int arrSize = 4;
    int array1[arrSize] = {1, 2, 3, 4};
    int array2[arrSize] = {5, 6, 7, 8};
    int resultArray[arrSize];

    addArray(array1, array2, resultArray, arrSize);

    std::cout << "Array 1:" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array 2:" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sum of arrays:" << std::endl;
    for (int i = 0; i < arrSize; ++i) {
        std::cout << resultArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

