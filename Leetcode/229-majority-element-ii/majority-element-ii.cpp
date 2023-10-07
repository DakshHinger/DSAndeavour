class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=nums.size()/3;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(i+count<nums.size() && nums[i]==nums[i+count]) v.push_back(nums[i]);
        }
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};