#pragma once
#include <vector>
using std::vector;

class print_matrix{
    public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        if (matrix.size() == 0)
            return vector<int>();
        
        vector<int> tmp;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int start = 0;
        
        while( rows > (start * 2) && cols > (start * 2))
        {
            printMatrixWise(matrix, tmp, rows, cols, start);
            start++;
        }
        
        return tmp;
    }
    
    void printMatrixWise(vector<vector<int> > & matrix, vector<int> & tmp, int rows, int cols, int start)
    {
        int end_rows = rows - start;
        int end_cols = cols - start;
        
        //1
        for ( int i = start; i < end_cols; ++i )
        {
            tmp.emplace_back(matrix[start][i]);
        }
        
        //2
        if (start < end_rows - 1)
        {
            for ( int i = start + 1; i < end_rows; ++i)
            {
                tmp.emplace_back(matrix[i][end_cols - 1]);
            }
        }
        
        //3
        if (start < end_rows - 1 && start < end_cols - 1)
        {
            for ( int i = end_cols - 2; i >= start; --i)
            {
                tmp.emplace_back(matrix[end_rows - 1][i]);
            }
        }
        
        //4
        if (start < end_rows - 1 && start < end_cols - 1)
        {
            for ( int i = end_rows - 2; i >= start + 1; --i)
            {
                tmp.emplace_back(matrix[i][start]);
            }
        }
    }
};