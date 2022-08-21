#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

const int mod = 1000000007;

void solve() {
  int target;
  vector<int> nums;
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
    // int last = 0;
    while (sum >= target) {
      //   last = nums[dq.front()];
      sum -= nums[dq.front()];
      dq.pop_front();
      len--;
    }
    len++;
    mini = min(mini, len);
  }
  cout << mini;
}

int32_t main() {
  fastio();
  int testcase = 1;
  // cin >> testcase;
  while (testcase--) {
    solve();
  }
  cout << endl;
  return 0;
}