#pragma once


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr) {
	}
};

class has_sub_tree
{
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2 == nullptr || pRoot1 == nullptr)
            return false;
        return isSubTree(pRoot1, pRoot2) || HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right, pRoot2);
    }
    
    bool isSubTree(TreeNode * root1, TreeNode * root2)
    {
        if (!root2) return true;
        if (!root1) return false;
        if (root1->val == root2->val && isSubTree(root1->left, root2->left) && isSubTree(root1->right, root2->right))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};