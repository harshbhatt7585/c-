#include <iostream>
#include <array>

int main() {
    std::array<int, 5> my_array = {13, 35, 24, 53, 67};
    for (int value : my_array) {
        std::cout << value << "\n";
    }

    return 0;
}