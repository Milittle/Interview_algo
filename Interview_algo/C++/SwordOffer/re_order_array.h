#pragma once
#include <vector>
class re_order_array
{
public:
    //空间换时间   暂时还没有想到时间复杂度低于o(n)的解法。
    void reOrderArray(std::vector<int> &array) {
        std::vector<int> tmp1;
        std::vector<int> tmp2;
        
        //think in-place can do this thining
        for (auto it = array.begin(); it != array.end(); ++it)
        {
            if (*it % 2 == 1)
            {
                tmp1.emplace_back(*it);
            }
            else
            {
                tmp2.push_back(*it);
            }
        }
        
        array.clear();
        
        std::copy(tmp1.begin(), tmp1.end(), std::back_inserter(array));
        std::copy(tmp2.begin(), tmp2.end(), std::back_inserter(array));
    }
};