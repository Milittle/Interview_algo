#pragma once

#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> Permutation(std::string str) {
        std::vector<std::string> result;
        if (str.size() == 0)
            return result;
        
        do{
            result.emplace_back(str);
        }while(std::next_permutation(str.begin(), str.end()));
        
        return result;
    }
};