#include <iostream>
#include <cmath> 

class VolumeCalculator {
public:
    VolumeCalculator(double side) {
        double volume = side * side * side;
        std::cout << "Volume of the cube: " << volume << std::endl;
    }
    VolumeCalculator(double radius, double height, bool isCylinder) {
        if (isCylinder) {
            double volume = M_PI * radius * radius * height; 
            std::cout << "Volume of the cylinder: " << volume << std::endl;
        }
    }
};

int main() {
    int choice;
    std::cout << "Choose the shape to calculate volume:\n";
    std::cout << "1. Cube\n";
    std::cout << "2. Cylinder\n";
    std::cin >> choice;

    if (choice == 1) {
        double side;
        std::cout << "Enter the side length of the cube: ";
        std::cin >> side;
        VolumeCalculator cube(side);
    } else if (choice == 2) {
        double radius, height;
        std::cout << "Enter the radius and height of the cylinder: ";
        std::cin >> radius >> height;
        VolumeCalculator cylinder(radius, height, true);
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}

