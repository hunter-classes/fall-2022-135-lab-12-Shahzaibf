#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A"){
    std::vector<int> nums;
    nums = makeVector(5);
    CHECK(nums.size() == 5);
    CHECK(nums[0] == 0);
    CHECK(nums[1] == 1);
    CHECK(nums[2] == 2);
    CHECK(nums[3] == 3);
    CHECK(nums[4] == 4);
}

TEST_CASE("Task B"){
    std::vector<int> numpos = {1,2,-1,3,4,-1,6};
    numpos = goodVibes(numpos);
    CHECK(numpos[0] == 1);
    CHECK(numpos[1] == 2);
    CHECK(numpos[2] == 3);
    CHECK(numpos[3] == 4);
    CHECK(numpos[4] == 6);
}

TEST_CASE("Task C"){
    std::vector<int> v1 = {4,2,1};
    std::vector<int> v2 = {7,9,21};
    gogeta(v1, v2);
    CHECK(v1[0] == 4);
    CHECK(v1[1] == 2);
    CHECK(v1[2] == 1);
    CHECK(v1[3] == 7);
    CHECK(v1[4] == 9);
    CHECK(v1[5] == 21);
    CHECK(v2.size() == 0);
}