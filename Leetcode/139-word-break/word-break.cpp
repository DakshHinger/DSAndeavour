class Solution {
    bool helper(int ind, string s, map<string,int>& mpp,vector<int>& dp){
        if(ind==s.size()) return 1;
        if(dp[ind]!=-1) return dp[ind];
        string str;
        for(int i=ind;i<s.size();i++){
            str+=s[i];
            if(mpp[str]){
                if(helper(i+1,s,mpp,dp)) return 1;
            }
        }
        return dp[ind]=0;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int> mpp;
        for(int i=0;i<wordDict.size();i++){
            mpp[wordDict[i]]=1;
        }
        vector<int> dp(s.size()+1,-1);
        return helper(0,s,mpp,dp);
    }
};