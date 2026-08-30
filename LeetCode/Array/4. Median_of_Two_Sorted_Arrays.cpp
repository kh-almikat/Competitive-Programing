/*problem link: https://leetcode.com/problems/median-of-two-sorted-arrays/description/ */


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> num;

        for (auto x : nums1)
            num.push_back(x);

        for (auto x : nums2)
            num.push_back(x);

        sort(num.begin(), num.end());

        int mid = num.size()/2;

        if(num.size()%2 != 0) //odd
        {
            return num[mid];
        }
        else //even
        {
            return (num[mid - 1] + num[mid]) / 2.0;
        }                
    }
};