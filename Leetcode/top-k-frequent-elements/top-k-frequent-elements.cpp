class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<pair<int,int>> st;
        int p=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]){
                p++;
            }else{
                st.insert({-p,nums[i-1]});
                p=1;
            }
        }
        st.insert({-p,nums[n-1]});
       vector<int> ans;
       for(auto it = st.begin(); it!=st.end(); it++){
           ans.push_back(it->second);
           if(ans.size()==k) break;
       }
       return ans;
    }
};