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

std::vector<int> goodVibes(const std::vector<int> &v){
    std::vector<int> result;
    for(int i = 0;i < v.size();i++){
        if(v[i] > 0){
            result.push_back(v[i]);
        }
    }
    return result;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int i = 0;i < vegeta.size();i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> result;
    int size = v1.size() > v2.size() ? v1.size() : v2.size();
    for(int i = 0;i < size;i++){
        result.push_back((i >= v1.size() ? 0 : v1[i]) + (i >= v2.size() ? 0 : v2[i]));
    }
    return result;
}