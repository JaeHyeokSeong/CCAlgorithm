#include <iostream>
#include "mergeSort.hpp"

void print(int* array, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    int array[] = {1, 4, 2, 6, 3, 5, 8, 7, 9, 10};
    std::cout << "before sorting\n";
    print(array, 10);

    mergeSort(array, 0, 9);

    std::cout << "after sorting\n";
    print(array, 10);
    return 0;
}
