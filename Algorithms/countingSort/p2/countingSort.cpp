//
// Created by Jaehyeok Seong on 6/3/2023.
// https://kbw1101.tistory.com/44
//

#include "countingSort.hpp"

void countingSort(int* array, int max, int size) {
    int* counting = new int[max + 1];
    int* sorted = new int[size];

    for(int i = 0; i < size; i++) {
        counting[array[i]]++;
    }
    for(int i = 1; i <= max; i++) {
        counting[i] += counting[i - 1];
    }
    for(int i = 0; i < size; i++) {
        sorted[counting[array[i]] - 1] = array[i];
        counting[array[i]]--;
    }
    for(int i = 0; i < size; i++) {
        array[i] = sorted[i];
    }
    delete[] counting;
    delete[] sorted;
}