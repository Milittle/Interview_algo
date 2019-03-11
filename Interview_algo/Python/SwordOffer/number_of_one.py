# -*- coding:utf-8 -*-
class Solution:
    def NumberOf1(self, n):
        # write code here
        result = 0
        if n < 0:
            n = n & 0xffffffff
        while n:
            result+=1
            n = n & (n - 1)
        return result