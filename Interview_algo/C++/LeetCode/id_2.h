#pragma once


 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int next = 0;
        ListNode * result = new ListNode(0);
        ListNode * result_next = result;
        while(l1 && l2){
            ListNode * tmp = new ListNode(0);
            tmp->val = (l1->val + l2->val + next) % 10;
            next = (l1->val + l2->val + next) / 10;
            result_next->next = tmp;
            result_next = result_next->next;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if (!l1 && l2){
            while(next > 0 && l2){
                ListNode * tmp = new ListNode(0);
                tmp->val = (l2->val + next) % 10;
                next = (l2->val + next) / 10;
                result_next->next = tmp;
                result_next = result_next->next;
                
                l2 = l2->next;
            }
            result_next->next = l2;
        }
        else{
            while(next > 0 && l1){
                ListNode * tmp = new ListNode(0);
                tmp->val = (l1->val + next) % 10;
                next = (l1->val + next) / 10;
                result_next->next = tmp;
                result_next = result_next->next;
                
                l1 = l1->next;
            }
            result_next->next = l1;
        }
        
        if (next > 0){
            ListNode * tmp = new ListNode(next);
            result_next->next = tmp;
        }
        
        return result->next;
    }
};