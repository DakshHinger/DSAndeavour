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
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    auto itr1 = lower_bound(a.begin() + i + 1, a.end(), l - a[i]);
    auto itr2 = upper_bound(a.begin() + i + 1, a.end(), r - a[i]);
    ans += itr2 - itr1;
  }
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