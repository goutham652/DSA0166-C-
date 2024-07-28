#include <iostream>
class Person {
public:
    Person(std::string name, int rollNo) : name(name), rollNo(rollNo) {}
    
    virtual void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << rollNo << std::endl;
    }

protected:
    std::string name;
    int rollNo;
};
class Student : virtual public Person {
public:
    Student(std::string name, int rollNo, int part1Marks, int part2Marks)
        : Person(name, rollNo), part1Marks(part1Marks), part2Marks(part2Marks) {}

    void display() override {
        Person::display();
        std::cout << "Part 1 Marks: " << part1Marks << std::endl;
        std::cout << "Part 2 Marks: " << part2Marks << std::endl;
    }

private:
    int part1Marks;
    int part2Marks;
};
class Sportsperson : virtual public Person {
public:
    Sportsperson(std::string name, int rollNo, std::string sport)
        : Person(name, rollNo), sport(sport) {}

    void display() override {
        Person::display();
        std::cout << "Sport: " << sport << std::endl;
    }

private:
    std::string sport;
};
class ScholarAthlete : public Student, public Sportsperson {
public:
    ScholarAthlete(std::string name, int rollNo, int part1Marks, int part2Marks, std::string sport)
        : Person(name, rollNo), Student(name, rollNo, part1Marks, part2Marks), Sportsperson(name, rollNo, sport) {}

    void display() override {
        Student::display();
        Sportsperson::display();
    }
};

int main() {
    ScholarAthlete sa("John Doe", 12345, 85, 90, "Basketball");
    sa.display();

    return 0;
}

