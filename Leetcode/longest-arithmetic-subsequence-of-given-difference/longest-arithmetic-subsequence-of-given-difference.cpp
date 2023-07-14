class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        int ans = 0  , n = arr.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i< n ; i++)
        {
            if(mp[arr[i]-diff] > 0 )
            {
                mp[arr[i]]= mp[arr[i]-diff] +1 ;
            }
            else{
                mp[arr[i]] = 1 ;
            }
        }
        int maxi = 0 ;
        for(auto it : mp)
        {
            maxi = max(maxi , it.second);
        }
        return maxi ;
    }

};