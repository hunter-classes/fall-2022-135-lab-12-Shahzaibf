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