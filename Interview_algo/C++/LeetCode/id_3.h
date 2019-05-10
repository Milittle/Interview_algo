#pragma once

#include <algorithm>
#include <string>
#include <set>
#include <cmath>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int ans = 0;
        int n = s.size();
        int i = 0, j = 0;
        
        std::set<char> result;
        
        while(i < n && j < n)
        {
            if (result.count(s[j]) == 0)
            {
                result.emplace(s[j++]);
                ans = std::max(ans, j - i);
            }
            else
            {
                result.erase(s[i++]);
            }
        }
        
        return ans;
    }
};