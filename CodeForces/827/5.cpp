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
  int n, q;
  cin >> n >> q;
  vector<int> height(n);
  vector<int> len(q);
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> len[i];
  }

  //   int t = q;
  for (int i = 0; i < q; i++) {
    int t = len[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (height[i] > t) {
        break;
      }
      ans += height[i];
    }
    cout << ans << " ";
  }
  cout << endl;
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