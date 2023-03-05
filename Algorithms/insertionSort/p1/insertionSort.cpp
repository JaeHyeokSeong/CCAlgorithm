//
// Created by Jaehyeok Seong on 6/3/2023.
//

#include "insertionSort.hpp"

void insertionSort(int* array, int size) {
    for(int i = 1; i < size; i++) {
        for(int j = i; j > 0; j--) {
            if(array[j - 1] <= array[j]) break;
            int tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
        }
    }
}