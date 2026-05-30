#include <iostream>
#include <array>

void print_array(std::array<int, 3> array) {
    for (auto value: array) {
        std::cout << value << ' ';
    }
    std::cout << "\n";
}


void print_array(std::array<float, 3> array) {
    for (auto value: array) {
        std::cout << value << ' ';
    }
    std::cout << "\n";
}


int main() {
    std::array<float, 3> my_int_array = {1.5, 2, 3};
    print_array(my_int_array);
    return 0;
}


