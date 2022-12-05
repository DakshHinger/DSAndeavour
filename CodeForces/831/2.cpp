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
  int fs = 0, ls;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    cin >> fs >> ls;
    v.push_back({max(fs, ls), min(fs, ls)});
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  int ans = 0;
  ans += v[0].first;
  for (int i = 0; i < n - 1; i++) {
    ans += v[i].first - v[i + 1].first + 2 * v[i].second;
  }
  ans += 2 * v[n - 1].second;
  ans += v[n - 1].first;
  cout << ans << endl;
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