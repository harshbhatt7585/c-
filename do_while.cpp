#include <iostream>

int main() {
    int work_items = 0;
    do {
        std::cout << "Work Items " << work_items << "\n";
        work_items -= 1;
    } while (work_items > 0);
    return 0;
}

