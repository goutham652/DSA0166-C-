#include <iostream>
using namespace std;
class AddAmount {
private:
    double amount;
public:
    AddAmount() {
        amount = 50.0;
    }
    AddAmount(double additionalAmount) {
        amount = 50.0 + additionalAmount;
    }
    void displayAmount() const {
        cout << amount << endl;
    }
};
int main() {
    double additionalAmount;
    AddAmount piggieBank1;
    cout << "Amount in Piggie Bank with no addition: ";
    piggieBank1.displayAmount();
    cout << "Enter amount to add: ";
    cin >> additionalAmount;
    AddAmount piggieBank2(additionalAmount);
    cout << "Amount in Piggie Bank after addition: ";
    piggieBank2.displayAmount();
    return 0;
}
