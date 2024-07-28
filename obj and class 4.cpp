#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend int max(Number, Number);
};

int max(Number a, Number b) {
    return (a.value > b.value) ? a.value : b.value;
}

int main() {
    Number n1(10), n2(20);
    cout << "Maximum: " << max(n1, n2) << endl; 
	return 0;
}
