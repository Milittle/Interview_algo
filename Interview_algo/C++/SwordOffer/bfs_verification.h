#pragma once
#include <vector>
using std::vector;

class bfs_verification{
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if (sequence.size() == 0)
            return false;
        return judge_bst(sequence.data(), sequence.size());
    }
    
    int judge_bst(int * arr, int len)
    {
        int i, j, root;
        
        if (len <= 0)
            return true;

        root = *(arr + len - 1);
        
        for (i = 0; i < len - 1; i ++) {
            if (*(arr + i) > root)
                break;
        }

        for (j = i; j < len - 1; j ++) {
            if (*(arr + j) < root) 
                return false;
        }

        int left, right;
        left = true;
        left = judge_bst(arr, i);

        right = true;
        right = judge_bst(arr + i, len - 1 - i);

        return (right && left);
    }
};