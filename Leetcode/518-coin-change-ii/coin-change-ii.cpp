class Solution {
    // int ans=0;
    int helper(int ind, vector<int>& coins, int amount, vector<vector<int>> &dp){
        if(amount==0){ 
            // ans++;
            return 1;
        }
        if (dp[ind][amount] != -1) {
            return dp[ind][amount];
        }
        int a=0;
        for(int i=ind;i<coins.size();i++){
            if(amount>=coins[i]){ 
                a+=helper(i,coins,amount-coins[i],dp);
            }
        }
        return dp[ind][amount]=a;
    }
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
        return helper(0,coins,amount,dp);
    }
};