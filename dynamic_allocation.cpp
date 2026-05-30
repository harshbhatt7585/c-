#include <iostream>

int main() {
    int *int_ptr = new int[10];
    int_ptr[5] = 241;
    std::cout << "value " << int_ptr[5] << "\n";
    std::cout << "Adress " << &int_ptr[5] << "\n";

    delete[] int_ptr;
    return 0;
}

