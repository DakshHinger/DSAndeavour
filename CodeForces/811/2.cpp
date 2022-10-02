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
  vector<int> v(n, -1);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  map<int, int> mpp;
  for (int i = n - 1; i >= 0; i--) {
    if (mpp.find(v[i]) != mpp.end()) {
      break;
    } else {
      mpp[v[i]] = 1;
    }
  }
  cout <<n- mpp.size() << endl;
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