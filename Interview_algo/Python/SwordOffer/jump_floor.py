# -*- coding:utf-8 -*-
class Solution:
    def jumpFloor(self, number):
        # write code here
        if number <= 0:
            return 0
        if number == 1:
            return 1
        pre = 1
        next = 2
        
        for i in range(3, number + 1):
            tmp = next
            next = pre + next
            pre = tmp
        
        return next