#include <iostream>
#include <vector>
#include "MaxHeap.hpp"

void test(const std::vector<int>& v) {
    MaxHeap mx;
    for(int i = 0; i < v.size(); i++) {
        mx.insert(v[i]);
    }
    std::cout << mx.peek() << '\n';

    std::cout << "after removing max element\n";
    mx.removeMax();
    std::cout << mx.peek() << '\n';
    std::cout << "after removing max element\n";
    mx.removeMax();
    std::cout << mx.peek() << '\n';
    std::cout << "after removing max element\n";
    mx.removeMax();
    std::cout << mx.peek() << '\n';
}

int main() {
    std::vector<int> v = {10, 5, -13, 9};
    test(v);

    return 0;
}
