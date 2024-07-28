#include <iostream>

// Forward declarations of derived classes
class Slab2;
class Slab3;

class IncomeTax {
public:
    virtual void TDS(double income) = 0; // Pure virtual function
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

// Implementation of Slab1
void Slab1::TDS(double income) {
    if (income <= 150000) {
        std::cout << "No tax" << std::endl;
    } else {
        // Call next slab
        Slab2 slab2;
        slab2.TDS(income);
    }
}

// Implementation of Slab2
void Slab2::TDS(double income) {
    if (income <= 300000) {
        double tax = (income - 150000) * 0.10;
        std::cout << "Tax: " << tax << std::endl;
    } else {
        // Call next slab
        Slab3 slab3;
        slab3.TDS(income);
    }
}

// Implementation of Slab3
void Slab3::TDS(double income) {
    if (income <= 500000) {
        double tax = (income - 300000) * 0.20 + 15000; // 10% tax on the first slab
        std::cout << "Tax: " << tax << std::endl;
    } else {
        double tax = (income - 500000) * 0.30 + 65000; // 20% tax on the second slab + previous tax
        std::cout << "Tax: " << tax << std::endl;
    }
}

int main() {
    double income;

    // Input income
    std::cout << "Enter the total income: ";
    std::cin >> income;

    // Create Slab1 object to start tax calculation
    Slab1 slab1;
    slab1.TDS(income);

    return 0;
}

