#pragma once

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(nullptr) {
	}
};

class find_kth_totail {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        
        if (pListHead == nullptr || k == 0)
        {
            return nullptr;
        }
        
        ListNode * first = pListHead;
        ListNode * second = pListHead;
        
        for (int i = 0; i < k - 1; ++i)
        {
            if (first->next != nullptr)
            {
                first = first->next;
            }
            else
            {
                return nullptr;
            }
            
        }
        
        while(first->next != nullptr)
        {
            first = first->next;
            second = second->next;
        }
        
        return second;
    }
};