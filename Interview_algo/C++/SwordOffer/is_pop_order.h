#pragma once
#include <vector>
#include <stack>
using std::vector;
using std::stack;

class is_pop_order
{
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if (pushV.size() != popV.size() || pushV.empty() || popV.empty())
            return false;
        
        std::stack<int> tmp;
        int z = 0;
        
        for (int i = 0; i < popV.size(); ++i)
        {
            for (int j = z; j < pushV.size(); ++j)
            {
                tmp.push(pushV[j]);
                z++;
                if (popV[i] == pushV[j])
                {
                    break;
                }
            }
            
            if (!tmp.empty() && z == pushV.size() - 1 && tmp.top() != popV[i])
                return false;
            if (!tmp.empty() && tmp.top() == popV[i])
            {
                tmp.pop();
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};