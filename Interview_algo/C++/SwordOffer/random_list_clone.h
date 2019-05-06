#pragma once
#include <map>

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == nullptr)
            return nullptr;
        
        RandomListNode * currentNode = pHead;
        RandomListNode * newHead = nullptr, * preNode = nullptr, * newNode = nullptr;
        std::map<RandomListNode *, RandomListNode *> nodeMap;
        
        while(currentNode)
        {
            newNode = new RandomListNode(currentNode->label);
            nodeMap[currentNode] = newNode;
            currentNode = currentNode->next;
            
            if (newHead == nullptr)
            {
                newHead = newNode;
            }
            else
            {
                preNode->next = newNode;
            }
            preNode = newNode;
        }
        
        currentNode = pHead;
        newNode = newHead;
        while(currentNode != nullptr && newNode != nullptr)
        {
            RandomListNode * randomNode = currentNode->random;
            RandomListNode * random = nodeMap[randomNode];
            newNode->random = random;
            
            currentNode = currentNode->next;
            newNode = newNode->next;
        }
        
        return newHead;
    }
};