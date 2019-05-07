#pragma once
#include <vector>


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if (pRootOfTree == nullptr)
        {
            return nullptr;
        }
        
        std::vector<TreeNode*> vec;
        
        midOrder(vec, pRootOfTree);
        
        vec[0]->left = nullptr;
        
        for (int i = 0; i < vec.size() - 1; ++i)
        {
            vec[i]->right = vec[i + 1];
            vec[i + 1]->left = vec[i];
        }
        
        vec[vec.size() - 1]->right = nullptr;
        
        return vec[0];
    }
    
    void midOrder(std::vector<TreeNode*> & vec, TreeNode * node)
    {
        if (node == nullptr)
            return;
        
        midOrder(vec, node->left);
        vec.push_back(node);
        midOrder(vec, node->right);
    }
};