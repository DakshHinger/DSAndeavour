class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int ct=1;
        for(int i=1;i<nums.size();i++){
            // cout<<nums[i];
            if(nums[i]==nums[i-1]){
                // cout<<"1 ";
                ct++;
            }else if(nums[i]!=nums[i-1] && ct==3){
                ct=1;
            }else{
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};