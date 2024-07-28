#include <iostream>
#include <cmath>

using namespace std;

class Area {
private:
    double area;

public:
    Area(double radius) {
        area = M_PI * radius * radius;
    }
    Area(double length, double width) {
        area = length * width;
    }
    Area(double base, double height, bool isTriangle) {
        area = 0.5 * base * height;
    }

    void displayArea() const {
        cout << area << endl;
    }
};
int main() {
    double radius, length, width, base, height;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    Area circle(radius);
    cout << "Area of Circle: ";
    circle.displayArea();
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Area rectangle(length, width);
    cout << "Area of Rectangle: ";
    rectangle.displayArea();
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    Area triangle(base, height, true);
    cout << "Area of Triangle: ";
    triangle.displayArea();

    return 0;
}

