# -*- coding:utf-8 -*-
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
class Solution:
    # 返回从上到下每个节点值列表，例：[1,2,3]
    def PrintFromTopToBottom(self, root):
        # write code here
        if root is None:
            return []
        i = 0
        j = 0
        tmp = []
        result = []
        tmp.append(root)
        j+=1
        while i != j:
            node = tmp[i]
            result.append(node.val)
            i+=1
            if node.left is not None:
                tmp.append(node.left)
                j+=1
            if node.right is not None:
                tmp.append(node.right)
                j+=1
        return result