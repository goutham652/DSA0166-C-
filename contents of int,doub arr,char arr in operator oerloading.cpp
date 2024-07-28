#include <iostream>
void printArray(const int arr[], int size) {
    std::cout << "Integer Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void printArray(const double arr[], int size) {
    std::cout << "Double Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void printArray(const char arr[], int size) {
    std::cout << "Character Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    const int intArraySize = 5;
    int intArray[intArraySize] = {1, 2, 3, 4, 5};
    printArray(intArray, intArraySize);

    const int doubleArraySize = 4;
    double doubleArray[doubleArraySize] = {1.1, 2.2, 3.3, 4.4};
    printArray(doubleArray, doubleArraySize);

    const int charArraySize = 6;
    char charArray[charArraySize] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printArray(charArray, charArraySize);

    return 0;
}

