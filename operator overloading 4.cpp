#include <iostream>

class Point {
public:
    int x, y;
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
    bool operator==(const Point& other) const {
        return (x == other.x) && (y == other.y);
    }
};

int main() {
    Point p1(3, 4);
    Point p2(3, 4);
    Point p3(5, 6);
    if (p1 == p2) {
        std::cout << "Point p1 is equal to Point p2" << std::endl;
    } else {
        std::cout << "Point p1 is not equal to Point p2" << std::endl;
    }

    if (p1 == p3) {
        std::cout << "Point p1 is equal to Point p3" << std::endl;
    } else {
        std::cout << "Point p1 is not equal to Point p3" << std::endl;
    }

    return 0;
}

