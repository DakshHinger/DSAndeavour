class KthLargest {
    int k;
    vector<int> nums;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        sort(nums.begin(),nums.end(),greater<int>());
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        // nums.resize(k);
        this->nums=nums;
    }
    
    int add(int val) {
        nums.push_back(val);
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]) swap(nums[i],nums[i-1]);
        }
        return nums[k-1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */