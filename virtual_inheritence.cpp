#include <iostream>

struct A {
    A() {
        std::cout << "Constucting A!\n";
    }
};

struct B: virtual A {
    B() {
        std::cout << "Constructing B!\n";
    }
};

struct C: virtual A {
    C() {
        std::cout << "Constructing C!\n";
    }
};

struct D: B, C {
    D() {
        std::cout << "Constructing D!\n";
    }
};

int main() {
    D d;
    A &a = d;
    return 0;
}
