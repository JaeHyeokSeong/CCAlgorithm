#include <iostream>
#include "radixSort.hpp"

void print(int* array, int size, std::string txt) {
    std::cout << txt;
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    int array[] = {354,20,9,78,674,2,33,51,172,1547};
    print(array, 10, "before sorting\n");
    radixSort(array, 1547, 10);
    print(array, 10, "after sorting\n");
    return 0;
}
