class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> ans;
    for(int i=0;2*i<nums.size();i++){
        int freq=nums[2*i];
        int value=nums[2*i+1];
        for(int i=0;i<freq;i++){
            ans.push_back(value);
        }
    }   
    return ans;
    }
};