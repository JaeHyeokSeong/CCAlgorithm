#include <iostream>
#include "countingSort.hpp"

void print(int* array, int size, std::string txt) {
    std::cout << txt;
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    int array[] = {5,9,8,3,5,4,6,12,2,4};
    print(array, 10, "before sorting\n");
    countingSort(array, 12, 10);
    print(array, 10, "after sorting\n");
    return 0;
}
