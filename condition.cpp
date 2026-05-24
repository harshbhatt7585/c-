#include <iostream>

int main() {
    int a = 15;
    int b = 10;

    if (a < b) {
        std::cout << "Mango is more sweet!\n";
    } else if (a == b) {
        std::cout << "Banana is more sweet!\n";
    } else {
        std::cout << "Nothing is sweet!\n";
    }

    return 0;
}