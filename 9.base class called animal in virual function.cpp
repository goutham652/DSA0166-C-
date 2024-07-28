#include <iostream>
using namespace std;
class Animal {
public:
    virtual void eat() const = 0;
};
class Herbivore : public Animal {
public:
    void eat() const override {
        cout << "herbivore Eating plants." << endl;
    }
};
class Carnivore : public Animal {
public:
    void eat() const override {
        cout << "carnivore Eating meat." << endl;
    }
};
int main() {
    Herbivore herbivore;
    Carnivore carnivore;
    herbivore.eat();
    carnivore.eat(); 
    return 0;
}

