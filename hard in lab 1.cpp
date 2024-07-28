#include <iostream>
#include <string>

class Student {
private:
    std::string name;

public:
    Student() : name("Unknown") {}
    Student(const std::string& studentName) : name(studentName) {}

    void printName() const {
        std::cout << "Student name: " << name << std::endl;
    }
};

int main() {
    Student student1;
    Student student2("John Doe");

    student1.printName();
    student2.printName();

    return 0;
}

