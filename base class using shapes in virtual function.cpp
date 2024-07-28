#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() const = 0; 
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
};
int main() {
    Rectangle rect(5.0, 3.0);
    Circle circ(4.0);
    Shape* shape1 = &rect;
    Shape* shape2 = &circ;
    cout << "Area of Rectangle: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;
    return 0;
}

