#include <iostream>
#include <cmath> // For M_PI

class AreaCalculator {
private:
    double area;

public:
    // Constructor for circle
    AreaCalculator(double radius) {
        area = M_PI * radius * radius;
        std::cout << "Area of the circle: " << area << std::endl;
    }

    // Constructor for rectangle
    AreaCalculator(double width, double height, bool isRectangle) {
        if (isRectangle) {
            area = width * height;
            std::cout << "Area of the rectangle: " << area << std::endl;
        }
    }

    // Constructor for triangle
    AreaCalculator(double base, double height, bool isRectangle, bool isTriangle) {
        if (isTriangle && !isRectangle) {
            area = 0.5 * base * height;
            std::cout << "Area of the triangle: " << area << std::endl;
        }
    }
};

int main() {
    int choice;
    double radius, width, height, base;

    std::cout << "Choose the shape to calculate area:\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;
            // Create an object of AreaCalculator for the circle
            AreaCalculator circle(radius);
            break;

        case 2:
            std::cout << "Enter the width and height of the rectangle: ";
            std::cin >> width >> height;
            // Create an object of AreaCalculator for the rectangle
            AreaCalculator rectangle(width, height, true);
            break;

        case 3:
            std::cout << "Enter the base and height of the triangle: ";
            std::cin >> base >> height;
            // Create an object of AreaCalculator for the triangle
            AreaCalculator triangle(base, height, false, true);
            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}

