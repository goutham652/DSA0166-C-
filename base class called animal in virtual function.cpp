#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() const {
        cout << "Animal sound" << endl;
    }
};
class Cat : public Animal {
public:
    void speak() const override {
        cout << "meowwwwwwwwwwwww" << endl;
    }
};
class Dog : public Animal {
public:
    void speak() const override {
        cout << "bow bow" << endl;
    }
};
int main() {
    Cat cat;
    Dog dog;
    Animal* animal1 = &cat;
    Animal* animal2 = &dog;
    animal1->speak(); 
    animal2->speak(); 
    return 0;
}
