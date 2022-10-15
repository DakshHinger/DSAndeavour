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
  vector<int> v1(n);
  vector<int> v2(n);
  int z1 = 0, z2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> v1[i];
    if (v1[i] == 0) {
      z1++;
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> v2[i];
    if (v2[i] == 0) {
      z2++;
    }
  }
  if (v1 == v2) {
    cout << 0 << endl;
    return;
  }
  //   if (abs(z1 - z2) < 1)
  //     cout << abs(z1 - z2) + 1 << endl;
  //   else {
  //     cout << abs(z1 - z2) << endl;
  //   }
  int ans1 = abs(z1 - z2) + 1;
  int ans2 = 0;
  for (int i = 0; i < n; i++) {
    if (v1[i] != v2[i]) {
      ans2++;
    }
  }
  cout << min(ans1, ans2) << endl;
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