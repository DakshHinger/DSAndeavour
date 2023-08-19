class Solution {
    bool helper(int ind, vector<int>& nums, vector<int> &dp){
        if(ind==nums.size()){
            return true;
        }
        if(dp[ind]!=-1) return dp[ind];
        if(ind+1<nums.size() && nums[ind]==nums[ind+1] && helper(ind+2,nums,dp)){
            return dp[ind]=true;
        }
        if(ind+2<nums.size() && nums[ind]==nums[ind+1] && nums[ind]==nums[ind+2] && helper(ind+3,nums,dp)){
            return dp[ind]=true;
        }
        if(ind+2<nums.size() && nums[ind]+1==nums[ind+1] && nums[ind]+2==nums[ind+2] && helper(ind+3,nums,dp)){
            return dp[ind]=true;
        }
        return dp[ind]=false;
    }
public:
    bool validPartition(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return helper(0,nums,dp);
    }
};