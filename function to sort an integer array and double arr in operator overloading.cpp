#include <iostream>
#include <algorithm> 
#include <iomanip>   
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}
void displayArray(const int arr[], int size) {
    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void displayArray(const double arr[], int size) {
    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << std::fixed << std::setprecision(2) << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int intArraySize = 5;
    int intArray[intArraySize] = {5, 2, 9, 1, 7};
    sortArray(intArray, intArraySize);
    displayArray(intArray, intArraySize);

    const int doubleArraySize = 4;
    double doubleArray[doubleArraySize] = {3.5, 1.2, 2.8, 4.1};
    sortArray(doubleArray, doubleArraySize);
    displayArray(doubleArray, doubleArraySize);

    return 0;
}

