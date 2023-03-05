//
// Created by Jaehyeok Seong on 6/3/2023.
//

#include "countingSort.hpp"
#include <iostream>

void countingSort(int* array, int endNumber, int size) {
    int* counting = new int[endNumber + 1];

    for(int i = 0; i < size; i++) {
        counting[array[i]]++;
    }
    for(int i = 0; i <= endNumber; i++) {
        if(counting[i] != 0) {
            for(int j = 0; j < counting[i]; j++) {
                std::cout << i << ' ';
            }
            std::cout << '\n';
        }
    }
    delete[] counting;
}