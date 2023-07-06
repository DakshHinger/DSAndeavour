class Solution {
public:
  int minSubArrayLen(int target, vector<int>& nums) {
  deque<int> dq;
  int ans;
  int len = 0;
  int sum = 0;
  int mini = INT_MAX;
  for (int i = 0; i < nums.size(); i++) {
    if (sum < target) {
      sum += nums[i];
      dq.push_back(i);
      len++;
      if (sum < target) {
        continue;
      }
    }
    
    while (sum >= target) {
      sum -= nums[dq.front()];
      dq.pop_front();
      len--;
    }
    mini = min(mini, len+1);
  }
  if(mini==INT_MAX) return 0;
  return mini;
    }
};