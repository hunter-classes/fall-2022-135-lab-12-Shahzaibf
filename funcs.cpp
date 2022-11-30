#include "funcs.h"
#include <iostream>
#include <vector>
//push_back(element) adds element to vector
//vector <int> v; initializes vector of ints as v or vector <int> v{10,20,30};

std::vector<int> makeVector(int n){
    std::vector<int> result;
    for(int i = 0;i < n; i++){
        result.push_back(i);
    }
    return result;
}
