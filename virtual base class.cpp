#include <iostream>
class Base {
public:
    void display() {
        std::cout << "Base class display function" << std::endl;
    }
};
class Derived1 : virtual public Base {
};
class Derived2 : virtual public Base {
};
class Derived3 : public Derived1, public Derived2 {
};

int main() {
    Derived3 obj;
    obj.display(); 

    return 0;
}

