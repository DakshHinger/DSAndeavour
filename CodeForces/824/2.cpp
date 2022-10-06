#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

const int mod = 1000000007;

template <typename T, typename U> T ceil(T x, U y) {
  return (x > 0 ? (x + y - 1) / y : x / y);
}

void solve() {
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int fs = 2 * v[0] - 1;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    // ans += max(v[i] / fs -1, 0LL);
    ans += ceil(v[i], fs) -1;
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