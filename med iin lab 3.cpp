#include <iostream>
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w);
    void displayArea() const;
};
Rectangle::Rectangle(double l, double w) : length(l), width(w) {
}
void Rectangle::displayArea() const {
    double area = length * width;
    std::cout << "Area of the rectangle: " << area << std::endl;
}
int main() {
    double length, width;
    std::cout << "Enter the length and width of the rectangle: ";
    std::cin >> length >> width;
    Rectangle rect(length, width);
    rect.displayArea();
    return 0;
}
