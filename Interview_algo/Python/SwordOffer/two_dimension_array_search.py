# -*- coding:utf-8 -*-
class Solution:
    # array ��ά�б�
    def Find(self, target, array):
        for i in range(len(array)):
            for j in range(len(array[i])):
                if target == array[i][j]:
                    return True
        return False
        # write code here