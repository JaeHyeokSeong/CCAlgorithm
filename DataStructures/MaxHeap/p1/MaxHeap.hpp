//
// Created by Jaehyeok Seong on 4/3/2023.
//

#ifndef P1_MAXHEAP_HPP
#define P1_MAXHEAP_HPP
#include <vector>

class MaxHeap {
private:
    std::vector<int> v;
    int size;
public:
    MaxHeap();
    void insert(const int& data);
    void removeMax();
    int peek() const;
};


#endif //P1_MAXHEAP_HPP
