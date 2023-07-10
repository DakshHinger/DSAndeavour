class Solution {
    vector<vector<int>> nums;
    vector<vector<int>> dp;
    int n;
    
    int MaxDecreasingLength (int prv_num, int ind) {
        if (ind == n) return 0;
        
        int &ans = dp[prv_num][ind];
        if (ans != -1) return ans;
        
        ans = 0;
        for (int j = 0; j < nums.size(); j ++) {
            if (nums[prv_num][ind-1] <= nums[j][ind])
                ans = max (ans, 1 + MaxDecreasingLength (j, ind+1));
        }
        
        return ans;    
    }
    
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2){
        dp.clear();
        nums = {nums1, nums2};
        n = nums1.size();
        
        dp.resize(2, vector<int>(n, -1));
        
        int ans = 1;
        for (int j = 0; j < n-1; j ++) {
            ans = max (ans, 1+MaxDecreasingLength(0, j+1));
            ans = max (ans, 1+MaxDecreasingLength(1, j+1));
        }
        return ans;
    }
};