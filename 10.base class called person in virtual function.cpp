#include <iostream>
using namespace std;
class Person {
public:
    virtual void work() const = 0;
};
class Employee : public Person {
public:
    void work() const override {
        cout << "Employee is working." << endl;
    }
};
class Manager : public Person {
public:
    void work() const override {
        cout << "Manager is managing." << endl;
    }
};
int main() {
    Employee emp;
    Manager mgr;
    emp.work(); 
    mgr.work(); 
    return 0;
}

