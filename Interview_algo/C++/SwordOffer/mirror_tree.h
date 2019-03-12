#pragma once

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr) {
	}
};
class mirror_tree
{
public:
    void Mirror(TreeNode *pRoot) {
        if (pRoot == nullptr)
            return;
        
        TreeNode * tmp = nullptr;
        tmp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = tmp;
        
        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }
};