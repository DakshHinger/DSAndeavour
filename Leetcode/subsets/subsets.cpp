class Solution {
    vector<vector<int>> ans;
    void helper(int ind, vector<int>& nums, vector<int>& v){
        if(ind == nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        helper(ind+1,nums,v);
        v.pop_back();
        helper(ind+1,nums,v);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        helper(0,nums,v);
        return ans;
    }
};