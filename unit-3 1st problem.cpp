#include <iostream>

using namespace std;

class Cube {
private:
    int number;

public:
    Cube() {
        number = 0;
    }
    Cube(int num) {
        number = num;
    }

    void displayCubes() {
        for (int i = 1; i <= number; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    Cube cubeObj(num);
    cubeObj.displayCubes();

    return 0;
}

