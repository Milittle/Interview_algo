# -*- coding:utf-8 -*-
class Solution:
    def Fibonacci(self, n):
        # write code here
        if n <= 0:
            return 0
        
        pre = 1
        next = 1
        for i in range(3, n + 1):
            tmp = next
            next = pre + next
            pre = tmp
            
        return next