#include <iostream>
#include "arrayProduct.hpp"

int main() {
    std::vector<int> nums = {2, 4, 0, 5, 0};
    std::vector<int> result = productExceptSelf(nums);
    for(int i = 0; i < result.size(); i++) {
        std::cout << result[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}
