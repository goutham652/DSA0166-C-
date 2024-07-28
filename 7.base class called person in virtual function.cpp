#include <iostream>
using namespace std;
class Person {
public:
    virtual void greet() const = 0;
};
class Student : public Person {
public:
    void greet() const override {
        cout << "Hi, I am a student!" << endl;
    }
};
class Teacher : public Person {
public:
    void greet() const override {
        cout << "Hello, I am a teacher." << endl;
    }
};
int main() {
    Student student;
    Teacher teacher;
    student.greet(); 
    teacher.greet();
    return 0;
}

