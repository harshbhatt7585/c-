#include <iostream>
#include <memory>

int main() {
    auto ptr1 = std::make_shared<int[]>(10);
    auto ptr2 = ptr1;
    std::cout << "Reference count: " << ptr1.use_count() << "\n";
    std::cout << "ptr 1: " << ptr1[5] << "\n";
    std::cout << "ptr 2: " << ptr2[5] << "\n";
    return 0;
}

