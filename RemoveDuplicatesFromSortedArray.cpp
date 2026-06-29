/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.**/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        int k = 1; 
        
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[k-1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
//Time:O(n)
//Space:O(1)
