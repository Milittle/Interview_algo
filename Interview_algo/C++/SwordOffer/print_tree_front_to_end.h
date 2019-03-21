#pragma once
#include <vector>
#include <queue>
using std::vector;
using std::queue;

struct TreeNode {
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int val):val(val){}    
};

class print_tree_front_to_bottom{
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        if (root == nullptr)
            return std::vector<int>();
        std::vector<int> result;
        
        std::queue<TreeNode *> tmp;
        tmp.push(root);
        
        while(!tmp.empty())
        {
            TreeNode * node = tmp.front();
            tmp.pop();
            result.emplace_back(node->val);
            if (node->left != nullptr)
            {
                tmp.push(node->left);
            }
            if (node->right != nullptr)
            {
                tmp.push(node->right);
            }
        }
        return result;
    }
};