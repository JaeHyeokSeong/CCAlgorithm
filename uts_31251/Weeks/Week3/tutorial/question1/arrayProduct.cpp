//
// Created by Jaehyeok Seong on 6/3/2023.
//

#include "arrayProduct.hpp"

std::vector<int> productExceptSelf(const std::vector<int>& nums) {
    std::vector<int> result;
    result.resize(nums.size());

    for(int i = 0; i < nums.size(); i++) {
        int sum = 1;
        for(int j = 0; j < nums.size(); j++) {
            if(i != j) sum *= nums[j];
        }
        result[i] = sum;
    }

    return result;
}