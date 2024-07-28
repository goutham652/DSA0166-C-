#include <iostream>
using namespace std;
class Animal {
public:
    virtual void move() const = 0;
};
class Bird : public Animal {
public:
    void move() const override {
        cout << "Bird is flying" << endl;
    }
};
class Fish : public Animal {
public:
    void move() const override {
        cout << "Fish is swimming" << endl;
    }
};
int main() {
    Bird bird;
    Fish fish;
    Animal* animal1 = &bird;
    Animal* animal2 = &fish;
    animal1->move();
    animal2->move();
    return 0;
}

