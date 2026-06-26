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