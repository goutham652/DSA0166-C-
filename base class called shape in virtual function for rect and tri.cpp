#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
    double perimeter() const override { return 2 * (width + height); }
};
class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double area() const override {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double perimeter() const override { return side1 + side2 + side3; }
};
int main() {
    Rectangle rect(5.0, 3.0);
    Triangle tri(3.0, 4.0, 5.0);
    cout << "Rectangle - Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << endl;
    cout << "Triangle - Area: " << tri.area() << ", Perimeter: " << tri.perimeter() << endl;
    return 0;
}

