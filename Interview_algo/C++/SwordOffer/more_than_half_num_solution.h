#pragma once

#include <vector>
#include <map>
using std::vector;

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if (numbers.size() == 0)
            return 0;
        
        std::map<int, int> result;
        
        for (auto it = numbers.begin(); it != numbers.end(); ++it)
        {
            result[*it]++;
            if (result[*it] * 2 > numbers.size())
                return *it;
        }
        
        return 0;
    }
};