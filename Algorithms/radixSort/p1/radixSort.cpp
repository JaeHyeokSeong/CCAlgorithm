//
// Created by Jaehyeok Seong on 6/3/2023.
// https://coredump064.tistory.com/58
// radix sort: O(n), stable, not in-place 하지만 counting sort 의 메모리사용량과
// 비교하면 선녀 편이다.
//

#include "radixSort.hpp"
#include <queue>
#include <iostream>

void radixSort(int* array, int max, int size) {
    // 0 ~ 9
    std::queue<int> q[10];

    // 최대자릿수 구하기
    int radix = 1;
    while(true) {
        if(radix >= max) break;
        radix *= 10;
    }

    for(int cipher = 1; cipher < radix; cipher *= 10) {
        for(int i = 0; i < size; i++) {
            // 해당 자릿수의 값: (기존의 값/얻고자하는 자릴수) % 10
            int value = (array[i] / cipher) % 10;
            q[value].push(array[i]);
        }
        int j = 0;
        for(int i = 0; i < 10; i++) {
            while(!q[i].empty()) {
                array[j++] = q[i].front();
                q[i].pop();
            }
        }
    }
}