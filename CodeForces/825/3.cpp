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
  int ans = 0;
  int lst = 0;
  for (int j = 0; j < n; j++) {
    int count = 0;
    int c = 1;
    for (int i = j; i < n; i++) {
      if (v[i] >= c) {
        count++;
      } else {
        // int ans1 = 0;
        // ans1 += count * (count + 1);
        // ans1 /= 2;
        // ans += ans1;
        ans += count;
        count = 0;
      }
      if (i == n - 1) {
        // int ans1 = 0;
        // ans1 += count * (count + 1);
        // ans1 /= 2;
        // ans += ans1;
        ans += count;
        cout << ans << "    ";
      }
      c++;
    }
  }
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