#include <iostream>
#include <vector>
#include <utility>

struct S {
    S() {
        std::cout << "Consturctor!\n";
    }
    S(const S &s) {
        std::cout << "Copy Consturctor!\n";
    }
    S(S &&s) {
        std::cout << "Move Consturctor!\n";
    }
};

int main() {
    std::vector<S> my_vector;
    my_vector.push_back(S());
    return 0;
}