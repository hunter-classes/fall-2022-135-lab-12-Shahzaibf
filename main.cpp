#include "funcs.h"
#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums;
    nums = makeVector(9); //0,1,2,3,4,5,6,7,8
    for(int i = 0;i < nums.size();i++){
        std::cout << nums[i] << " ";
    }
    std::cout << "\n";
    return 0;
}