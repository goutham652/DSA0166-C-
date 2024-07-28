#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int sum1 = add(10, 20);
    cout << "Sum of 10 and 20 is: " << sum1 << endl;

    int sum2 = add(10, 20, 30);
    cout << "Sum of 10, 20, and 30 is: " << sum2 << endl;

    return 0;
}
