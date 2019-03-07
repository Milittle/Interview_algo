# -*- coding:utf-8 -*-
class Solution:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        if len(rotateArray) == 0:
            return 0
        
        start = 0
        end = len(rotateArray) - 1
        
        if (start == end):
            return rotateArray[start]
        
        if (rotateArray[start] < rotateArray[end]):
            return rotateArray[start]
        
        while start < end:
            if rotateArray[start + 1] >= rotateArray[start]:
                start += 1
            else:
                return rotateArray[start + 1]
            
            if rotateArray[end - 1] <= rotateArray[end]:
                end -= 1
            else:
                return rotateArray[end]
        return rotateArray[end]