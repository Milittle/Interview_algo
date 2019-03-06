#-*- coding:utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    # ���ش�β����ͷ�����б�ֵ���У�����[1,2,3]
    def printListFromTailToHead(self, listNode):
        # write code here
        sum_list = []
        
        while listNode is not None:
            sum_list.append(listNode.val)
            listNode = listNode.next
        
        reverse_list = sum_list[::-1]
        return reverse_list