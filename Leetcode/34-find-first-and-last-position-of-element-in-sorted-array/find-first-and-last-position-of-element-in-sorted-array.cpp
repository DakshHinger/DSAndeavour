class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int k) 
    {
        int n = arr.size();
        int lb = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
        vector<int> ans(2);
        
        if (lb < n && arr[lb] == k) {
            ans[0] = lb;
        } else {
            ans[0] = -1;
        }
        
        int ub = upper_bound(arr.begin(), arr.end(), k) - arr.begin();
        
        if (ub > 0 && arr[ub - 1] == k) {
            ans[1] = ub - 1;
        } else {
            ans[1] = -1;
        }
        
        return ans;
    }
};