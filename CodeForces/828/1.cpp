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
  string s;
  cin >> s;
  map<int, char> mpp;
  for (int i = 0; i < n; i++) {
    if (mpp.find(v[i]) != mpp.end()) {
      if (mpp[v[i]] != s[i]) {
        cout << "NO" << endl;
        return;
      }
    } else {
      mpp[v[i]] = s[i];
    }
  }
  cout << "YES" << endl;
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