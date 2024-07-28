#include <iostream>

using namespace std;

int main() {
    float marks[4];
    float total = 0;
    float aggregate;
    char grade;
    for (int i = 0; i < 4; ++i) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    aggregate = total / 4;
    if (aggregate > 75) {
        grade = 'D'; 
    } else if (aggregate >= 60) {
        grade = 'F';  
    } else if (aggregate >= 50) {
        grade = 'S'; 
    } else if (aggregate >= 40) {
        grade = 'T';  
    } else {
        grade = 'F';  
    }

    cout << "Total Marks: " << total << endl;
    cout << "Aggregate Marks: " << aggregate << "%" << endl;

    switch (grade) {
        case 'D':
            cout << "Grade: Distinction" << endl;
            break;
        case 'F':
            cout << "Grade: First Division" << endl;
            break;
        case 'S':
            cout << "Grade: Second Division" << endl;
            break;
        case 'T':
            cout << "Grade: Third Division" << endl;
            break;
        default:
            cout << "Grade: Fail" << endl;
            break;
    }

    return 0;
}

