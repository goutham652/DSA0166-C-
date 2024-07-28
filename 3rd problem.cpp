#include <iostream>
#include <cctype>

using namespace std;

bool isValidUsername(const string& username) {
    if (username.length() < 5) {
        return false;
    }

    for (size_t i = 0; i < username.length(); ++i) {
        if (isspace(username[i]) || !isalnum(username[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string username;

    cout << "Enter username: ";
    cin >> username;

    if (isValidUsername(username)) {
        cout << "The username \"" << username << "\" is valid." << endl;
    } else {
        cout << "The username \"" << username << "\" is not valid." << endl;
    }

    return 0;
}

