//
// Created by Jaehyeok Seong on 4/3/2023.
//

#include "mergeSort.hpp"
#define MAX 100
int tmp[MAX];

void merge(int* array, int start, int end) {
    int i = start, j = ((start + end) / 2) + 1, k = start;
    while(i <= ((start + end) / 2) && j <= end) {
        if(array[i] < array[j])
            tmp[k++] = array[i++];
        else
            tmp[k++] = array[j++];
    }

    if(i > (start + end) / 2) {
        while (j <= end) {
            tmp[k++] = array[j++];
        }
    } else {
        while(i <= (start + end) / 2) {
            tmp[k++] = array[i++];
        }
    }

    for(int l = start; l <= end; l++) {
        array[l] = tmp[l];
    }
}

void mergeSort(int* array, int start, int end){
    if(start < end) {
        int mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, end);
    }
}