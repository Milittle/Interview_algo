# -*- coding:utf-8 -*-
class Solution:
    def reOrderArray(self, array):
        # write code here
        tmp1 = []
        tmp2 = []
        
        for i in array:
            if i & 0x1 == 1:
                tmp1.append(i)
            else:
                tmp2.append(i)
        array = tmp1 + tmp2
        
        return array