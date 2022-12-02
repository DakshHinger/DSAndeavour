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
  int n;
  cin >> n;
  vector<int> v(n);
  int p = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    // p = (v[i] & (~(v[i] - 1)));
    p = v[i];
    while (p > 0 && p % 2 == 0) {
      count++;
      p /= 2;
    }
    // cout << count << " ";
  }
  if (n <= count) {
    cout << 0 << endl;
    return;
  }
  vector<int> por;
  for (int i = 1; i <= n; i++) {
    p = i;
    int cnt = 0;
    while (p > 0 && p % 2 == 0) {
      cnt++;
      p /= 2;
    }
    por.push_back(cnt);
    // cout << count << " ";
  }
  sort(por.begin(), por.end(), greater<int>());
  //   for (int i = 0; i < por.size(); i++) {
  //     cout << por[i] << " ";
  //   }
  int ans = 0;
  n -= count;
  for (int i = 0; i < por.size(); i++) {
    ans++;
    n -= por[i];
    if (n <= 0) {
      cout << ans << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int32_t main() {
  fastio();
  int testcase = 1;
  cin >> testcase;
  while (testcase--) {
    solve();
  }
  cout << endl;
  return 0;
}