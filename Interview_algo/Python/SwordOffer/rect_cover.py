# -*- coding:utf-8 -*-
class Solution:
    def rectCover(self, number):
        # write code here
        if number == 0:
            return 0
        if number == 1:
            return 1
        
        pre = 1
        cur = 2
        
        for i in range(3, number + 1):
            tmp = cur
            cur = pre + cur
            pre = tmp
            
        return cur