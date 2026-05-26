#include <array>
#include <iostream>

int sum(std::array<int, 3> array) {
    int sum = 0;
    for (int value : array) {
        sum += value;
    }
    return sum;
}

int main() {
    std::array<int, 3> my_array = {1, 3, 5};
    int sum_value = sum(my_array);
    std::cout << "Sumed value: " << sum_value << "\n";
}