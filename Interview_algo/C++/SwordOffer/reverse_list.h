#pragma once
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class reverse_list {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if (!pHead || !pHead->next)
            return pHead;
        
        ListNode * pre = pHead;
        ListNode * next = pHead->next;
        ListNode * tmp;
        pHead->next = nullptr;
        while(next)
        {
            tmp = next->next;
            next->next = pre;
            pre = next;
            next = tmp;
        }
        pHead = pre;
        
        return pHead;
    }
};