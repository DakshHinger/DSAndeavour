class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(nums.size()<2*k+1){
            vector<int> ans;
            while(ans.size() < nums.size()){
                 ans.push_back(-1);
            }
            return ans;
        }
        vector<int> ans;
        long long sum=0;
        for(int i=0;i<k;i++){
            ans.push_back(-1);
            sum+=nums[i];
        }
        int window=2*k+1;
        for(int i=k;i<nums.size();i++){
            if(i<window-1){
                sum+=nums[i];
                continue;
            }
            sum+=nums[i];
            if(i-window>=0)
            {
                sum-=nums[i-window];
            }
            cout<<sum<<" ";
            ans.push_back(sum/window);
        }
        while(ans.size()<nums.size()) ans.push_back(-1);
        return ans;
    }
};