/*Problem statement
Given a sequence of numbers. Find all leaders in sequence. An element is a leader if it is strictly greater than all the elements on its right side.

Note:
1. Rightmost element is always a leader.

2. The order of elements in the return sequence must be the same as the given sequence**/

#include <bits/stdc++.h> 
#include<vector>
vector<int> findLeaders(vector<int> &nums, int n) {
    // Write your code here.
    vector<int>ans;
    int last=nums[n-1];
    ans.push_back(last);
    for(int i=n-2;i>=0;i--){
        if(nums[i]>last){
            ans.push_back(nums[i]);
            last=nums[i];
        }
    }
    reverse(ans.begin(),ans.end());

    return ans;
}
//Time:O(n)
//Space:O(n)
