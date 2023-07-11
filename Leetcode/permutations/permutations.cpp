class Solution {
    vector<vector<int>> ans;
    void helper(int ind, vector<int>& nums){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            helper(ind+1,nums);
            swap(nums[i],nums[ind]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        helper(0,nums);
        return ans;
    }
};