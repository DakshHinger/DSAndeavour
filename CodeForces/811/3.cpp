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
  vector<int> v;
  int x = 9;
  while (n > 0) {
    if (n > x) {
      v.push_back(x);
      n -= x;
      x--;
    } else {
      v.push_back(n);
      n = 0;
      break;
    }
  }
  reverse(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }

  //   for (int i = v.size() - 1; i >= 0; i--) {
  //     cout << v[i];
  //   }
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