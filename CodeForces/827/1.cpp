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
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b + c) {
    cout << "YES" << endl;
    return;
  }
  if (b == a + c) {
    cout << "YES" << endl;
    return;
  }
  if (c == b + a) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
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