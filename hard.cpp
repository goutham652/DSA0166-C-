#include <iostream>
class Slab2;
class Slab3;

class IncomeTax {
public:
    virtual void TDS(double income) = 0; 
};

class Slab1 : public IncomeTax {
public:
    void TDS(double income) override;
};

class Slab2 : public IncomeTax {
public:
    void TDS(double income) override;
};

class Slab3 : public IncomeTax {
public:
    void TDS(double income) override;
};
void Slab1::TDS(double income) {
    if (income <= 150000) {
        std::cout << "No tax" << std::endl;
    } else {
        Slab2 slab2;
        slab2.TDS(income);
    }
}

void Slab2::TDS(double income) {
    if (income <= 300000) {
        double tax = (income - 150000) * 0.10;
        std::cout << "Tax: " << tax << std::endl;
    } else {
        Slab3 slab3;
        slab3.TDS(income);
    }
}
void Slab3::TDS(double income) {
    if (income <= 500000) {
        double tax = (income - 300000) * 0.20 + 15000;
        std::cout << "Tax: " << tax << std::endl;
    } else {
        double tax = (income - 500000) * 0.30 + 65000; 
        std::cout << "Tax: " << tax << std::endl;
    }
}

int main() {
    double income;
    std::cout << "Enter the total income: ";
    std::cin >> income;
    Slab1 slab1;
    slab1.TDS(income);

    return 0;
}

