# -*- coding:utf-8 -*-
class Solution:
    # s Ô´×Ö·û´®
    def replaceSpace(self, s):
        # write code here
        if s is None:
            return ''
        s_list = s.split(' ')

        s_sum = '%20'.join(s_list)
        
        return s_sum