#include <iostream>
using namespace std;
class Pattern {
private:
    int rows;
public:
    Pattern() {
        rows = 0;
    }
    Pattern(int numRows) {
        rows = numRows;
    }

    void printPattern() const {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    int numRows;
    Pattern pattern1;
    cout << "Pattern with no rows:" << endl;
    pattern1.printPattern();
    cout << "Enter the number of rows for the pattern: ";
    cin >> numRows;
    Pattern pattern2(numRows);
    cout << "Pattern with " << numRows << " rows:" << endl;
    pattern2.printPattern();

    return 0;
}

