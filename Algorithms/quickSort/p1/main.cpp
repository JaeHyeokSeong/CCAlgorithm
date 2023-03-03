#include <iostream>
#include "quickSort.hpp"

void print(int* ptr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ptr[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    int arr[] = {3,1,2,5,7,6,4,9,8,10};

    // before sorting
    std::cout << "before sorting\n";
    print(arr, 10);

    // quick sort
    quickSort(arr, 0, 9);

    // after sorting
    std::cout << "after sorting\n";
    print(arr, 10);
    return 0;
}
