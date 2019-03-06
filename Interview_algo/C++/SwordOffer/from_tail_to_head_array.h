#pragma once
#include <vector>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
  };


class from_tail_to_head_array {
public:
	std::vector<int> printListFromTailToHead(ListNode* head) {
		if (head == nullptr)
			return std::vector<int>();

		if (head->next == nullptr)
		{
			return std::vector<int>{head->val};
		}

		std::vector<int> tmp;

		while (head) {
			tmp.push_back(head->val);
			head = head->next;
		}
		return std::vector<int>(tmp.rbegin(), tmp.rend());
	}
};