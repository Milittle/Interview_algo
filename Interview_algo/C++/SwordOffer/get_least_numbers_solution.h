#pragma once

#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> GetLeastNumbers_Solution(std::vector<int> input, int k) {
        if (input.size() == 0 || k <= 0 || input.size() < k)
            return std::vector<int>();
        
        std::map<int, int> result;
        for (auto it = input.begin(); it != input.end(); ++it)
        {
            result.insert(std::make_pair(*it, *it));
        }
        
        std::vector<int> res;
        int i = 0;
        for (auto it = result.begin(); it != result.end(); ++it)
        {
            res.push_back(it->first);
            i++;
            if(i == k)
                break;
        }
        
        return res;
    }
};