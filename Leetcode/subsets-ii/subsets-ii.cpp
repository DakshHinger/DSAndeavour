class Solution {
    set<vector<int>> ans;
    void helper(int ind, vector<int>& nums, vector<int>& v){
        if(ind == nums.size()){
            ans.insert(v);
            return;
        }
        v.push_back(nums[ind]);
        helper(ind+1,nums,v);
        v.pop_back();
        helper(ind+1,nums,v);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> v;
        helper(0,nums,v);
        for(auto it: ans){
            result.push_back(it);
        }
        return result;
    }
};


