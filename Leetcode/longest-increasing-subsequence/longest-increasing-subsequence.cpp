class Solution {
    
    // int solve(vector<int>&nums,int curr,int prev, vector<vector<int>>&dp){
    //     if(curr==nums.size()){
    //             return 0;
    //     }

    //     if(dp[curr][prev+1]!=-1)
    //         return dp[curr][prev+1];

    //     int option1=0;

    //     if(prev==-1 || nums[curr]>nums[prev]){
    //          option1=1+solve(nums,curr+1,curr,dp);
    //     }

    //         int option2= solve(nums,curr+1,prev,dp);

    //         return dp[curr][prev+1]=max(option1,option2);

    // }


public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>temp.back()){
                temp.push_back(nums[i]);
                len++;
            }
            else{
                int ind =lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }
        }
        return len;
    }
};