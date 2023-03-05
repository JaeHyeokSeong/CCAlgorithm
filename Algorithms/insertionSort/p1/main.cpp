#include <iostream>
#include "insertionSort.hpp"

void print(int* array, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    int array[] = {3, 4, 1, 5, 2, 7, 8,6,9,10};
    std::cout << "before sorting\n";
    print(array, 10);

    insertionSort(array, 10);

    std::cout << "after sorting\n";
    print(array, 10);

    return 0;
}
