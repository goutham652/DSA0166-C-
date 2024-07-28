#include <iostream>

class ShapeArea {
private:
    double area;

public:
    ShapeArea(double width, double height);
    ShapeArea(double base, double height, bool isTriangle);
    void displayArea() const;
};

ShapeArea::ShapeArea(double width, double height) {
    area = width * height;
}

ShapeArea::ShapeArea(double base, double height, bool isTriangle) {
    if (isTriangle) {
        area = 0.5 * base * height;
    }
}

void ShapeArea::displayArea() const {
    std::cout << "Area: " << area << std::endl;
}

int main() {
    double width, height, base;
    int choice;

    std::cout << "Choose the shape to calculate area:\n";
    std::cout << "1. Rectangle\n";
    std::cout << "2. Triangle\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter the width and height of the rectangle: ";
            std::cin >> width >> height;
            {
                ShapeArea rectangle(width, height);
                rectangle.displayArea();
            }
            break;

        case 2:
            std::cout << "Enter the base and height of the triangle: ";
            std::cin >> base >> height;
            {
                ShapeArea triangle(base, height, true);
                triangle.displayArea();
            }
            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}

