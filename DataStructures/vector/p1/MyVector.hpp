//
// Created by Jaehyeok Seong on 7/3/2023.
//

#ifndef P1_MYVECTOR_HPP
#define P1_MYVECTOR_HPP


class MyVector {
private:
    int* ptrArray;
    int capacity, size;
public:
    MyVector();
    MyVector(const int& capacity);
    ~MyVector();
    int getCapacity() const;
    int getSize() const;
    int pushBack(const int& value);
    void popBack();
    int back();
    bool empty() const;
    int& operator[] (const int& i);
};


#endif //P1_MYVECTOR_HPP
