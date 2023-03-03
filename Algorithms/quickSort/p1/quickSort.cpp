//
// Created by Jaehyeok Seong on 4/3/2023.
//

#include "quickSort.hpp"

void quickSort(int* array, int start, int end) {
    if(end <= start) return;

    int pivot = start;
    int i = pivot + 1;
    int j = end;

    // i 그리고 j 가 서로 엇갈리기 전까지 반복한다.
    while(i <= j) {
        // i 는 pivot 값이랑 비교하면서 pivot 값 보다 큰 값이 나올때 까지 증가한다.
        while(i <= end && array[pivot] >= array[i]) i++;
        // j 는 pivot 값이랑 비교하면서 pivot 값 보다 작은 값이 나올때 까지 감소한다.
        while(j > pivot && array[pivot] <= array[j]) j--;

        // i 그리고 j 가 서로 엇갈리지 않은 경우, i 그리고 j 위치의 값을 서로 교환 해준다.
        if(i <= j) {
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        } else {
            // j 그리고 pivot 값을 서로 교환 해준다.
            int tmp = array[pivot];
            array[pivot] = array[j];
            array[j] = tmp;
        }
    }

    // recursive function
    quickSort(array, start, j - 1);
    quickSort(array, j + 1, end);
}