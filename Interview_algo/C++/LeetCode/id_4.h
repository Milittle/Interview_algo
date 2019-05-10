#pragma once
#include <vector>

using std::vector;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int mid = (n1 + n2) / 2;
        int next = (n1 + n2) % 2;
        
        std::vector<int> result;
        
        int i = 0, j = 0;
        while(i < n1 && j < n2)
        {
            if (result.size() > mid)
            {
                return result[result.size() - 1];
            }
            else if (result.size() == mid && next != 1)
            {
                int tmp = nums1[i] <= nums2[j] ? nums1[i]:nums2[j];
                return (result[result.size() - 1] + tmp) / 2.0;
            }
            if (nums1[i] <= nums2[j])
            {
                result.emplace_back(nums1[i++]);
            }
            else
            {
                result.emplace_back(nums2[j++]);    
            }
        }
        
        while(i < n1)
        {
             if (result.size() > mid)
            {
                return result[result.size() - 1];
            }
            else if (result.size() == mid && next != 1)
            {
                int tmp = nums1[i];
                return (result[result.size() - 1] + tmp) / 2.0;
            }
            result.emplace_back(nums1[i++]);
        }
        
        while(j < n2)
        {
             if (result.size() > mid)
            {
                return result[result.size() - 1];
            }
            else if (result.size() == mid && next != 1)
            {
                int tmp = nums2[j];
                return (result[result.size() - 1] + tmp) / 2.0;
            }
            result.emplace_back(nums2[j++]);
        }
        
        return result[result.size() - 1];
    }
};