#include <iostream>
#include "unionFind.hpp"

int main() {
    int x = 5;
    int* ptr = &x;
    x = x + 5;
    std::cout << *ptr << '\n';
    return 0;
}
