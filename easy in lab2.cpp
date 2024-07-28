#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string gender;

public:
    void readPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter gender: ";
        getline(cin, gender);
    }

    void printPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class Student : private Person {
private:
    string studentID;
    string major;
    float totalMarks;
    char grade;

public:
    void readStudent() {
        readPerson();
        cout << "Enter student ID: ";
        getline(cin, studentID);
        cout << "Enter major: ";
        getline(cin, major);
        cout << "Enter total marks: ";
        cin >> totalMarks;
        cin.ignore();
        cout << "Enter grade: ";
        cin >> grade;
        cin.ignore(); 
    }
    void printStudent() const {
        printPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Major: " << major << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student student;
    cout << "Enter student details:" << endl;
    student.readStudent();

    cout << "\nStudent details:" << endl;
    student.printStudent();

    return 0;
}

