#include <iostream>
#include <vector>
#include <algorithm>

struct IsDivisible {
    int divisor;
    IsDivisible(int new_divisor) : divisor(new_divisor) {}
    bool operator()(int dividend) {
        return dividend % divisor == 0;
    }
};

int main() {
    IsDivisible is_divisiable_by_10(10);
    std::vector<int> my_vector = {41, 20, 84, 94, 23};
    auto itr = std::ranges::find_if(my_vector, is_divisiable_by_10);
    std::cout << *itr << '\n';
}

