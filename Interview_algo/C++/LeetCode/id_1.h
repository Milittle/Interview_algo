#pragma once

#include <vector>
#include <map>
using std::map;
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> result;
        for (int i = 0; i < nums.size(); ++i){
            auto it = result.find(target - nums[i]);
            if (it != result.end()){
                return {it->second, i};
            }else{
                result.emplace(nums[i], i);
            }
        }
        return {};
    }
};