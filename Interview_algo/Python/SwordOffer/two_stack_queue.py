# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.queue = []
    def push(self, node):
        # write code here
        self.queue.append(node)
    def pop(self):
        # return xx
        if self.queue == []:
            return -1
        tmp = self.queue[0]
        if len(self.queue) == 1:
            self.queue = []
        else:
            self.queue = self.queue[1:]
        return tmp