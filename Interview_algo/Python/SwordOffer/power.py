# -*- coding:utf-8 -*-
class Solution:
    
    def Power(self, base, exponent):
        # write code here
        if abs(base) - 0.0 < 0.000001 and exponent <= 0:
            return 0
        
        sign = exponent < 0
        
        exponent = abs(exponent)
        
        if (exponent == 0):
            return 1.0
        if (exponent == 1):
            return base
        
        r = lambda x, y: return x * y
        
        result = reduce(r, [base for i in range(exponent)], 1.0)
        
        if sign:
            result = 1.0 / result
            
        return result