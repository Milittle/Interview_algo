#pragma once
#include <vector>
struct TreeNode{
    int val_;
    TreeNode * left_;
    TreeNode * right_;

    TreeNode(int val):val_(val),left_(nullptr),right_(nullptr){

    }

};

class reconstruct_binrary_tree{
public:
    TreeNode* reConstructBinaryTree(std::vector<int> pre, std::vector<int> vin) {
        
        if (pre.size() == 0)
            return nullptr;
        
        if (pre.size()== 1)
        {
            TreeNode * head = new TreeNode(pre[0]);
            head->left_ = nullptr;
            head->right_ = nullptr;
            return head;
        }
        
        TreeNode * head = new TreeNode(pre[0]);
        int i = 0;
        for (i; i < vin.size(); ++i)
        {
            if (vin[i] == pre[0] && i == 0)
                break;
            
            if (vin[i] == pre[0])
            {
                head->left_ = reConstructBinaryTree(std::vector<int>(pre.begin() + 1, 
                             pre.begin() + i + 1), std::vector<int>(vin.begin(), vin.begin() + i + 1));
                break;
            }
        }
        
        head->right_ = reConstructBinaryTree(std::vector<int>(pre.begin() + i + 1, 
                      pre.end()), std::vector<int>(vin.begin() + i + 1, vin.end()));
        
        return head;
    }
};