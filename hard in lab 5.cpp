#include <iostream>
using namespace std;

class Add {
private:
    int num;

public:
    Add(int n) : num(n) {}

    Add operator+(const Add& other) {
        return Add(num + other.num);
    }

    void display() {
        cout << "Sum: " << num << endl;
    }
};

int main() {
    Add obj1(10);
    Add obj2(20);

    Add result = obj1 + obj2;

    result.display();

    return 0;
}
