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
  int n, k, b, s;
  cin >> n >> k >> b >> s;
  int maxi = (k * b);
  int mini = n * (k - 1) + (b * k) ;

  if (s < maxi || (s > mini)) {
    cout << -1 << endl;
    return;
  }

  vector<int> v(n, 0);
  int fs = k * b;
  v[0] = fs;
  s -= fs;
  if (s > 0) {
    for (int i = 0; i < n; i++) {
      int yoo = min(k - 1, s);
      s -= yoo;
      v[i] += yoo;
    }
  }
  while (n--) {
    cout << v[n] << " ";
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