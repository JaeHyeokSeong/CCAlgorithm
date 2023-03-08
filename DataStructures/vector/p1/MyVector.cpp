//
// Created by Jaehyeok Seong on 7/3/2023.
//

#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector() {
    ptrArray = new int[1];
    capacity = 1;
    size = 0;
}

MyVector::MyVector(const int &capacity) {
    if(capacity <= 0)
        throw std::out_of_range("[warning] invalid capacity");
    ptrArray = new int[capacity]{0};
    this->size = this->capacity = capacity;
}

MyVector::~MyVector() {
    delete[] ptrArray;
}

int MyVector::getCapacity() const {
    return capacity;
}

int MyVector::getSize() const {
    return size;
}

int MyVector::pushBack(const int &value) {
    if(size == capacity) {
        capacity *= 2;
        int* tmpPtrArray = new int[capacity];
        for(int i = 0; i < size; i++) {
            tmpPtrArray[i] = ptrArray[i];
        }
        tmpPtrArray[size++] = value;
        delete[] ptrArray;
        ptrArray = tmpPtrArray;
    } else {
        ptrArray[size++] = value;
    }
}

void MyVector::popBack() {
    if(size == 0) throw std::out_of_range("no element to pop back");
    size--;
}

int MyVector::back() {
    if(size == 0) throw std::out_of_range("no element to back");
    return ptrArray[size - 1];
}

bool MyVector::empty() const {
    return size == 0;
}

int& MyVector::operator[](const int &i) {
    return ptrArray[i];
}