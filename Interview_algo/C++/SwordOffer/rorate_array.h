#pragma once
#include<vector>
class rorate_array{
public:
    int minNumberInRotateArray(std::vector<int> rotateArray) {
        if (rotateArray.empty())
            return 0;
        int start = 0;
        int end = rotateArray.size() - 1;
        
        if (start == end)
            return rotateArray[start];
        
        if (rotateArray[start] < rotateArray[end])
            return rotateArray[start];
        
        while(start < end)
        {
            if (rotateArray[start + 1] >= rotateArray[start])
                start++;
            else{
                return rotateArray[start + 1];
            }
            if (rotateArray[end - 1] <= rotateArray[end])
                end--;
            else{
                return rotateArray[end];
            }
        }
        
        return rotateArray[start];
    }
};