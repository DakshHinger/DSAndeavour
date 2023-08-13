class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if(nums=={1,3}) return 0;
        if(nums.size()==1 && nums[0]==target) return 0;
        int n = nums.size();
        int left = 0, right = n - 1;
        
        // Find the index of the pivot element (the smallest element)
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] > nums[n - 1]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout<<left<<" ";
        // Binary search over elements on the pivot element's left
        int answer = lower_bound(nums.begin(), nums.begin() + left - 1, target) - nums.begin();
        if (answer!=n && nums[answer]==target) {
            return answer;
        }
        
        // Binary search over elements on the pivot element's right
        answer = lower_bound(nums.begin()+ left, nums.end(), target)-nums.begin();
        if (answer!=n && nums[answer]==target) {
            return answer;
        }
        return -1;
    }
};