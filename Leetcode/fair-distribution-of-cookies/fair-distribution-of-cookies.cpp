class Solution {
    int ans=INT_MAX;
    void helper(int ind,vector<int>& cookies, int k,vector<int> &v){
        if(ind==cookies.size()){
            int maxi =*max_element (v.begin(), v.end());
            ans=min(ans,maxi);
            return;
        }

        for(int i=0;i<k;i++){
            v[i]+=cookies[ind];
            helper(ind+1,cookies,k,v);
            v[i]-=cookies[ind];
        }
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k,0);
        helper(0,cookies,k,v);
        return ans;
    }
};