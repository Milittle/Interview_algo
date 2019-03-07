# -*- coding:utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
class Solution:
    # 返回ListNode
    def ReverseList(self, pHead):
        # write code here
        if pHead is None or pHead.next is None:
            return pHead
        
        pre = pHead
        cur = pHead.next
        pHead.next = None
        
        while cur:
            tmp = cur.next
            cur.next = pre
            pre = cur
            cur = tmp
        
        pHead = pre
        
        return pHead