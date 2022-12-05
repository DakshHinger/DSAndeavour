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
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int ans = 0;
  ans += v[n - 1] - v[0];
  //   int one = v[n / 2];
  //   int maxi1 = max(v[n - 1] - one, one - v[0]);
  //   if (n / 2 + 1 < n - 1) {
  //     one = v[n / 2 + 1];
  //     int maxi2 = max(v[n - 1] - one, one - v[0]);
  //     maxi1 = min(maxi1, maxi2);
  //   }
  //   ans += maxi1;
  int res = INT_MAX;
  for (int i = 1; i < n - 1; i++) {
    int one = v[i];
    int maxi2 = max(v[n - 1] - one, one - v[0]);
    res = min(res, maxi2);
  }
  ans += res;
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