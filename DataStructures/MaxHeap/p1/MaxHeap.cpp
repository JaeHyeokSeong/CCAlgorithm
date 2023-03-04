//
// Created by Jaehyeok Seong on 4/3/2023.
//

#include "MaxHeap.hpp"
#include <iostream>

MaxHeap::MaxHeap() {
    v.resize(1);
    size = 0;
}

void MaxHeap::insert(const int& data) {
    v.push_back(data);
    size++;

    // max heapify
    int currentIndex = v.size() - 1;
    while(currentIndex != 1 && v[currentIndex / 2] < v[currentIndex]) {
        // swap
        int tmp = v[currentIndex / 2];
        v[currentIndex / 2] = v[currentIndex];
        v[currentIndex] = tmp;
        // update current index
        currentIndex = currentIndex / 2;
    }
}

void MaxHeap::removeMax() {
    if(size == 0) throw std::out_of_range("no element to remove");
    v[1] = v[size];
    size--;
    v.erase(v.end() - 1);
    int childIndex = 2;
    while(childIndex <= size) {
        if(childIndex < size && v[childIndex] < v[childIndex + 1]) childIndex++;
        if(v[childIndex] <= v[childIndex / 2]) break;
        int tmp = v[childIndex];
        v[childIndex] = v[childIndex / 2];
        v[childIndex / 2] = tmp;
        childIndex *= 2;
    }
}

int MaxHeap::peek() const {
    if(size == 0) throw std::out_of_range("no element to peek");
    return v[1];
}