#include <iostream>
class Point {
public:
    int x, y;
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}
int main() {
    Point p1(2, 3);
    Point p2(5, 7);
    std::cout << "Point p1: " << p1 << std::endl;
    std::cout << "Point p2: " << p2 << std::endl;
    return 0;
}

