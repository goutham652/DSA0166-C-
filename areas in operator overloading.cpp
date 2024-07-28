#include <iostream>
#include <cmath> // For M_PI constant

// Function to calculate the area of a square
double calculateArea(double sideLength) {
    return sideLength * sideLength;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double calculateAreaCircle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    // Test area calculation for square
    double squareSide = 5.0;
    double squareArea = calculateArea(squareSide);
    std::cout << "Area of square with side " << squareSide << " units: " << squareArea << " square units" << std::endl;

    double rectLength = 4.0;
    double rectWidth = 3.0;
    double rectArea = calculateArea(rectLength, rectWidth);
    std::cout << "Area of rectangle with length " << rectLength << " units and width " << rectWidth << " units: " << rectArea << " square units" << std::endl;
    double circleRadius = 2.5;
    double circleArea = calculateAreaCircle(circleRadius);
    std::cout << "Area of circle with radius " << circleRadius << " units: " << circleArea << " square units" << std::endl;

    return 0;
}

