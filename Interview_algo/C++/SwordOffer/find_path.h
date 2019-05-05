#pragma once
#include <vector>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
    std::vector<std::vector<int> > FindPath(TreeNode* root,int expectNumber) 
    {
        std::vector<std::vector<int> > result;
         if (expectNumber <= 0 || root == nullptr)
             return result;
        std::vector<int> rootVec;
        FindPath(result, rootVec, root, expectNumber);
        return result;
    }
    
    void FindPath(std::vector<std::vector<int> > & result, std::vector<int> & rootVec, TreeNode * root, int expectNumber)
    {
        if (root != nullptr && root->left == nullptr && root->right == nullptr && expectNumber == root->val)
        {
            rootVec.push_back(root->val);
            std::vector<int> tmp(rootVec.begin(), rootVec.end());
            result.emplace_back(tmp);
            return;
        }
        
        if(expectNumber < 0 || root == nullptr)
        {
            return;
        }
            
        rootVec.push_back(root->val);
        std::vector<int> leftVec(rootVec.begin(), rootVec.end());
        FindPath(result, leftVec, root->left, expectNumber - root->val);
        
        std::vector<int> rightVec(rootVec.begin(), rootVec.end());
        FindPath(result, rightVec, root->right, expectNumber - root->val);

        //并不一定是最长的在最前面
    }
};