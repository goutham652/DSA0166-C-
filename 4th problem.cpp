#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    string regno;
    int mark1, mark2, mark3;
    float average;
    char grade;

    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }

    void assignGrade() {
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

public:
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter registration number: ";
        cin >> regno;
        cout << "Enter marks for three subjects: ";
        cin >> mark1 >> mark2 >> mark3;
        calculateAverage();
        assignGrade();
    }

    void displayData() const {
        cout << "Name: " << name << ", Registration Number: " << regno
             << ", Marks: [" << mark1 << ", " << mark2 << ", " << mark3 << "]"
             << ", Average: " << average << ", Grade: " << grade << endl;
    }
};

int main() {
    const int numStudents = 10;
    vector<Student> students(numStudents);

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].readData();
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayData();
    }

    return 0;
}

