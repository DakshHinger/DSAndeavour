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
  string s;
  cin >> s;
  if (n <= 1) {
    cout << 2 * n << endl;
    return;
  }
  int ans = 2;
  sort(s.begin(), s.end());
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) {
      ans += 2;
    } else {
      ans += 1;
    }
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