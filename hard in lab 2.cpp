#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    int calculate_area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect1;
    cout << "Area of rectangle with no parameters: " << rect1.calculate_area() << endl;

    Rectangle rect2(5);
    cout << "Area of rectangle with one parameter: " << rect2.calculate_area() << endl;

    Rectangle rect3(4, 6);
    cout << "Area of rectangle with two parameters: " << rect3.calculate_area() << endl;

    return 0;
}

