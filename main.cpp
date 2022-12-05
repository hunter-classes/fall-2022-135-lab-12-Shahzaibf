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

    std::vector<int> numpos = {-1,-2,1,0,-1};
    numpos = goodVibes(numpos);
    for(int i = 0; i < numpos.size();i++){
        std::cout << numpos[i] << " ";
    }
    std::cout << "\n";

    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
    for(int i = 0; i < v1.size();i++){
        std::cout << v1[i] << " ";
    }
    for(int i = 0; i < v2.size();i++){
        std::cout << v2[i] << " ";
    }
    std::cout << "\n";

    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};

    std::vector<int> v5 = sumPairWise(v3, v4); // returns [5, 7, 3]
    for(int i = 0; i < v5.size();i++){
        std::cout << v5[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}