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
  int n, c, q;
  cin >> n >> c >> q;
  string str;
  cin >> str;
  for (int i = 0; i < c; i++) {
    int l, r;
    cin >> l >> r;
    string substr = str.substr(l - 1, r - l + 1);
    str += substr;
  }
  for (int i = 0; i < q; i++) {
    int ch;
    cin >> ch;
    cout << str[ch - 1] << endl;
  }
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