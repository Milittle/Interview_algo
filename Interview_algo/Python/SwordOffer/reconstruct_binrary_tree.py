# -*- coding:utf-8 -*-
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None
class Solution:
    # 返回构造的TreeNode根节点
    def reConstructBinaryTree(self, pre, tin):
        # write code here
        if pre == []:
            return None
        if len(pre) == 1:
            return TreeNode(pre[0])
        
        i = 0
        treeNode = TreeNode(pre[0])
        
        while i <= len(tin) - 1:
            if tin[i] == pre[0] and i == 0:
                break
            if tin[i] == pre[0]:
                treeNode.left = self.reConstructBinaryTree(pre[1:i+1], tin[:i+1])
                break
            i += 1
        treeNode.right = self.reConstructBinaryTree(pre[i+1:], tin[i+1:])
        
        return treeNode