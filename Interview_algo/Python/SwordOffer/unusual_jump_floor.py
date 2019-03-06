# -*- coding:utf-8 -*-
class Solution:
    def jumpFloorII(self, number):
        # write code here
        if number <= 0:
            return 0
        
        tmp = 1
        
        for i in range(2, number + 1):
            tmp *= 2
        return tmp